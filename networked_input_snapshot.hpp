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

    // Constructor to initialize all member variables
    NetworkedInputSnapshot(uint64_t id,
                           uint64_t history_time = static_cast<uint64_t>(-1),
                           double delta_time = -1.0,
                           bool left = false,
                           bool right = false,
                           bool forward = false,
                           bool backward = false,
                           bool jump = false,
                           double mouse_x = 0.0,
                           double mouse_y = 0.0)
        : client_id(id),
          client_input_history_insertion_time_epoch_ms(history_time),
          time_delta_used_for_client_side_processing_ms(delta_time),
          left_pressed(left),
          right_pressed(right),
          forward_pressed(forward),
          backward_pressed(backward),
          jump_pressed(jump),
          mouse_position_x(mouse_x),
          mouse_position_y(mouse_y) {}
};

#endif // NETWORKED_INPUT_SNAPSHOT_HPP
