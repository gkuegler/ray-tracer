/**
left off at -> 8
https://raytracing.github.io/books/RayTracingInOneWeekend.html
*/

#include "rtweekend.h"

#include "camera.h"
#include "color.h"
#include "hittable.h"
#include "hittable_list.h"
#include "interval.h"
#include "sphere.h"

#include <iostream>

int
main()
{
  hittable_list world;

  world.add(std::make_shared<sphere>(point3(0, 0, -1), .5));
  world.add(std::make_shared<sphere>(point3(0, -100.5, -1), 100));

  camera cam;
  cam.aspect_ratio = 16.0 / 9.0;
  cam.image_width = 400;

  cam.render(world);
}
