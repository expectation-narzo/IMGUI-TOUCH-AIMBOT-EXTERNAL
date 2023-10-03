#include <native_surface/native_surface.h>
void* get_createNativeWindow() {
    void *handle;
    if (get_android_api_level() == 32){ // 安卓12支持
        exec_native_surface("settings put global block_untrusted_touches 0");
#ifdef __aarch64__
        handle = dlblob(&native_surface_12_64, sizeof(native_surface_12_64)); // 64位支持
#elif
        handle = dlblob(&native_surface_12_32, sizeof(native_surface_12_32)); // 32位支持 <<-- 其实很没必要 未测试
#endif
    } else if (get_android_api_level() == 30) { // 安卓11支持
#ifdef __aarch64__
        handle = dlblob(&native_surface_11_64, sizeof(native_surface_11_64)); // 64位支持
#elif
        handle = dlblob(&native_surface_11_32, sizeof(native_surface_11_32)); // 32位支持 <<-- 其实很没必要 未测试
#endif
    } else if (get_android_api_level() == 29){ // 安卓10支持
#ifdef __aarch64__
        handle = dlblob(&native_surface_10_64, sizeof(native_surface_10_64)); // 64位支持
#elif
        handle = dlblob(&native_surface_10_32, sizeof(native_surface_10_32)); // 32位支持 <<-- 其实很没必要 未测试
#endif
    } else if (get_android_api_level() == 28){ // 安卓9支持
#ifdef __aarch64__
        handle = dlblob(&native_surface_9_64, sizeof(native_surface_9_64)); // 64位支持
#else
		handle = dlblob(&native_surface_9_32, sizeof(native_surface_9_32)); // 32位支持 <<-- 其实很没必要 未测试
#endif
    }else{
        printf("By.@Lionmodz (Only Support Android 9-12");
        exit(0);
    }
    void *sy = dlsym(handle, "_Z18createNativeWindowPKcjj");
    if (sy != nullptr) {
        return sy;
    }else{
		sy = dlsym(handle, "_Z18createNativeWindowPKcjjb");      
		if (sy != nullptr) {
      		return sy;
   		}else{
       		sy = dlsym(handle, "_Z14getDisplayInfov");	
			if (sy != nullptr) {
      	  		return sy;
    		}else{
        		sy = dlsym(handle, "_Z12setSurfaceWHjj");
				if (sy != nullptr) {
        			return sy;
    			}else{
        			sy = dlsym(handle, "_Z10initRecordPKcfjj");
					if (sy != nullptr) {
        				return sy;
   	 				}else{
        				sy = dlsym(handle, "_Z9runRecordPbPFvPhmE");
						if (sy != nullptr) {
        					return sy;
    					}else{
        					sy = dlsym(handle, "_Z10stopRecordv");
							if (sy != nullptr) {
        						return sy;
    						}else{
        						sy = dlsym(handle, "_Z21getRecordNativeWindowv");						
								if (sy != nullptr) {
        							return sy;
								}else{
									printf("createNativeWindow _ null~\n");           
    								exit(0);
								}
							}
						}
					}
				}
			}
		}       
	}
}
