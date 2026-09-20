#pragma once

#include <string>

namespace PathUtil {

enum PathType { SAVE_DIR, TEMP_DIR, PIPELINE_CACHE_DIR, CONFIG_DIR, DOWNLOAD_DIR, TEXTURE_DIR };

std::string GetPath(PathType path);
}; // namespace PathUtil
