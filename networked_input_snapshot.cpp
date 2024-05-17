#include "networked_input_snapshot.hpp"

std::ostream &operator<<(std::ostream &os, const InputSnapshot &snapshot) {
    os << "Client ID: " << snapshot.client_id << ", "
       << "Left pressed: " << snapshot.left_pressed << ", "
       << "Right pressed: " << snapshot.right_pressed << ", "
       << "Forward pressed: " << snapshot.forward_pressed << ", "
       << "Backward pressed: " << snapshot.backward_pressed << ", "
       << "Jump pressed: " << snapshot.jump_pressed << ", "
       << "Mouse position: (" << snapshot.mouse_position_x << ", " << snapshot.mouse_position_y << ")";
    return os;
}
