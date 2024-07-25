#include "spdlog/fmt/ostr.h" // must be included
#include "formatting.hpp"

// Overload the << operator for the NetworkedInputSnapshot class
std::ostream &operator<<(std::ostream &os, const NetworkedInputSnapshot &snapshot) {
    os << "Client ID: " << snapshot.client_id << "\n";
    os << "Client Input History Insertion Time (epoch ms): " << snapshot.client_input_history_insertion_time_epoch_ms
       << "\n";
    os << "Time Delta Used For Client-Side Processing (ms): " << snapshot.time_delta_used_for_client_side_processing_ms
       << "\n";
    os << " | L: " << (snapshot.left_pressed ? "1" : "0");
    os << " | R: " << (snapshot.right_pressed ? "1" : "0");
    os << " | F: " << (snapshot.forward_pressed ? "1" : "0");
    os << " | B: " << (snapshot.backward_pressed ? "1" : "0");
    os << " | J: " << (snapshot.jump_pressed ? "1" : "0") << "\n";
    os << "Mouse Position: (" << snapshot.mouse_position_x << ", " << snapshot.mouse_position_y << ")\n";
    return os;
}
