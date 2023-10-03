#include <draw.h>
#include "SysRead.h"
#include "UnitInt.h"
#include "function.h"
#include <touch.h>
#include "oxorany.h"

//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz

int style_idx2 = 2;
float fov = 80;
float NumIo[50];
bool DrawIo[50];
string SaveDir;
FILE *numSave = nullptr;
ImColor BoxColor = {1.0f,0.0f,0.0f,1.0f};
ImColor BotBoxColor = ImColor(255,255,255,255);
ImColor LineColor = ImColor(255,0,0,255);
ImColor BotLineColor = ImColor(255,255,255,255);
ImColor BoneColor = ImColor(255,0,0,255);
ImColor BotBoneColor = ImColor(255,255,255,255);
ImColor RightColor = ImColor(255,200,0,255);
ImColor BotRightColor = ImColor(255,255,255,255);    
ImColor WarningColor = ImColor(255,0,0,255);
ImColor BotWarningColor = ImColor(255,255,255,255);    
bool cshzt=false;
void *handle;
EGLDisplay display = EGL_NO_DISPLAY;
EGLConfig config;
EGLSurface surface = EGL_NO_SURFACE;
NativeWindowType native_window;
NativeWindowType (*createNativeWindow)(const char *surface_name ,uint32_t screen_width ,uint32_t screen_height);
EGLContext context = EGL_NO_CONTEXT;
float inttouchx = 300,inttouchy = 500;
int FPS = 90;
timer FPS限制;
float FPF显示 = 0;
Screen full_screen;
int Orientation = 0;
int screen_x = 0, screen_y = 0;
int init_screen_x = 0, init_screen_y = 0;
bool g_Initialized = false;
int RobotCount = 0;

//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz

string exec(string command)
{
    char buffer[128];
    string result = "";
    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe) {
        return "popen failed!";
    }
    while (!feof(pipe)) {
        if (fgets(buffer, 128, pipe) != nullptr)
            result += buffer;
    }
    pclose(pipe);
    return result;
}

int init_egl(int _screen_x,int _screen_y, bool log)
{
    display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    if (display == EGL_NO_DISPLAY) {
        printf("eglGetDisplay error=%u\n", glGetError());
        return -1;
    }
    if(log)
		printf("eglGetDisplay ok\n");
    EGLint *version = new EGLint[2];
    if (!eglInitialize(display, &version[0], &version[1])) {
        printf("eglInitialize error=%u\n", glGetError());
        return -1;
    }
    if(log)
		printf("eglInitialize ok\n");
	const EGLint attribs[] = {EGL_BUFFER_SIZE, 32, EGL_RED_SIZE, 8, EGL_GREEN_SIZE, 8, EGL_BLUE_SIZE, 8, EGL_ALPHA_SIZE, 8, EGL_DEPTH_SIZE, 8, EGL_STENCIL_SIZE, 8, EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT, EGL_SURFACE_TYPE, EGL_WINDOW_BIT, EGL_NONE};
    EGLint num_config;
    if (!eglGetConfigs(display, nullptr, 1, &num_config)) {
        printf("eglGetConfigs  error =%u\n", glGetError());
        return -1;
    }
    if(log)
		printf("num_config=%d\n", num_config);
    if (!eglChooseConfig(display, attribs, &config, 1, &num_config)) {
        printf("eglChooseConfig  error=%u\n", glGetError());
        return -1;
    }
    if(log)
		printf("eglChooseConfig ok\n");
    int attrib_list[] = {EGL_CONTEXT_CLIENT_VERSION, 3, EGL_NONE};
    context = eglCreateContext(display, config, EGL_NO_CONTEXT, attrib_list);
    if (context == EGL_NO_CONTEXT) {
        printf("eglCreateContext  error = %u\n", glGetError());
        return -1;
    }
    if(log)
		printf("eglCreateContext ok\n");
    void* sy = get_createNativeWindow();
    createNativeWindow = (NativeWindowType (*)(const char*, uint32_t, uint32_t))(sy);
    native_window = createNativeWindow("Ssage",_screen_x, _screen_y);
    surface = eglCreateWindowSurface(display, config, native_window, nullptr);
    if (surface == EGL_NO_SURFACE) {
        printf("eglCreateWindowSurface  error = %u\n", glGetError());
        return -1;
    }
    if(log)
		printf("eglCreateWindowSurface ok\n");
    if (!eglMakeCurrent(display, surface, surface, context)) {
        printf("eglMakeCurrent  error = %u\n", glGetError());
        return -1;
    }
    if(log)
		printf("eglMakeCurrent ok\n");
    return 1;
}

void screen_config()
{
    std::string window_size = exec("wm size");
    sscanf(window_size.c_str(),"Physical size: %dx%d",&screen_x, &screen_y);
    full_screen.ScreenX = screen_x;
    full_screen.ScreenY = screen_y;
    std::thread *orithread = new std::thread([&] {
        while(true){
            Orientation = atoi(exec("dumpsys input | grep SurfaceOrientation | awk '{print $2}' | head -n 1").c_str());
            if(Orientation == 0 || Orientation == 2) {
                screen_x = full_screen.ScreenX;
                screen_y = full_screen.ScreenY;
            }
            if(Orientation == 1 || Orientation == 3) {
                screen_x = full_screen.ScreenY;
                screen_y = full_screen.ScreenX;
            }
            std::this_thread::sleep_for(0.5s);
        }
    });
    orithread->detach();
}

void NumIoSave(const char *name)
{
    if (numSave == nullptr) {
        string SaveFile = "/data";
        SaveFile += "/";
        SaveFile += name;
        numSave = fopen(SaveFile.c_str(), "wb+");
    }
    fseek(numSave, 0, SEEK_SET);
    fwrite(NumIo, sizeof(float) * 50, 1, numSave);
    int value;
    for (int i = 0; i < 50; i++) {
        value = DrawIo[i] ? 1 : 0;
        fwrite(&value, sizeof(int), 1, numSave);
    }
    fflush(numSave);
    fsync(fileno(numSave));
}


void NumIoLoad(const char *name)
{
    if (numSave == nullptr) {
        string SaveFile = "/data";
        SaveFile += "/";
        SaveFile += name;
        numSave = fopen(SaveFile.c_str(), "rb+");
    }
    if (numSave != nullptr) {
        int value;
        fseek(numSave, 0, SEEK_SET);
        fread(NumIo, sizeof(float) * 50, 1, numSave);
        for (int i = 0; i < 50; i++) {
            fread(&value, sizeof(int), 1, numSave);
            DrawIo[i] = value != 0;
        }
    } else {             
        NumIo[1] = 300.0f;                                                  
        NumIo[2] = 400.0f;
        NumIo[3] = 150.0f;
        NumIo[4] = 20.0f;
        NumIo[6] = 1400.0f;
        NumIo[5] = 650.0f;
        NumIo[7] = 300.0f;  
        NumIo[8] = 2.0f;  
        NumIo[9] = 10.0f; 
        NumIo[10] = 0.0f;  
        NumIo[11] = 600.0f;
        NumIo[12] = 60;
        NumIo[13] = 0.0f;
    }
}

//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz


void ImGuiMenustyle()
{
	ImGuiStyle &style = ImGui::GetStyle();
    style.WindowRounding = 5.3f;
        style.FrameRounding = 2.3f;
        style.ScrollbarRounding = 0;

        style.Colors[ImGuiCol_Text]                  = ImVec4(0.90f, 0.90f, 0.90f, 0.90f);
        style.Colors[ImGuiCol_TextDisabled]          = ImVec4(0.60f, 0.60f, 0.60f, 1.00f);
        style.Colors[ImGuiCol_WindowBg]              = ImVec4(0.09f, 0.09f, 0.15f, 1.00f);
        style.Colors[ImGuiCol_ChildBg]               = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style.Colors[ImGuiCol_PopupBg]               = ImVec4(0.05f, 0.05f, 0.10f, 0.85f);
        style.Colors[ImGuiCol_Border]                = ImVec4(0.70f, 0.70f, 0.70f, 0.65f);
        style.Colors[ImGuiCol_BorderShadow]          = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style.Colors[ImGuiCol_FrameBg]               = ImVec4(0.00f, 0.00f, 0.01f, 1.00f);
        style.Colors[ImGuiCol_FrameBgHovered]        = ImVec4(0.90f, 0.80f, 0.80f, 0.40f);
        style.Colors[ImGuiCol_FrameBgActive]         = ImVec4(0.90f, 0.65f, 0.65f, 0.45f);
        style.Colors[ImGuiCol_TitleBg]               = ImVec4(0.00f, 0.00f, 0.00f, 0.83f);
        style.Colors[ImGuiCol_TitleBgCollapsed]      = ImVec4(0.40f, 0.40f, 0.80f, 0.20f);
        style.Colors[ImGuiCol_TitleBgActive]         = ImVec4(0.00f, 0.00f, 0.00f, 0.87f);
        style.Colors[ImGuiCol_MenuBarBg]             = ImVec4(0.01f, 0.01f, 0.02f, 0.80f);
        style.Colors[ImGuiCol_ScrollbarBg]           = ImVec4(0.20f, 0.25f, 0.30f, 0.60f);
        style.Colors[ImGuiCol_ScrollbarGrab]         = ImVec4(0.55f, 0.53f, 0.55f, 0.51f);
        style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(0.56f, 0.56f, 0.56f, 1.00f);
        style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(0.56f, 0.56f, 0.56f, 0.91f);
        style.Colors[ImGuiCol_CheckMark]             = ImVec4(0.90f, 0.90f, 0.90f, 0.83f);
        style.Colors[ImGuiCol_SliderGrab]            = ImVec4(0.70f, 0.70f, 0.70f, 0.62f);
        style.Colors[ImGuiCol_SliderGrabActive]      = ImVec4(0.30f, 0.30f, 0.30f, 0.84f);
        style.Colors[ImGuiCol_Button]                = ImVec4(0.48f, 0.72f, 0.89f, 0.49f);
        style.Colors[ImGuiCol_ButtonHovered]         = ImVec4(0.50f, 0.69f, 0.99f, 0.68f);
        style.Colors[ImGuiCol_ButtonActive]          = ImVec4(0.80f, 0.50f, 0.50f, 1.00f);
        style.Colors[ImGuiCol_Header]                = ImVec4(0.30f, 0.69f, 1.00f, 0.53f);
        style.Colors[ImGuiCol_HeaderHovered]         = ImVec4(0.44f, 0.61f, 0.86f, 1.00f);
        style.Colors[ImGuiCol_HeaderActive]          = ImVec4(0.38f, 0.62f, 0.83f, 1.00f);
        style.Colors[ImGuiCol_ResizeGrip]            = ImVec4(1.00f, 1.00f, 1.00f, 0.85f);
        style.Colors[ImGuiCol_ResizeGripHovered]     = ImVec4(1.00f, 1.00f, 1.00f, 0.60f);
        style.Colors[ImGuiCol_ResizeGripActive]      = ImVec4(1.00f, 1.00f, 1.00f, 0.90f);
        style.Colors[ImGuiCol_PlotLines]             = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
        style.Colors[ImGuiCol_PlotLinesHovered]      = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_PlotHistogram]         = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_TextSelectedBg]        = ImVec4(0.00f, 0.00f, 1.00f, 0.35f);

	NumIoLoad("FlyBlueSaveNum2");
	FPS = NumIo[12];
}

