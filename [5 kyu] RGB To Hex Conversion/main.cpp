#include <string>

std::string rgb_to_hex(int r, int g, int b) {
    r = (r < 0) ? 0 : ((r > 255) ? 255 : r);
    g = (g < 0) ? 0 : ((g > 255) ? 255 : g);
    b = (b < 0) ? 0 : ((b > 255) ? 255 : b);

    char hex[7];
    sprintf(hex, "%02X%02X%02X", r, g, b);
    return std::string(hex);
}

#include <string>

static int wrap(int color) {
    if (color < 0) {
        return 0;
    }

    if (color > 255) {
        return 255;
    }

    return color;
}

std::string rgb_to_hex(int r, int g, int b) {
    char hex[7];
    sprintf(hex, "%02X%02X%02X", wrap(r), wrap(g), wrap(b));

    return std::string(hex);
}

#include <fmt/core.h>
#include <string>

static int wrap(int color) {
    if (color < 0) {
        return 0;
    }

    if (color > 255) {
        return 255;
    }

    return color;
}

std::string rgb_to_hex(int r, int g, int b) {
    return fmt::format("{:02X}{:02X}{:02X}", wrap(r), wrap(g), wrap(b));
}

#include <algorithm>
#include <fmt/core.h>
#include <string>

std::string rgb_to_hex(int r, int g, int b) {
    return fmt::format("{:02X}{:02X}{:02X}", std::clamp(r, 0, 255), std::clamp(g, 0, 255), std::clamp(b, 0, 255));
}