#include "time.h"
int main() {
	Time wakeup(6, 45, 0);
	const Time noon(12, 0, 0);
	wakeup.setHour(18);
	noon.setHour(12);
	wakeup.getHour();
	noon.getMinute();
	noon.printUniversal();
	noon.printStandard();
	return 0;
}