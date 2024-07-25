#ifndef NETWORKED_INPUT_SNAPSHOT_FORMATTING
#define NETWORKED_INPUT_SNAPSHOT_FORMATTING

#include "networked_input_snapshot.hpp"
#include "spdlog/fmt/ostr.h" // must be included
#include "spdlog/sinks/stdout_sinks.h"
#include "spdlog/spdlog.h"

std::ostream &operator<<(std::ostream &os, const NetworkedInputSnapshot &snapshot);

// fmt v10 and above requires `fmt::formatter<T>` extends
// `fmt::ostream_formatter`. See: https://github.com/fmtlib/fmt/issues/3318
template<>
struct fmt::formatter<NetworkedInputSnapshot> : fmt::ostream_formatter {
};

#endif //NETWORKED_INPUT_SNAPSHOT_FORMATTING
