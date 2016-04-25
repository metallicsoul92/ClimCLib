#ifndef SEGMENT_H_
#define SEGMENT_H_

#include "adt/vector2.h"
#include "adt/vector3.h"

struct _segment2i{
    Clim_vector2i pointA;
    Clim_vector2i pointB;
}
struct _segment2u{
    Clim_vector2u pointA;
    Clim_vector2u pointB;
}
struct _segment2f{
    Clim_vector2f pointA;
    Clim_vector2f pointB;
}

struct _segment3i{
    Clim_vector3i pointA;
    Clim_vector3i pointB;
}
struct _segment3u{
    Clim_vector3u pointA;
    Clim_vector3u pointB;
}
struct _segment3f{
    Clim_vector3f pointA;
    Clim_vector3f pointB;
}

typedef struct _segment2i Clim_segment2i;
typedef struct _segment2u Clim_segment2u;
typedef struct _segment2f Clim_segment2f;
typedef struct _segment3i Clim_segment3i;
typedef struct _segment3u Clim_segment3u;
typedef struct _segment3f Clim_segment3f;

#endif // Segment.h
