// #define CGLM_FORCE_DEPTH_ZERO_TO_ONE
#include <cglm/cglm.h>
#include <cglm/clipspace/persp.h>
#include <stdio.h>

int main(void) {

  {
    printf("==========================================\n");
    printf("============ TRANSLATE ===================\n");
    printf("==========================================\n\n");
    mat4 trans = {};
    glm_mat4_identity(trans);
    glm_mat4_print(trans, stdout);

    vec4 vector1 = {1.0f, 0.0f, 0.0f, 0.0f};
    glm_vec4_print(vector1, stdout);

    glm_translate(trans, vector1);
    glm_mat4_print(trans, stdout);

    vec4 vector2 = {1.0f, 1.0f, 0.0f, 1.0f};
    glm_vec4_print(vector2, stdout);
    glm_mat4_mulv(trans, vector2, vector2);
    glm_vec4_print(vector2, stdout);
  }

  {
    printf("==========================================\n");
    printf("============ SCALE & ROTATE ==============\n");
    printf("==========================================\n\n");
    mat4 rot = {};
    glm_mat4_identity(rot);
    glm_mat4_print(rot, stdout);
    glm_rotate_z(rot, GLM_PI / 2, rot);
    glm_scale_uni(rot, 0.5f);
    glm_mat4_print(rot, stdout);

    vec4 vector = {1.0f, 1.0f, 0.0f, 1.0f};
    glm_vec4_print(vector, stdout);

    glm_mat4_mulv(rot, vector, vector);
    glm_vec4_print(vector, stdout);
  }
}
