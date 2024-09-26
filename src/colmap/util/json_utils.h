#pragma once

#include <fstream>

#include <nlohmann/json.hpp>

namespace colmap {
nlohmann::json ReadJsonFile(const std::string& json_file) {
  std::stringstream bufferNodes;
  std::ifstream nodesFile(json_file);
  bufferNodes << nodesFile.rdbuf();
  return nlohmann::json::parse(bufferNodes.str());
}
}  // namespace colmap