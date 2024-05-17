#ifndef NETWORKED_INPUT_SNAPSHOT_HPP
#define NETWORKED_INPUT_SNAPSHOT_HPP

#include <cstdint>
#include <ostream>
class InputSnapshot {
public:
  uint64_t client_id;
  bool left_pressed = false;
  bool right_pressed = false;
  bool forward_pressed = false;
  bool backward_pressed = false;
  bool jump_pressed = false;
  double mouse_position_x = 0.0, mouse_position_y = 0.0;
};

std::ostream &operator<<(std::ostream &os, const InputSnapshot &snapshot);

#endif // NETWORKED_INPUT_SNAPSHOT_HPP