void ImGui_init()
{
    if (g_Initialized) {
        return;
    }
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.IniFilename = NULL;
    ImGui::StyleColorsDark();
    ImGui_ImplAndroid_Init(native_window);
    ImGui_ImplOpenGL3_Init("#version 100");	
    io.Fonts->AddFontFromMemoryTTF((void *) OPPOSans_H, OPPOSans_H_size, 25.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
    ImGui::GetStyle().ScaleAllSizes(3.0f);
	ImGuiMenustyle();
    g_Initialized = true;	
}

//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz

struct AimStruct
{
    Vector3A ObjAim;  
	Vector3A MyObjAim;
    Vector3A AimMovement;  
    float ScreenDistance = 0;
    float WodDistance = 0; 
}Aim[100];

int findminat()
{
    float min = NumIo[3];
    int minAt = 999;
    for (int i = 0; i < MaxPlayerCount; i++)
    {
        if (Aim[i].ScreenDistance < min && Aim[i].ScreenDistance != 0)
        {
            min = Aim[i].ScreenDistance;
            minAt = i;
        }
    }
    if (minAt == 999)
    {
        Gmin = -1;
        return -1;
    }
    Gmin = minAt;   
    WorldDistance = Aim[minAt].WodDistance;
    return minAt;
}

float GetPitch(float Fov) 
{
    if (Fov == (float)80)          // 不开镜
    {
        return (0.7f/30)*NumIo[4];
        //return 0.7f;
    }
    else if (Fov == (float)70 || Fov == (float)75)    // 机瞄 ，侧瞄
    {     
        return (2.8f/30)*NumIo[4];   
        //return 1.5f;
    }
    else if (Fov == (float)55 || Fov == (float)60)    // 红点 ，全息
    {
        return (2.8f/30)*NumIo[4];
        //return 2.0f;
    }   
    else if ((int)Fov == (float)44)    // 2倍
    {
        return (5.3f/30)*NumIo[4];
        //return 2.5f;
    }
    else if ((int)Fov == (float)26)    // 3倍
    {
        return (7.2f/30)*NumIo[4];
        //return 3.0f;
    }
    else if ((int)Fov == (float)20)    // 4倍
    {
        return (8.6f/30)*NumIo[4];
        //return 3.65f;
    }
    else if ((int)Fov == (float)13)    // 6倍
    {       
        return (14.1f/30)*NumIo[4];
        //return 2.85f;
    }
	return (2.5f/30)*NumIo[4];   // 8倍
}

class CameraManager
{
public:
    float GetFov()
    {
        return Read<float>(uintptr_t(this) + 0x430 + 0x10 + 0x24);
    }
};

CameraManager *cameraManager;

void AimBotAuto(ImDrawList *Draw)
{   
    bool isDown = false;
    // 是否按下触摸
    double leenx = 0.0f;
    // x轴速度
    double leeny = 0.0f;
    // y轴速度     
    double de = 1.5f;
    // 顶部不可触摸区域
   
    double tx = NumIo[5], ty = NumIo[6];
    // 触摸点位置

    float SpeedMin = 2.0f;
    // 临时触摸速度

    double w = 0.0f, h = 0.0f, cmp = 0.0f;
    // 宽度 高度 正切

    double ScreenX = screen_x, ScreenY = screen_y;
    // 分辨率(竖屏)PS:滑屏用的坐标是竖屏状态下的

    double ScrXH = ScreenX / 2.0f;
    // 一半屏幕X

    double ScrYH = ScreenY / 2.0f;
    // 一半屏幕X

    static float TargetX = 0;
    static float TargetY = 0;
    // 触摸目标位置
    
    Vector3A obj;
    
    float NowCoor[3];
   
	Touch_Init(&screen_x,&screen_y);	
	
    while (1)
    {
        
        if (!DrawIo[20])
        {           
            if (isDown == true)
            {
                tx = NumIo[5], ty = NumIo[6];
                // 恢复变量  
                Touch_Up(8);
                // 抬起
                isDown = false;
            }
            usleep(NumIo[9] * 1000);
            continue;
        }
        
        findminat();
        // 获取目标

        if (Gmin == -1)
        {          
            if (isDown == true)
            {
                tx = NumIo[5], ty = NumIo[6];
                // 恢复变量 
                Touch_Up(8);
                // 抬起
                isDown = false;
            }
            usleep(NumIo[9] * 1000);
            continue;
        }
		
        
        float ToReticleDistance = Aim[Gmin].ScreenDistance;              
        float FlyTime = WorldDistance / NumIo[11];
        float DropM = 500.0f * FlyTime * FlyTime;
        // 下坠
        
		float yq = GetPitch(cameraManager->GetFov());

        
        int Firing = getDword(LionmodzZZZ + 0x1508);
        int Aiming = getDword(LionmodzZZZ + 0xf59);    
                  
	    NowCoor[0] = Aim[Gmin].ObjAim.X;
        NowCoor[1] = Aim[Gmin].ObjAim.Y;
        NowCoor[2] = Aim[Gmin].ObjAim.Z;
        obj.X = NowCoor[0] + (Aim[Gmin].AimMovement.X * FlyTime);
        obj.Y = NowCoor[1] + (Aim[Gmin].AimMovement.Y * FlyTime);
        obj.Z = NowCoor[2] + (Aim[Gmin].AimMovement.Z * FlyTime) + DropM;
        float cameras = matrix[3] * obj.X + matrix[7] * obj.Y + matrix[11] * obj.Z + matrix[15];        
		
        Vector2A vpvp = WorldToScreen(obj,matrix,cameras);      
		float AimDs = sqrt(pow(px - vpvp.X, 2) + pow(py - vpvp.Y, 2));
		
        zm_y = vpvp.X;     
        zm_x = ScreenX - vpvp.Y;        
		
        if (zm_x <= 0 || zm_x >= ScreenX || zm_y <= 0 || zm_y >= ScreenY)
        {          
            if (isDown == true)
            {
                tx = NumIo[5], ty = NumIo[6];
                // 恢复变量 
                Touch_Up(8);
                // 抬起
                isDown = false;
            }
            usleep(NumIo[9] * 1000);
            continue;
        }

        if (ToReticleDistance <= NumIo[3])
        {                  
                  
            switch ((int)NumIo[0])
            {
                case 0:
                    if (Firing != 1)
                    {
                        if (isDown == true)
                        {
                            tx = NumIo[5], ty = NumIo[6];
                            // 恢复变量
                            Touch_Up(8);
                            isDown = false;
                        }                      
                        usleep(NumIo[9] * 1000);
                        continue;
                    }
                break;
                case 1:
                    if (Aiming != 1)
                    {
                        if (isDown == true)
                        {
                            tx = NumIo[5], ty = NumIo[6];
                            // 恢复变量
                            Touch_Up(8);
                            isDown = false;
                        }
                        usleep(NumIo[9] * 1000);
                        continue;
                    }
                break;
                case 2:
                    if (Firing == 0 && Aiming == 0)
                    {
                        if (isDown == true)
                        {
                            tx = NumIo[5], ty = NumIo[6];
                            // 恢复变量
                            Touch_Up(8);
                            isDown = false;
                        }
                        usleep(NumIo[9] * 1000);
                        continue;
                    }
                break;
            }         
                   
            if (isDown == false)
            {
				if (NumIo[10] == 0.0f)
                	Touch_Down(8,(int)tx, (int)ty);
				else
					Touch_Down(8,py*2-(int)tx, px*2-(int)ty);
                isDown = true;
            }
			
			float Aimspeace = NumIo[4];
			if (AimDs < 1)
				Aimspeace = NumIo[4] / 0.09;		
			else if (AimDs < 2)
				Aimspeace = NumIo[4] / 0.11;		
			else if (AimDs < 3)
				Aimspeace = NumIo[4] / 0.12;	
			else if (AimDs < 5)
				Aimspeace = NumIo[4] / 0.15;		
			else if (AimDs < 10)
				Aimspeace = NumIo[4] / 0.25;		
			else if (AimDs < 15)
				Aimspeace = NumIo[4] / 0.4;		
			else if (AimDs < 20)
				Aimspeace = NumIo[4] / 0.5;
			else if (AimDs < 25)
				Aimspeace = NumIo[4] / 0.6;		
			else if (AimDs < 30)
				Aimspeace = NumIo[4] / 0.7;
	        else if (AimDs < 40)
				Aimspeace = NumIo[4] / 0.75;
			else if (AimDs < 50)
				Aimspeace = NumIo[4] / 0.8;
			else if (AimDs < 60)
				Aimspeace = NumIo[4] / 0.85;
			else if (AimDs < 70)
				Aimspeace = NumIo[4] / 0.9;
			else if (AimDs < 80)
				Aimspeace = NumIo[4] / 0.95;	
			else if (AimDs < 90)
				Aimspeace = NumIo[4] / 1.0;		
			else if (AimDs < 100)
				Aimspeace = NumIo[4] / 1.05;
			else if (AimDs < 150)
				Aimspeace = NumIo[4] / 1.25;
			else if (AimDs < 200)
				Aimspeace = NumIo[4] / 1.5;
			else
				Aimspeace = NumIo[4] / 1.55;					

            if (zm_x > ScrXH)
            {
                TargetX = -(ScrXH - zm_x);
                TargetX /= Aimspeace;                                       
                if (TargetX + ScrXH > ScrXH * 2)
                    TargetX = 0;
            }
            if (zm_x < ScrXH)
            {
                TargetX = zm_x - ScrXH;
                TargetX /= Aimspeace;             
                if (TargetX + ScrXH < 0)
                    TargetX = 0;
            }
            if (zm_y > ScrYH)
            {
                TargetY = -(ScrYH - zm_y);
                TargetY /= Aimspeace;              
                if (TargetY + ScrYH > ScrYH * 2)
                    TargetY = 0;
            }
            if (zm_y < ScrYH)
            {
                TargetY = zm_y - ScrYH;
                TargetY /= Aimspeace;              
                if (TargetY + ScrYH < 0)
                    TargetY = 0;
            }
            
            if (TargetY >= 35 || TargetX >= 35 || TargetY <= -35 || TargetX <= -35)
            {
                if (isDown == true)
                {
                    tx = NumIo[5], ty = NumIo[6];
                    // 恢复变量
                    Touch_Up(8);
                    isDown = false;
                }
                usleep(NumIo[9] * 1000);
                continue;
            }           		
            tx += TargetX;
            ty += TargetY;		
			if(Firing == 1)
				tx -= yq;
            if (tx >= NumIo[5] + NumIo[7] || tx <= NumIo[5] - NumIo[7]
                || ty >= NumIo[6] + NumIo[7] || ty <= NumIo[6] - NumIo[7])
            {
                // 只要滑屏达到了边界，直接还原至中心
                tx = NumIo[5], ty = NumIo[6];
                // 恢复变量
                Touch_Up(8);
                // 抬起            
				if (NumIo[10] == 0.0f)
                	Touch_Down(8,(int)tx, (int)ty);
			    else
					Touch_Down(8,py*2-(int)tx, px*2-(int)ty);
                // 按下             
            }         		           
			if (NumIo[10] == 0.0f)
           		Touch_Move(8,(int)tx, (int)ty);
		    else
		    	Touch_Move(8,py*2-(int)tx, px*2-(int)ty);
        }
        else
        {          
            if (isDown == true)
            {
                tx = NumIo[5], ty = NumIo[6];
                // 恢复变量 
                Touch_Up(8);
                // 抬起
                isDown = false;
            }
        }
        usleep(NumIo[9] * 1000);
    }
}

int DrawInt()
{
    pid = getPID("com.tencent.ig");
    if (pid <= 0)
    {
        return -1;
	}
   LionmodzZ = get_module_base(pid, "libUE4.so");
    Matrix = getPtr641(getPtr641(LionmodzZ + 0xBBF7070) + 0xc0) + 0x590;
    Gname = getPtr641(LionmodzZ + 0xB79A750);
    return 0;
}

// 绘制四角方框
void DrawPlayerBox(ImDrawList *Draw, float left,float right, float bottom, float top, float x, float y, ImColor color)
{
	float LineSize = 2.5f;
	// x距离，y距离
	float xd = x - left; float yd = y - top;
	
	// 左上角
	Draw->AddLine({left + xd/10,top},{left + xd/2,top}, color, {LineSize});
	Draw->AddLine({left,top + yd/10},{left,top + yd/2}, color, {LineSize});
	
	// 右上角
	Draw->AddLine({right - xd/10,top},{right - xd/2,top}, color, {LineSize});
	Draw->AddLine({right, top + yd/10},{left,top + yd/2}, color, {LineSize});
	
	// 左下角
	Draw->AddLine({left + xd/10,bottom},{left + xd/2,bottom}, color, {LineSize});
	Draw->AddLine({left,bottom - yd/10},{left,bottom - yd/2}, color, {LineSize});
	
	// 右下角
	Draw->AddLine({right - xd/10,top},{right - xd/2,bottom},   color, {LineSize});
	Draw->AddLine({right,bottom - yd/10},{left,bottom - yd/2}, color, {LineSize});
}

void Draw3DBox(float Camera, Vector3A Max,Vector3A Min,ImColor color,float matrix[16])
{
	float LineSize = 2.5f;
	
    Min.X = Max.X - 50.f;
    Min.Y = Max.Y - 50.f; // foot
    Min.Z = Min.Z - 10.f;

    Max.X = Max.X + 50.f;
    Max.Y = Max.Y + 50.f; // head
    Max.Z = Max.Z + 50.f;

    Vector3A v1, v2, v3, v4, v5, v6, v7, v8;
    v1 = Min;v8 = Max;v2 = Min;v3 = Min;v4 = Min;

    // 转换
    v2.X = Max.X;
    v3.Y = Max.Y;
    v4.X = Max.X;
    v4.Y = Max.Y;

    v5 = v1;
    v5.Z = Max.Z;
    v6 = v2;
    v6.Z = Max.Z;
    v7 = v3;
    v7.Z = Max.Z;

    Vector2A vv1, vv2, vv3, vv4, vv5, vv6, vv7, vv8;
    
    vv1 = WorldToScreen(v1, matrix,Camera);      
    vv2 = WorldToScreen(v2, matrix,Camera);      
    vv3 = WorldToScreen(v3, matrix,Camera);   
    vv4 = WorldToScreen(v4, matrix,Camera);      
    vv5 = WorldToScreen(v5, matrix,Camera);     
    vv6 = WorldToScreen(v6, matrix,Camera);    
    vv7 = WorldToScreen(v7, matrix,Camera);   
    vv8 = WorldToScreen(v8, matrix,Camera);
        
    ImGui::GetForegroundDrawList()->AddLine({vv1.X, vv1.Y}, {vv2.X, vv2.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv1.X, vv1.Y}, {vv3.X, vv3.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv1.X, vv1.Y}, {vv5.X, vv5.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv2.X, vv2.Y}, {vv4.X, vv4.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv2.X, vv2.Y}, {vv6.X, vv6.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv3.X, vv3.Y}, {vv4.X, vv4.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv3.X, vv3.Y}, {vv7.X, vv7.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv4.X, vv4.Y}, {vv8.X, vv8.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv5.X, vv5.Y}, {vv6.X, vv6.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv5.X, vv5.Y}, {vv7.X, vv7.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv7.X, vv7.Y}, {vv8.X, vv8.Y}, color, {LineSize});
    ImGui::GetForegroundDrawList()->AddLine({vv6.X, vv6.Y}, {vv8.X, vv8.Y}, color, {LineSize});
}

void DrawRectFilled(int x, int y, int w, int h, ImVec4 color) {
    ImGui::GetForegroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h),
                                               ImGui::ColorConvertFloat4ToU32(color), 0, 0);
}

