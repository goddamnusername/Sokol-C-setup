#define SOKOL_IMPL
#define SOKOL_GLCORE
#define SOKOL_NO_ENTRY
#include <stdio.h>
#include "vendor\sokol\sokol_app.h"
#include "vendor\sokol\sokol_gfx.h"
#include "vendor\sokol\sokol_glue.h"

static struct{
  sg_pass_action pass_action;
} state;

void init(){
  sg_setup(
    &(sg_desc){
      .environment = sglue_environment(),
    }
  );

  state.pass_action = (sg_pass_action){
    .colors[0] = {.load_action = SG_LOADACTION_CLEAR, 
    .clear_value = {0.4, 0.6, 1.0, 1.0}
    }
  };
}

void frame(){
  sg_begin_pass(&(sg_pass){.action = state.pass_action, .swapchain = sglue_swapchain()});
  sg_end_pass();
  sg_commit();
}

void cleanup(){
  sg_shutdown();
}

void event(const sapp_event *ev){

}

int main() {
      sapp_run(&(sapp_desc){
      .width = 1280,
      .height = 720,
      .init_cb = init,
      .frame_cb = frame,
      .cleanup_cb = cleanup,
      .event_cb = event,
  });

    return 0;
}