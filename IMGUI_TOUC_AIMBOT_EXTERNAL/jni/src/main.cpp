#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <pthread.h>
#include <fstream>
#include <string.h>
#include <time.h>
#include <malloc.h>
#include <iostream>
#include <fstream>
#include <sys/system_properties.h>
#include <Encrypt.h>
#include "cJSON.h"
#include "cJSON.c"
#include "http.h"
#include <ctime>
#include <main.h>
#include <stdlib.h>
#include <exception>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

          


int main(int argc, char **argv)
{	
   // android_minam();
	
	FPS限制.SetFps(FPS);
	FPS限制.AotuFPS_init();
	FPS限制.setAffinity();
    screen_config();
    init_screen_x = screen_x + screen_y;
    init_screen_y = screen_y + screen_x;
	if(!init_egl(init_screen_x,init_screen_y)) {
        exit(0);
    }
    ImGui_init();  
	
	new std::thread(Getxfctouch);
	new std::thread(Getxfctouch2);
    new std::thread(AimBotAuto,ImGui::GetForegroundDrawList());
	
    while (1)
    {     
        tick();
        FPS限制.SetFps(FPS);
		FPF显示 = FPS限制.AotuFPS();       
    }
    shutdown();
    return 0;
}
