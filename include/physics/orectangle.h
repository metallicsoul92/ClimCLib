#ifdef ORECTANGLE_H_
#define ORECTANGLE_H_

#include "adt/vector2.h"
#include "adt/vector3.h"

struct _orectangle2i{
  Clim_vector2i center;
  Clim_vector2i halfExtended;
  float rotation;
}
struct _orectangle2u{
  Clim_vector2u center;
  Clim_vector2u halfExtended;
  float rotation;
}
struct _orectangle2f{
  Clim_vector2f center;
  Clim_vector2f halfExtended;
  float rotation;
}
struct _orectangle3i{
  Clim_vector3i center;
  Clim_vector3i halfExtended;
  Clim_vector4f rotation;
}
struct _orectangle3u{
  Clim_vector3u center;
  Clim_vector3u halfExtended;
  Clim_vector4f rotation;
}
struct _orectangle3f{
  Clim_vector3f center;
  Clim_vector3f halfExtended;
  Clim_vector4f rotation;
}

typedef _orectangle2i Clim_orectangle2i;
typedef _orectangle2u Clim_orectangle2u;
typedef _orectangle2f Clim_orectangle2f;
typedef _orectangle3i Clim_orectangle3i;
typedef _orectangle3u Clim_orectangle3u;
typedef _orectangle3f Clim_orectangle3f;


#endif //orectangle.h
