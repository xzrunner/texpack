#ifdef __cplusplus
extern "C"
{
#endif

#ifndef texpack_h
#define texpack_h

#include <stdint.h>
#include <stdbool.h>

struct texpack_rect {
	uint16_t xmin, ymin;
	uint16_t xmax, ymax;
};

struct texpack_pos {
	struct texpack_rect r;
	bool is_rotated;

	void* ud;
};

struct texpack;

struct texpack* texpack_create(int width, int height, int size);
void texpack_release(struct texpack*);

void texpack_clear(struct texpack*);

struct texpack_pos* texpack_add(struct texpack*, int width, int height, bool can_rotate);

void texpack_get_size(struct texpack*, int* width, int* height);

int texpack_get_free_space(struct texpack*);

#endif // texpack_h

#ifdef __cplusplus
}
#endif