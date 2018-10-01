#include "nrf_log.h"
#include "nrf_log_ctrl.h"

int main(void) {
	APP_ERROR_CHECK(NRF_LOG_INIT(NULL));

	NRF_LOG_INFO("Hello world from nRF51!");

	for (;;) {
		NRF_LOG_PROCESS();
	}
}
