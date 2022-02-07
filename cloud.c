#include "gastask.h" // jennifer

cloud_t	clouds[MAX_CLOUDS];
unsigned	n_clouds;


void
add_cloud(const char *typestr, double wcet_scale, double power_active, double power_idle, unsigned max_capacity)
{
    cloud_t *cloud;

    if(n_clouds >= MAX_CLOUDS)
        FATAL(2, "too many cloud types");

    cloud = &clouds[n_clouds];
    cloud->typestr = strdup(typestr);
    cloud->wcet_scale = wcet_scale;
    cloud->power_active = power_active;
    cloud->power_idle = power_idle;
    cloud->max_capacity = max_capacity;
	n_clouds++;
}