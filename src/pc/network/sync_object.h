#ifndef SYNC_OBJECT_H
#define SYNC_OBJECT_H

#define MAX_SYNC_OBJECTS 256 // note: increasing this requires code to be rewritten
#define MAX_SYNC_OBJECT_FIELDS 64

#include "pc/network/packets/packet.h"

struct SyncObject {
    u32 id;
    struct Object* o;
    float maxSyncDistance;
    bool owned;
    f32 clockSinceUpdate;
    void* behavior;
    u16 txEventId;
    u16 rxEventId[MAX_PLAYERS];
    u16 randomSeed;
    u32 extraFieldCount;
    bool fullObjectSync;
    bool syncDeathEvent;
    bool hasStandardFields;
    float minUpdateRate;
    float maxUpdateRate;
    u8 (*ignore_if_true)(void);
    void (*on_received_pre)(u8 fromLocalIndex);
    void (*on_received_post)(u8 fromLocalIndex);
    void (*on_sent_pre)(void);
    void (*on_sent_post)(void);
    void (*override_ownership)(u8* shouldOverride, u8* shouldOwn);
    void (*on_forget)(void);
    void* extraFields[MAX_SYNC_OBJECT_FIELDS];
    u8 extraFieldsSize[MAX_SYNC_OBJECT_FIELDS];
    bool rememberLastReliablePacket;
    bool lastReliablePacketIsStale;
    u16 extendedModelId;
    struct Packet lastReliablePacket;
};


  ////////////
 // system //
////////////

void sync_objects_clear(void);
void sync_object_forget(u32 syncId);
void sync_object_forget_last_reliable_packet(u32 syncId);
struct SyncObject* sync_object_init(struct Object *o, float maxSyncDistance);
void sync_object_init_field(struct Object *o, void* field);
void sync_object_init_field_with_size(struct Object *o, void* field, u8 size);

  /////////////
 // getters //
/////////////

struct SyncObject* sync_object_get(u32 syncId);
struct Object* sync_object_get_object(u32 syncId);
bool sync_object_is_initialized(u32 syncId);
bool sync_object_is_owned_locally(u32 syncId);
struct Packet* sync_object_get_last_reliable_packet(u32 syncId);

  /////////////
 // setters //
/////////////

void sync_object_override_object(u32 syncId, struct Object* o);

  ///////////
 // utils //
///////////

float player_distance(struct MarioState* marioState, struct Object* o);
bool sync_object_should_own(u32 syncId);
bool sync_object_set_id(struct Object* o);

#endif