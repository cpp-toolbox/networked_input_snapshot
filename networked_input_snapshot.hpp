#ifndef NETWORKED_INPUT_SNAPSHOT_HPP
#define NETWORKED_INPUT_SNAPSHOT_HPP

#include <cstdint>
#include <ostream>

class NetworkedInputSnapshot {
public:
    uint64_t client_id;
    // these are guarenteed to be not -1 when received on the server.
    uint64_t client_input_history_insertion_time_epoch_ms = -1;
    double time_delta_used_for_client_side_processing_ms = -1;
    bool left_pressed = false;
    bool right_pressed = false;
    bool forward_pressed = false;
    bool backward_pressed = false;
    bool jump_pressed = false;
    double mouse_position_x = 0.0, mouse_position_y = 0.0;
};

#endif // NETWORKED_INPUT_SNAPSHOT_HPP
