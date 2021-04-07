

namespace euclid {
struct Color {
	uint8_t red, green, blue, alpha;

	Color(uint8_t red, uint8_t green, uint8_t blue);
	Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

	Color from_hsv(uint8_t hue, uint8_t saturation, uint8_t value);
	Color from_hsv(uint8_t hue, uint8_t saturation, uint8_t value, uint8_t alpha);
};
} // namespace euclid