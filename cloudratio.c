#include "gastask.h" // jennifer

double	cloudratios[MAX_CLOUD_RATIOS];
unsigned	n_cloudratios;

void
add_cloudratio(double r)
{
    if(n_cloudratios >= MAX_CLOUD_RATIOS)
        FATAL(2, "too many cloud ratios");

    if(n_cloudratios > 0 && cloudratios[n_cloudratios - 1] > r)
        FATAL(2, "cloud ratio should be defined in increasing order");
	
	n_cloudratios++;
    cloudratios[n_cloudratios - 1] = r;
}