bool stroke = true;
void DrawStrokeText(int x, int y, ImVec4 color, const char *str) {
    if (stroke) {
        ImGui::GetForegroundDrawList()->AddText(ImVec2(x + 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
        ImGui::GetForegroundDrawList()->AddText(ImVec2(x - 0.1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
        ImGui::GetForegroundDrawList()->AddText(ImVec2(x, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
        ImGui::GetForegroundDrawList()->AddText(ImVec2(x, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
    }
    ImGui::GetForegroundDrawList()->AddText(ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(color), str);
}

typedef struct Rect
{
    float x;
    float y;
    float w;
    float h;
};

static float tm = 127 / 255.f;

static ImVec4 arr[] = {{144 / 255.f, 238 / 255.f, 144 / 255.f, tm},
                       {135 / 255.f, 206 / 255.f, 255 / 255.f, tm},
                       {255 / 255.f, 0 / 255.f,   0 / 255.f,   tm},
                       {0 / 255.f,   255 / 255.f, 0 / 255.f,   tm},
                       {0 / 255.f,   255 / 255.f, 127 / 255.f, tm},
                       {255 / 255.f, 182 / 255.f, 193 / 255.f, tm},
                       {218 / 255.f, 112 / 255.f, 214 / 255.f, tm},
                       {248 / 255.f, 248 / 255.f, 255 / 255.f, tm},
                       {0 / 255.f,   255 / 255.f, 255 / 255.f, tm},
                       {255 / 255.f, 165 / 255.f, 0 / 255.f,   tm},
                       {153 / 255.f, 204 / 255.f, 255 / 255.f, tm},
                       {204 / 255.f, 255 / 255.f, 153 / 255.f, tm},
                       {255 / 255.f, 255 / 255.f, 153 / 255.f, tm},
                       {255 / 255.f, 153 / 255.f, 153 / 255.f, tm},
                       {153 / 255.f, 153 / 255.f, 204 / 255.f, tm},
                       {204 / 255.f, 204 / 255.f, 204 / 255.f, tm},
                       {102 / 255.f, 204 / 255.f, 153 / 255.f, tm},
                       {255 / 255.f, 102 / 255.f, 0 / 255.f,   tm},
                       {102 / 255.f, 204 / 255.f, 204 / 255.f, tm},
                       {153 / 255.f, 204 / 255.f, 255 / 255.f, tm}
};
static int length = sizeof(arr) / 16;

void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 Color, int T) {
    ImGui::GetForegroundDrawList()->AddTriangleFilled(ImVec2(x1, y1), ImVec2(x2, y2), ImVec2(x3, y3),
                                                   ImGui::ColorConvertFloat4ToU32(Color));
}

void DrawHealth(Rect box, float entityHealth, long int TeamID, char *name, float d) {
    float x = box.x - (140 - box.w) / 2;
    float y = box.y;
    char dis[50];
    sprintf(dis, "%0.fM", d);
    char TeamText[50];
    sprintf(TeamText, "%d", (int) TeamID);
    ImVec4 HPColor =
            entityHealth < 80 ? entityHealth < 60 ? entityHealth < 30 ? ImVec4{0.5f, 0.0f, 0.0f,
                                                                               127 / 255.f}
                                                                      : ImVec4{1, 0, 0, 127 / 255.f}
                                                  : ImVec4{1, 1, 0, 127 / 255.f} : ImVec4{
                    255 / 255.f, 255 / 255.f, 255 / 255.f, 127 / 255.f};
    tm = 100.f / 255.f;
    DrawRectFilled(x - strlen(name), y - 41, 120 + strlen(name) * 2, 20,
                   arr[TeamID % length]);//玩家名称背景
    tm = 255.f / 255.f;
    DrawRectFilled(x - strlen(name), box.y - 41, 25, 20, arr[TeamID % length]);
    if (strlen(TeamText) < 2) {
        DrawStrokeText(x + 6 - strlen(name), box.y - 42, ImVec4{1.0f, 1.0f, 1.0f, 1.0f},
                       TeamText);//队伍ID
    } else {
        DrawStrokeText(x - strlen(name), box.y - 42, ImVec4{1.0f, 1.0f, 1.0f, 1.0f},
                       TeamText);//队伍ID
    }
    DrawStrokeText(x + 28 - strlen(name), y - 43,
                   ImVec4{255.f / 255.f, 255.f / 255.f, 255.f / 255.f, 255.f / 255.f}, name);//玩家名称
    DrawRectFilled(x - strlen(name), y - 18, entityHealth * (strlen(name) * 2 + 120) / 100, 8,
                   HPColor);//血量线条
    DrawStrokeText(x + 125 + strlen(name), y - 43, ImVec4{1.0f, 1.0f, 1.0f, 1.0f}, dis);//距离显示
    DrawTriangle(box.x + box.w / 2 - 10, y - 8, box.x + box.w / 2 + 15 - 10, y - 8,
                 box.x + box.w / 2 - 2, y, BotRightColor, 1);//第一个左边 第二个右边 第三个底边
}

int myTeamID = 101;

//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz

void DrawPlayer(ImDrawList *Draw)
{
    float top,right,left,bottom,x1,top1; 
    py = screen_y/2;  
    px = screen_x/2;
   
     // 雷达背景
    if (DrawIo[7] && DrawIo[0]){
        Draw->AddCircleFilled({NumIo[1],NumIo[2]},150,ImColor(0,0,0,60));
        Draw->AddCircle({NumIo[1], NumIo[2]}, 150,whiteColor);
        Draw->AddCircle({NumIo[1], NumIo[2]}, 60,whiteColor);           
        Draw->AddLine({NumIo[1]+150, NumIo[2]}, {NumIo[1]-150, NumIo[2]}, whiteColor, 2);
        Draw->AddLine({NumIo[1], NumIo[2]+150}, {NumIo[1], NumIo[2]-150}, whiteColor, 2);
    }
    
    // 自瞄圈圈
    if (DrawIo[20])       
    {         
        Draw->AddCircle({px, py}, NumIo[3],ImColor(255,255,0,255),0,1.0f);     
    }
       
	Draw->AddText(NULL,40,{px/3,py/4}, ImColor(255,0,0), oxorany("Dev:- @Lionmodz"));
	
    if (DrawIo[21])
    {	
        Draw->AddRectFilled({0,0}, {px*2, py*2},ImColor(0,0,0,110));
        std::string ssf;  
        ssf += "Don't Put Controls，\nLM Touch";
        auto textSize = ImGui::CalcTextSize(ssf.c_str(), 0, 25);
        Draw->AddRectFilled({NumIo[6] - NumIo[7]/2, py*2 - NumIo[5] + NumIo[7]/2}, {NumIo[6] + NumIo[7]/2, py*2 - NumIo[5] - NumIo[7]/2},ImColor(255,0,0,120)); 
		Draw->AddText(NULL,32,{NumIo[6] - (textSize.x / 2),py*2 - NumIo[5]},ImColor(255,255,255),ssf.c_str());                                                   
    }  
    
    Uworld = getPtr64(getPtr64(LionmodzZ + 0xBC18290) - 0x20);
    auto Ulevel = getPtr64(Uworld + 0x30);
    auto ActorsPointerAddress = DecryptActorsArray(Ulevel, 0xA0, 0x448);
    auto ActorArray = Read<TArray<uint64_t>>(ActorsPointerAddress);
    
    playerController = getPtr64(getPtr64(getPtr64(Uworld + 0x38) + 0x78) + 0x30);
    LionmodzZZZ = getPtr64(playerController + 0x2478);
    Myteam = getDword(LionmodzZZZ + 0x8c8);
    GNamesAddr = getPtr64(getPtr64(LionmodzZ + 0xB79A750) + 0x110);
    cameraManager = Read<CameraManager *>(0x30 + 0x458);

    memset(matrix, 0, 16);
    vm_readv(Matrix, matrix, 16 * 4);
        
    PlayerCount = 0; 
	RobotCount = 0;
    AimCount = 0;
    AimObjCount = 0;

   for (int i = 0; i < ActorArray.count; i++) {
        
        LionmodzZZ = ActorArray[i];
        
        if (LionmodzZZ==0)
            continue;
        if (getDword(LionmodzZZ + 0x8) != 8)
            continue;
 
        Vector3A Z;
        vm_readv(getPtr64(LionmodzZZZ + 0x1a8) + 0x1b0, &Z, sizeof(Z)); // 自己坐标
        Vector3A D;
        vm_readv(getPtr64(LionmodzZZ + 0x1a8) + 0x1b0, &D, sizeof(D)); // 对象坐标
        
        // 计算人物矩阵
        camera = matrix[3] * D.X + matrix[7] * D.Y + matrix[11] * D.Z + matrix[15];

        r_x =
            px + (matrix[0] * D.X + matrix[4] * D.Y + matrix[8] * D.Z +
                      matrix[12]) / camera * px;
        r_y =
            py - (matrix[1] * D.X + matrix[5] * D.Y + matrix[9] * (D.Z - 5) +
                      matrix[13]) / camera * py;
        r_w =
            py - (matrix[1] * D.X + matrix[5] * D.Y + matrix[9] * (D.Z + 205) +
                      matrix[13]) / camera * py;
                      
         if (getDword(LionmodzZZ + 0x88) == 0x3ec2a00 || getDword(LionmodzZZ + 0x88) == 0x3ec2800)
        {
            float x = r_x - (r_y - r_w) / 4;
            float y = r_y;
            float w = (r_y - r_w) / 2;
            float Distance =
                sqrt(pow(D.X - Z.X, 2) + pow(D.Y - Z.Y, 2) + pow(D.Z - Z.Z, 2)) * 0.01;

            left = (x + w / 2) - w / 2.6f;
            right = x + w / 1.12f;
                                              
            if (Distance > 600)
            {
                continue;
            }
                      
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
            
            int TeamID = getDword(LionmodzZZ + 0x8c8);
            float Health = (getFloat(LionmodzZZ + 0xcd0) / getFloat(LionmodzZZ + 0xcd4)) *100;
            int isBot = getDword(LionmodzZZ + 0x958);
            Mesh = getPtr641(LionmodzZZ + 0x420);
            human = Mesh + 0x1A0;
            Bone = getPtr641(Mesh + 0x7A8);
            getUTF8(PlayerName, getPtr641(LionmodzZZ + 0x880));
            

            // 敌人向量
            Vector3A Movement;   
		    long int CurrentVehicle = getPtr641(LionmodzZZ + 0xd18);
			if (CurrentVehicle)
			{
				vm_readv(CurrentVehicle + 0x170, &Movement, sizeof(Movement)); // 车辆向量
			}else{
            	vm_readv(getPtr641(LionmodzZZ + 0x258) + 0x210, &Movement, sizeof(Movement)); // 敌人向量           
            }
			
            float angle = getFloat(getPtr641(LionmodzZZZ + 0x548) + 0x544) - 90;
            Vector2A Radar = rotateCoord(angle, (Z.X - D.X) / 200, (Z.Y - D.Y) / 200);

            if (LionmodzZZ == LionmodzZZZ) {
                Myteam = TeamID;
                continue;
            }
                    
            if (getDword(LionmodzZZ + 0xcec))
                continue;
            if (Health > 200.0f || Health < 0.0f)
                continue;
            if (Myteam == TeamID && TeamID <= 100)
                continue;
            if (Bone == 0)
                continue;
            // 计算骨节
            FTransform meshtrans = getBone(human);
            FMatrix c2wMatrix = TransformToMatrix(meshtrans);
            // 头部
            FTransform headtrans = getBone(Bone + 6 * 48);
            FMatrix boneMatrix = TransformToMatrix(headtrans);
            Vector3A relLocation = MarixToVector(MatrixMulti(boneMatrix, c2wMatrix));
            relLocation.Z += 7; // 脖子长度
            Head = WorldToScreen(relLocation, matrix, camera);
            // 胸部
            FTransform chesttrans = getBone(Bone + 5 * 48);
            FMatrix boneMatrix1 = TransformToMatrix(chesttrans);
            Vector3A relLocation1 = MarixToVector(MatrixMulti(boneMatrix1, c2wMatrix));
            Chest = WorldToScreen(relLocation1, matrix, camera);
            // 盆骨
            FTransform pelvistrans = getBone(Bone + 1 * 48);
            FMatrix boneMatrix2 = TransformToMatrix(pelvistrans);
            Vector3A LrelLocation1 = MarixToVector(MatrixMulti(boneMatrix2, c2wMatrix));
            Pelvis = WorldToScreen(LrelLocation1, matrix, camera);
            // 左肩膀
            FTransform lshtrans = getBone(Bone + 12 * 48);
            FMatrix boneMatrix3 = TransformToMatrix(lshtrans);
            Vector3A relLocation2 = MarixToVector(MatrixMulti(boneMatrix3, c2wMatrix));
            Left_Shoulder = WorldToScreen(relLocation2, matrix, camera);
            // 右肩膀
            FTransform rshtrans = getBone(Bone + 33 * 48);
            FMatrix boneMatrix4 = TransformToMatrix(rshtrans);
            Vector3A relLocation3 = MarixToVector(MatrixMulti(boneMatrix4, c2wMatrix));
            Right_Shoulder = WorldToScreen(relLocation3, matrix, camera);
            // 左手肘
            FTransform lelbtrans = getBone(Bone + 13 * 48);
            FMatrix boneMatrix5 = TransformToMatrix(lelbtrans);
            Vector3A relLocation4 = MarixToVector(MatrixMulti(boneMatrix5, c2wMatrix));
            Left_Elbow = WorldToScreen(relLocation4, matrix, camera);
            // 右手肘
            FTransform relbtrans = getBone(Bone + 34 * 48);
            FMatrix boneMatrix6 = TransformToMatrix(relbtrans);
            Vector3A relLocation5 = MarixToVector(MatrixMulti(boneMatrix6, c2wMatrix));
            Right_Elbow = WorldToScreen(relLocation5, matrix, camera);
            
            
            // 左手腕
            FTransform lwtrans = getBone(Bone + 14 * 48);
            FMatrix boneMatrix7 = TransformToMatrix(lwtrans);
            Vector3A relLocation6 = MarixToVector(MatrixMulti(boneMatrix7, c2wMatrix));
            Left_Wrist = WorldToScreen(relLocation6, matrix, camera);
            // 右手腕
            FTransform rwtrans = getBone(Bone + 35 * 48);
            FMatrix boneMatrix8 = TransformToMatrix(rwtrans);
            Vector3A relLocation7 = MarixToVector(MatrixMulti(boneMatrix8, c2wMatrix));
            Right_Wrist = WorldToScreen(relLocation7, matrix, camera);
            // 左大腿
            FTransform Llshtrans = getBone(Bone + 53 * 48);
            FMatrix boneMatrix9 = TransformToMatrix(Llshtrans);
            Vector3A LrelLocation2 = MarixToVector(MatrixMulti(boneMatrix9, c2wMatrix));
            Left_Thigh = WorldToScreen(LrelLocation2, matrix, camera);
            // 右大腿
            FTransform Lrshtrans = getBone(Bone + 57 * 48);
            FMatrix boneMatrix10 = TransformToMatrix(Lrshtrans);
            Vector3A LrelLocation3 = MarixToVector(MatrixMulti(boneMatrix10, c2wMatrix));
            Right_Thigh = WorldToScreen(LrelLocation3, matrix, camera);
           
            // 左膝盖
            FTransform Llelbtrans = getBone(Bone + 54 * 48);
            FMatrix boneMatrix11 = TransformToMatrix(Llelbtrans);
            Vector3A LrelLocation4 = MarixToVector(MatrixMulti(boneMatrix11, c2wMatrix));
            Left_Knee = WorldToScreen(LrelLocation4, matrix, camera);
            // 右膝盖
            FTransform Lrelbtrans = getBone(Bone + 58 * 48);
            FMatrix boneMatrix12 = TransformToMatrix(Lrelbtrans);
            Vector3A LrelLocation5 = MarixToVector(MatrixMulti(boneMatrix12, c2wMatrix));
            Right_Knee = WorldToScreen(LrelLocation5, matrix, camera);
            // 左脚腕
            FTransform Llwtrans = getBone(Bone + 55 * 48);
            FMatrix boneMatrix13 = TransformToMatrix(Llwtrans);
            Vector3A LrelLocation6 = MarixToVector(MatrixMulti(boneMatrix13, c2wMatrix));
            Left_Ankle = WorldToScreen(LrelLocation6, matrix, camera);
            // 右脚腕
            FTransform Lrwtrans = getBone(Bone + 59 * 48);
            FMatrix boneMatrix14 = TransformToMatrix(Lrwtrans);
            Vector3A LrelLocation7 = MarixToVector(MatrixMulti(boneMatrix14, c2wMatrix));
            Right_Ankle = WorldToScreen(LrelLocation7, matrix, camera);               
           
            
            // Max
            FTransform Maxs = getBone(Bone + 6 * 48);
            FMatrix boneMatrix15 = TransformToMatrix(Maxs);
            Vector3A Max = MarixToVector(MatrixMulti(boneMatrix15, c2wMatrix));		
            // Min
            FTransform Mins = getBone(Bone + 58 * 48);
            FMatrix boneMatrix16 = TransformToMatrix(Mins);
            Vector3A Min = MarixToVector(MatrixMulti(boneMatrix16, c2wMatrix));
			
            FTransform Rootz = getBone(Bone + 0 * 48);
            FMatrix boneMatrix17 = TransformToMatrix(Rootz);
            Vector3A relLocation99 = MarixToVector(MatrixMulti(boneMatrix17, c2wMatrix));
            auto Roots = WorldToScreen(relLocation99, matrix, camera);
            
            if (LrelLocation6.Z < LrelLocation7.Z)
            {
                LrelLocation7.Z = LrelLocation6.Z;
            }
            
            
            
            top1 = Pelvis.Y - Head.Y;
            top = Pelvis.Y - top1 - w / 5;    
            
            if (Left_Ankle.Y < Right_Ankle.Y) {
                bottom = Right_Ankle.Y + w / 10;
            } else {
                bottom = Left_Ankle.Y  + w / 10;
            }
            
            if (w>0)
            {              
            
                float LastRenderTime  = getFloat(Mesh + 0x384); //lastsubmittime
                float LastRenderTime2 = getFloat(Mesh + 0x388);

                ImColor 掩体颜色;
                bool 掩体 = false;
                
                if ((LastRenderTime - LastRenderTime2) > 0.028){
                    掩体颜色 = ImColor(0,255,0); // 有掩体 绿色
                    掩体 = true;
                }else{
                    掩体颜色 = ImColor(255,0,0); // 无掩体 红色
                    掩体 = false;
                }
                              
                BoxColor = 掩体颜色;
                BoneColor = 掩体颜色;   
                
                if (DrawIo[24] == false || (DrawIo[24] && 掩体 == false) && DrawIo[22] == false || (DrawIo[22] && Health > 0) && DrawIo[23] == false || (DrawIo[23] && isBot == 1))
                {              
                    Aim[AimCount].WodDistance = Distance;   
                    Aim[AimCount].AimMovement = Movement;
					Aim[AimCount].MyObjAim = Z;          
                    if (NumIo[8] == 1.0){                                 
                        Aim[AimCount].ObjAim = relLocation;                            
                        Aim[AimCount].ScreenDistance = sqrt(pow(px - Head.X, 2) + pow(py - Head.Y, 2));
                    }else if (NumIo[8] == 2.0 || NumIo[8] == 0.0){                                 
                        Aim[AimCount].ObjAim = relLocation1;                            
                        Aim[AimCount].ScreenDistance = sqrt(pow(px - Chest.X, 2) + pow(py - Chest.Y, 2));
                    }else if (NumIo[8] == 3.0){                                 
                        Aim[AimCount].ObjAim = LrelLocation1;                                                 
                        Aim[AimCount].ScreenDistance = sqrt(pow(px - Pelvis.X, 2) + pow(py - Pelvis.Y, 2));
                    }else{
                        Aim[AimCount].ObjAim = relLocation1;                            
                        Aim[AimCount].ScreenDistance = sqrt(pow(px - Chest.X, 2) + pow(py - Chest.Y, 2));
                    }                      
                    AimCount++;
                }
            }
            
            // 开始绘制
           
            if (DrawIo[7] && DrawIo[0])
            {     
                if (Distance <= 300)
                {              
                    if(isBot)
                    {
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
                    }else{
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
                    }
                }
            }
            
            if (DrawIo[0] && DrawIo[8])
            {
                std::string ssd;
                ssd += std::to_string((int) Distance);    
                ssd += " m";
                auto textSize = ImGui::CalcTextSize(ssd.c_str(), 0, 25);
                if (x+w/2<0){
                    Draw->AddCircleFilled({0,Head.Y},60,WarningColor);    
                    Draw->AddText(NULL,35,{5,Head.Y-20},ImColor(185,165,185),ssd.c_str());                                      
                }else if(w>0&&x>px*2){
                    Draw->AddCircleFilled({px*2,Head.Y},60,WarningColor);                       
                    Draw->AddText(NULL,35,{px*2 - 50,Head.Y-20},ImColor(185,165,185),ssd.c_str());                                      
                }else if(w>0&&y+w<0){               
                    Draw->AddCircleFilled({Head.X,0},60,WarningColor);     
                    Draw->AddText(NULL,35,{Head.X - 30,10},ImColor(185,165,185),ssd.c_str());                                      
                }else if(w<0){
                    Draw->AddCircleFilled({px*2 - Head.X,py*2},60,WarningColor);   
                    Draw->AddText(NULL,35,{px*2 - Head.X-30,py*2 - 30},ImColor(185,165,185),ssd.c_str());                                      
                }
            }
            
            if(w>0 && DrawIo[0])
            {                                
                
                if (DrawIo[1])
                {
                    // 方框
                    if (isBot == 1)
                    {                
						if (NumIo[13] == 0.0f)
                        	Draw->AddRect({left, top}, {right, bottom},BotBoxColor, {0}, 0, {1.5});          
						else if (NumIo[13] == 1.0f)
							DrawPlayerBox(ImGui::GetForegroundDrawList(),left,right,bottom,top,x,y,BotBoxColor);
						else 
							Draw3DBox(camera,Max,Min,BotBoxColor,matrix);								
                    }else{                       
                        if (NumIo[13] == 0.0f)
                        	Draw->AddRect({left, top}, {right, bottom},BoxColor, {0}, 0, {1.5});          
						else if (NumIo[13] == 1.0f)
							DrawPlayerBox(ImGui::GetForegroundDrawList(),left,right,bottom,top,x,y,BoxColor);
						else 
							Draw3DBox(camera,Max,Min,BoxColor,matrix);					
                    }                   
                }
                
                if (DrawIo[2])
                {
                    // 射线
                    if (isBot == 1)
                    {
                        Draw->AddLine({px , 150}, {Head.X, Head.Y}, BotLineColor, {1.5});  
                    }else{
                        Draw->AddLine({px , 150}, {Head.X, Head.Y}, LineColor, {1.5});  
                    }
                }
                
                if (DrawIo[3])
                {
                    // 骨骼
                    if (isBot == 1)
                    {
                        Draw->AddCircle({Head.X , Head.Y}, w/14, BotBoneColor, 0);    
                        Draw->AddLine({Head.X, Head.Y}, {Chest.X, Chest.Y}, BotBoneColor,{2.5});
                        Draw->AddLine({Chest.X, Chest.Y}, {Pelvis.X, Pelvis.Y},BotBoneColor,{2.5});
                        Draw->AddLine({Chest.X, Chest.Y}, {Left_Shoulder.X,Left_Shoulder.Y},BotBoneColor,{2.5});
                        Draw->AddLine({Chest.X, Chest.Y}, {Right_Shoulder.X,Right_Shoulder.Y}, BotBoneColor,{2.5});
                        Draw->AddLine({Left_Shoulder.X, Left_Shoulder.Y}, {Left_Elbow.X,Left_Elbow.Y}, BotBoneColor,{2.5});
                        Draw->AddLine({Right_Shoulder.X, Right_Shoulder.Y},{Right_Elbow.X, Right_Elbow.Y}, BotBoneColor,{2.5});
                        Draw->AddLine({Left_Elbow.X, Left_Elbow.Y}, {Left_Wrist.X,Left_Wrist.Y}, BotBoneColor,{2.5});
                        Draw->AddLine({Right_Elbow.X, Right_Elbow.Y}, {Right_Wrist.X,Right_Wrist.Y}, BotBoneColor,{2.5});
                        Draw->AddLine({Pelvis.X, Pelvis.Y}, {Left_Thigh.X, Left_Thigh.Y},BotBoneColor,{2.5});
                        Draw->AddLine({Pelvis.X, Pelvis.Y}, {Right_Thigh.X,Right_Thigh.Y}, BotBoneColor,{2.5});
                        Draw->AddLine({Left_Thigh.X, Left_Thigh.Y}, {Left_Knee.X,Left_Knee.Y}, BotBoneColor,{2.5});
                        Draw->AddLine({Right_Thigh.X, Right_Thigh.Y}, {Right_Knee.X,Right_Knee.Y}, BotBoneColor,{2.5});
                        Draw->AddLine({Left_Knee.X, Left_Knee.Y}, {Left_Ankle.X,Left_Ankle.Y}, BotBoneColor,{2.5});
                        Draw->AddLine({Right_Knee.X, Right_Knee.Y}, {Right_Ankle.X,Right_Ankle.Y}, BotBoneColor,{2.5});                      
                    }else{
                        Draw->AddCircle({Head.X , Head.Y}, w/14, BoneColor, 0);    
                        Draw->AddLine({Head.X, Head.Y}, {Chest.X, Chest.Y}, BoneColor,{2.5});
                        Draw->AddLine({Chest.X, Chest.Y}, {Pelvis.X, Pelvis.Y},BoneColor,{2.5});
                        Draw->AddLine({Chest.X, Chest.Y}, {Left_Shoulder.X,Left_Shoulder.Y},BoneColor,{2.5});
                        Draw->AddLine({Chest.X, Chest.Y}, {Right_Shoulder.X,Right_Shoulder.Y}, BoneColor,{2.5});
                        Draw->AddLine({Left_Shoulder.X, Left_Shoulder.Y}, {Left_Elbow.X,Left_Elbow.Y}, BoneColor,{2.5});
                        Draw->AddLine({Right_Shoulder.X, Right_Shoulder.Y},{Right_Elbow.X, Right_Elbow.Y}, BoneColor,{2.5});
                        Draw->AddLine({Left_Elbow.X, Left_Elbow.Y}, {Left_Wrist.X,Left_Wrist.Y}, BoneColor,{2.5});
                        Draw->AddLine({Right_Elbow.X, Right_Elbow.Y}, {Right_Wrist.X,Right_Wrist.Y}, BoneColor,{2.5});
                        Draw->AddLine({Pelvis.X, Pelvis.Y}, {Left_Thigh.X, Left_Thigh.Y},BoneColor,{2.5});
                        Draw->AddLine({Pelvis.X, Pelvis.Y}, {Right_Thigh.X,Right_Thigh.Y}, BoneColor,{2.5});
                        Draw->AddLine({Left_Thigh.X, Left_Thigh.Y}, {Left_Knee.X,Left_Knee.Y}, BoneColor,{2.5});
                        Draw->AddLine({Right_Thigh.X, Right_Thigh.Y}, {Right_Knee.X,Right_Knee.Y}, BoneColor,{2.5});
                        Draw->AddLine({Left_Knee.X, Left_Knee.Y}, {Left_Ankle.X,Left_Ankle.Y}, BoneColor,{2.5});
                        Draw->AddLine({Right_Knee.X, Right_Knee.Y}, {Right_Ankle.X,Right_Ankle.Y}, BoneColor,{2.5});                      
                    }
                }
                
                Rect box{};
                    box.x = Head.X - (Roots.Y - Head.Y) / 4;
                    box.y = Head.Y;
                    box.w = (Roots.Y - Head.Y) / 2;
                    box.h = Roots.Y - box.y;
                    
                if (DrawIo[6])
                {               
                    ImColor 血量颜色;
                    ImVec4 HPColor = Health < 80 ? Health < 60 ? Health < 30 ? ImVec4{ 0.5f,0.0f,0.0f,127/255.f } : ImVec4{ 1, 0, 0, 127/255.f } : ImVec4{ 1, 1, 0, 127/255.f } : ImVec4{ 255/255.f, 255/255.f, 255/255.f, 127/255.f };
                    if (Health >= 80){
                        血量颜色 = ImColor(10,240,10,210);
                    }else{
                        血量颜色 = ImColor(HPColor);
                    }                   
                    std::string duo;                  
                    duo += std::to_string((int) Health);                   
                    auto textSize = ImGui::CalcTextSize(duo.c_str(), 0, 25);
                    float aa = Health*3.6;
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz//by.@Lionmodz
                    char *s;
                    if (isBot) {
                        s = "       BOT";
                    } else {
                        s = PlayerName;
                    }
                    DrawHealth(box, Health, TeamID, s, Distance);
                }
                
                if (isBot)
                {
                    // 名字
                    std::string s;                  
                    if (DrawIo[4])
                    {                    
                        s += "[Bot] Robot";    
                    }
                    if (DrawIo[5])
                    {
                        // 距离
                        s += " [";
                        s += std::to_string((int) Distance);    
                        s += " m]";
                    }
                    auto textSize = ImGui::CalcTextSize(s.c_str(), 0, 25);
                    Draw->AddText(NULL,35,{Head.X - (textSize.x / 2), top - 85}, BotRightColor,s.c_str());     
                }else{                                                              
                    std::string s;      
                    if (DrawIo[4])
                    {                                          
                        s += "[";
                        s += std::to_string((int) TeamID);
                        s += "] ";
                        s += PlayerName;
                    }
                    if (DrawIo[5])
                    {
                        // 距离
                        s += " [";
                        s += std::to_string((int) Distance);    
                        s += " m]";
                    }
                    auto textSize = ImGui::CalcTextSize(s.c_str(), 0, 25);
                    Draw->AddText(NULL,35,{Head.X - (textSize.x / 2), top - 85}, RightColor,s.c_str());                         
                }                                            
            }        
			if (isBot == 1)  
				RobotCount++;
			else
           		PlayerCount++;         
        }          
    }
    MaxPlayerCount = AimCount;
	std::string count;    
    if (PlayerCount + RobotCount == 0)
    {
    	Draw->AddRectFilled({px-80,40},{px+80,110},ImColor(10,255,10,110),{25});
        Draw->AddRect({px-81,39},{px+81,111},ImColor(0,255,0,190),{25},0,{2.5f});      
        count += " CLEAR ";
        auto textSize = ImGui::CalcTextSize(count.c_str(), 0, 25);            
        Draw->AddText({px-(textSize.x/2),55}, ImColor(255,255,255), count.c_str());
    }else{         
		char extra[100];
        Draw->AddRectFilled({px-80,40},{px-10,110},ImColor(255,0,0,98));
        Draw->AddRectFilled({px+80,40},{px+10,110},ImColor(150,255,140,98));             
        sprintf(extra, "%d", PlayerCount);
        Draw->AddText({px-55,50}, ImColor(255,255,255), extra);
        sprintf(extra, "%d", RobotCount);            
        Draw->AddText({px+35,50}, ImColor(255,255,255), extra);                 
	}
}

bool drawimguitick = false;

void Getxfctouch()
{
	for(;;)
	{
		usleep(2000);	
		ImGuiIO& iooi = ImGui::GetIO();
		if (iooi.MouseDown[0] && point2.x <= inttouchx + 80 && point2.y <= inttouchy + 80 && point2.x >= inttouchx - 80 && point2.y >= inttouchy - 80)
		{			
			usleep(55000);		
			if (iooi.MouseDown[0] && point2.x <= inttouchx + 80 && point2.y <= inttouchy + 80 && point2.x >= inttouchx - 80 && point2.y >= inttouchy - 80)
			{
				while (iooi.MouseDown[0])
				{
					inttouchx = point2.x;
					inttouchy = point2.y;
					usleep(500);		
				}
			}
			if (drawimguitick)
			{
				drawimguitick = false;
			}else{
				drawimguitick = true;		
			}
		}
	}
}

void Getxfctouch2()
{
	for(;;)
	{
		usleep(2000);	
		ImGuiIO& ioooi = ImGui::GetIO();
		if (DrawIo[21] && ioooi.MouseDown[0] && point2.x <= NumIo[6] + NumIo[7] && point2.y <= py*2 - NumIo[5] + NumIo[7] && point2.x >= NumIo[6] - NumIo[7] && point2.y >= py*2 - NumIo[5] - NumIo[7])
		{			
			usleep(55000);		
			if (ioooi.MouseDown[0] && point2.x <= NumIo[6] + NumIo[7] && point2.y <= py*2 - NumIo[5] + NumIo[7] && point2.x >= NumIo[6] - NumIo[7] && point2.y >= py*2 - NumIo[5] - NumIo[7])
			{
				while (ioooi.MouseDown[0])
				{
					NumIo[6] = point2.x;
					NumIo[5] = py*2 - point2.y;
					usleep(500);		
				}
			}		
		}
	}
}

void DrawLogo(ImVec2 center, float size)
{
	ImColor White = ImColor(255, 77, 77, 255);
    ImColor mid = ImColor(255, 0, 50, 255);
	ImColor dark = ImColor(205, 0, 0, 255);
		
	//ImGui::SetCursorPos({0, 180});
	ImDrawList *draw_list = ImGui::GetForegroundDrawList();
	draw_list->AddTriangleFilled(center, {center.x, center.y - size}, {center.x - float(size / 2.5), center.y - size / 5}, mid);
	draw_list->AddTriangleFilled(center, {center.x, center.y - size}, {center.x + float(size / 2.5), center.y - size / 5},White);
	draw_list->AddTriangleFilled({center.x - float(size / 2), center.y}, {center.x - float(size * 1.2), center.y + float(size / 1.5)}, {center.x - size, center.y - float(size / 1.5)}, mid);
	draw_list->AddTriangleFilled({center.x + float(size / 2), center.y}, {center.x + float(size * 1.2), center.y + float(size / 1.5)}, {center.x + size, center.y - float(size / 1.5)}, dark);
	draw_list->AddTriangleFilled({center.x - float(size / 2), center.y}, {center.x - float(size * 1.2), center.y + float(size / 1.5)}, {center.x - size / 4, center.y + float(size / 2.7)}, White);
	draw_list->AddTriangleFilled({center.x + float(size / 2), center.y}, {center.x + float(size * 1.2), center.y + float(size / 1.5)}, {center.x + size / 4, center.y + float(size / 2.7)}, White);
	draw_list->AddTriangleFilled(center, {center.x, center.y + float(size / 1.2)},{center.x - size, center.y - float(size / 1.5)}, dark);
	draw_list->AddTriangleFilled(center, {center.x, center.y + float(size / 1.2)},{center.x + size, center.y - float(size / 1.5)}, mid);
}

void tick()
{
    ImGuiIO& io = ImGui::GetIO();
    if (display == EGL_NO_DISPLAY)
        return;
    static ImVec4 clear_color = ImVec4(0, 0, 0, 0);
    ImGui_ImplOpenGL3_NewFrame();
	ImGuiStyle& Style = ImGui::GetStyle();
    auto Color = Style.Colors;
	static int Color_ = 0;

    enum Color_
    {
        Red,
        Green,
        Blue,
        Orange
    };

    switch (Color_)
    {
        case Color_::Red:
        Style.ChildRounding = 8.0f;
        Style.FrameRounding = 5.0f;

        Color[ImGuiCol_Button] = ImColor(192, 51, 74, 255);
        Color[ImGuiCol_ButtonHovered] = ImColor(212, 71, 94, 255);
        Color[ImGuiCol_ButtonActive] = ImColor(172, 31, 54,255);

        Color[ImGuiCol_FrameBg] = ImColor(54, 54, 54, 150);
        Color[ImGuiCol_FrameBgActive] = ImColor(42, 42, 42, 150);
        Color[ImGuiCol_FrameBgHovered] = ImColor(100, 100, 100, 150);

        Color[ImGuiCol_CheckMark] = ImColor(192, 51, 74, 255);

        Color[ImGuiCol_SliderGrab] = ImColor(192, 51, 74, 255);
        Color[ImGuiCol_SliderGrabActive] = ImColor(172, 31, 54, 255);

        Color[ImGuiCol_Header] = ImColor(192, 51, 74, 255);
        Color[ImGuiCol_HeaderHovered] = ImColor(212, 71, 94, 255);
        Color[ImGuiCol_HeaderActive] = ImColor(172, 31, 54, 255);
        break;
        case Color_::Green:
        Style.ChildRounding = 8.0f;
        Style.FrameRounding = 5.0f;

        Color[ImGuiCol_Button] = ImColor(10, 105, 56, 255);
        Color[ImGuiCol_ButtonHovered] = ImColor(30, 125, 76, 255);
        Color[ImGuiCol_ButtonActive] = ImColor(0, 95, 46, 255);

        Color[ImGuiCol_FrameBg] = ImColor(54, 54, 54, 150);
        Color[ImGuiCol_FrameBgActive] = ImColor(42, 42, 42, 150);
        Color[ImGuiCol_FrameBgHovered] = ImColor(100, 100, 100, 150);

        Color[ImGuiCol_CheckMark] = ImColor(10, 105, 56, 255);

        Color[ImGuiCol_SliderGrab] = ImColor(10, 105, 56, 255);
        Color[ImGuiCol_SliderGrabActive] = ImColor(0, 95, 46, 255);

        Color[ImGuiCol_Header] = ImColor(10, 105, 56, 255);
        Color[ImGuiCol_HeaderHovered] = ImColor(30, 125, 76, 255);
        Color[ImGuiCol_HeaderActive] = ImColor(0, 95, 46, 255);
        
        break;
        case Color_::Blue:
        Style.ChildRounding = 8.0f;
        Style.FrameRounding = 5.0f;

        Color[ImGuiCol_Button] = ImColor(51, 120, 255, 255);
        Color[ImGuiCol_ButtonHovered] = ImColor(71, 140, 255, 255);
        Color[ImGuiCol_ButtonActive] = ImColor(31, 100, 225, 255);

        Color[ImGuiCol_FrameBg] = ImColor(54, 54, 54, 150);
        Color[ImGuiCol_FrameBgActive] = ImColor(42, 42, 42, 150);
        Color[ImGuiCol_FrameBgHovered] = ImColor(100, 100, 100, 150);

        Color[ImGuiCol_CheckMark] = ImColor(51, 120, 255, 255);

        Color[ImGuiCol_SliderGrab] = ImColor(51, 120, 255, 255);
        Color[ImGuiCol_SliderGrabActive] = ImColor(31, 100, 225, 255);

        Color[ImGuiCol_Header] = ImColor(51, 120, 255, 255);
        Color[ImGuiCol_HeaderHovered] = ImColor(71, 140, 255, 255);
        Color[ImGuiCol_HeaderActive] = ImColor(31, 100, 225, 255);

        break;
        case Color_::Orange://233,87,33
        Style.ChildRounding = 8.0f;
        Style.FrameRounding = 5.0f;

        Color[ImGuiCol_Button] = ImColor(233, 87, 33, 255);
        Color[ImGuiCol_ButtonHovered] = ImColor(253, 107, 53, 255);
        Color[ImGuiCol_ButtonActive] = ImColor(213, 67, 13, 255);

        Color[ImGuiCol_FrameBg] = ImColor(54, 54, 54, 150);
        Color[ImGuiCol_FrameBgActive] = ImColor(42, 42, 42, 150);
        Color[ImGuiCol_FrameBgHovered] = ImColor(100, 100, 100, 150);

        Color[ImGuiCol_CheckMark] = ImColor(233, 87, 33, 255);

        Color[ImGuiCol_SliderGrab] = ImColor(233, 87, 33, 255);
        Color[ImGuiCol_SliderGrabActive] = ImColor(213, 67, 13, 255);

        Color[ImGuiCol_Header] = ImColor(233, 87, 33, 255);
        Color[ImGuiCol_HeaderHovered] = ImColor(253, 107, 53, 255);
        Color[ImGuiCol_HeaderActive] = ImColor(213, 67, 13, 255);

    	break;        
	}
	
    ImGui_ImplAndroid_NewFrame(init_screen_x, init_screen_y);
    ImGui::NewFrame();
    {
        DrawLogo({inttouchx, inttouchy}, 45);
		if (drawimguitick)
		{
			ImGui::SetNextWindowPos(ImVec2(inttouchx + 80,inttouchy - 50));
        	ImGui::Begin("XXXXXX",0,true);
		}
		
		if (ImGui::BeginTabBar("Tab", ImGuiTabBarFlags_FittingPolicyScroll) && drawimguitick) 
		{                     	 	
            if (ImGui::BeginTabItem("    draw    ")) 
            {         
            
                if(cshzt)
                {
                    if (ImGui::Button("exit",{-1,75}))   
                    {    
                        exit(0);
                    }
                }else{
                    if (ImGui::Button("initialization Hax",{-1,75}))   
                    {    
                        int intauto = DrawInt();
                        if (intauto == 0)
                        {
                            cshzt = true;
                            DrawIo[0] = true;
                        }else{
							
						}
                    }
                }        
                ImGui::Text("character display");
                ImGui::Checkbox("Box", &DrawIo[1]);
                ImGui::SameLine();
                ImGui::Checkbox("Line", &DrawIo[2]);
                ImGui::SameLine();
                ImGui::Checkbox("Skeleton", &DrawIo[3]);
                ImGui::SameLine();
                /*ImGui::Checkbox("character nickname", &DrawIo[4]);
                ImGui::Checkbox("Character distance", &DrawIo[5]);
                ImGui::SameLine();*/
                ImGui::Checkbox("HP", &DrawIo[6]);
                /*ImGui::SameLine();
                ImGui::Checkbox("draw radar", &DrawIo[7]);*/
                ImGui::SameLine();
                ImGui::Checkbox("Early warning", &DrawIo[8]);
				
				/*if (ImGui::CollapsingHeader("radar settings"))
                {                              
              		ImGui::SliderFloat("X Position", &NumIo[1],0.0f,2400.0f,"%.1f",1);                                                     
              		ImGui::SliderFloat("Y Position", &NumIo[2],0.0f,1080.0f,"%.1f",2);    
        		}*/
				
				if (ImGui::CollapsingHeader("box set"))
                {
					ImGui::RadioButton("rectangular box", &NumIo[13], 0.0f);      
             	    ImGui::SameLine();
                	//ImGui::RadioButton("square box", &NumIo[13], 1.0f);
                	//ImGui::SameLine();
                	ImGui::RadioButton("three-dimensional box", &NumIo[13], 2.0f);    
				}
				
		        ImGui::EndTabItem();        
            }
            if (ImGui::BeginTabItem("    Self-aiming    ")) 
            {    
                ImGui::Text("Self-aiming");
                ImGui::SameLine();
                ImGui::SwitchButton(" ", &DrawIo[20]);
                ImGui::SameLine();
                ImGui::Text("Self-aiming switch");
                ImGui::SameLine();
                ImGui::SwitchButton("  ", &DrawIo[24]);
                //ImGui::SameLine();
                //ImGui::Text("bunker not meow");
        
                ImGui::Checkbox("Adjust touch position", &DrawIo[21]);
                ImGui::SameLine();
                ImGui::Checkbox("not at all", &DrawIo[22]);    
                ImGui::SameLine();
                ImGui::Checkbox("Ignore Bot", &DrawIo[23]);    
                
                ImGui::RadioButton("Firing", &NumIo[0], 0.0f);      
                ImGui::SameLine();
                ImGui::RadioButton("Aiming", &NumIo[0], 1.0f);
                ImGui::SameLine();
                ImGui::RadioButton("Firing / Aiming", &NumIo[0], 2.0f);
     
				ImGui::RadioButton("Charging port right", &NumIo[10], 0.0f);      
                ImGui::SameLine();
                ImGui::RadioButton("Charging port left", &NumIo[10], 1.0f);
               
                if (ImGui::Combo("Self-aiming part", &style_idx2, "intelligent\0head\0Chest\0buttocks\0")) {
                    switch (style_idx2) 
                    {
                        case 0:NumIo[8]=0.0; 
                            break;
                        case 1:NumIo[8]=1.0; 
                             break;
                        case 2:NumIo[8]=2.0; 
                            break;
                        case 3:NumIo[8]=3.0; 
                            break;
                    }          
                }
        
                if (ImGui::CollapsingHeader("Basic Settings"))
                {
                    ImGui::SliderFloat("Aiming range", &NumIo[3],10.0f,500.0f,"%.0f",1);                             
                    ImGui::SliderFloat("Aiming speed", &NumIo[4],0.1f,50.0f,"%.2f",2);         
                    ImGui::SliderFloat("Smoothness", &NumIo[9],0.1f,30.0f,"%.1f",3);                
					ImGui::SliderFloat("bullet speed", &NumIo[11],100.0f,1000.0f,"%.0f",3);                
                }
                if (ImGui::CollapsingHeader("touch settings"))
                {
                    ImGui::SliderFloat("touch range", &NumIo[7],5.0f,600.0f,"%.0f",2);                                              
                }
				ImGui::EndTabItem();  
            }
			if (ImGui::BeginTabItem("    set up    ")) 
            {  
				ImGui::Text("theme color");
                ImGui::SameLine();
                ImGui::Combo(" ", &Color_, u8"red\0green\0blue\0orange");
                ImGui::Text("FPS: ");
                ImGui::SameLine();
				ImGui::SliderFloat("##FPS", &NumIo[12], 60, 144);
				if (ImGui::Button(" Save ",{-1,70}))
        		{        
            		NumIoSave("FlyBlueSaveNum2");   	  		  	
        		}
                ImGui::Text("Average frame rate %.3f ms/frame rate %.1f FPS", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);  
				ImGui::EndTabItem();  
			}
		}
    }
	if(cshzt)
   		DrawPlayer(ImGui::GetForegroundDrawList()); 	
    ImGui::Render();  
	FPS = NumIo[12];
    glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
    glClearColor(clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    eglSwapBuffers(display, surface);
}

void shutdown()
{
    if (!g_Initialized) {
        return;
    }
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplAndroid_Shutdown();
    ImGui::DestroyContext();
    if (display != EGL_NO_DISPLAY){
        eglMakeCurrent(display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
        if (context != EGL_NO_CONTEXT){
            eglDestroyContext(display, context);
        }
        if (surface != EGL_NO_SURFACE){
            eglDestroySurface(display, surface);
        }
        eglTerminate(display);
    }
    display = EGL_NO_DISPLAY;
    context = EGL_NO_CONTEXT;
    surface = EGL_NO_SURFACE;
    ANativeWindow_release(native_window);
}
