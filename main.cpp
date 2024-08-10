#include "llama_model.h"
#include "stable_diffusion_model.h"

int main(int argc, char** argv) {

    int mode = 0;
    LlamaModel llama;
    StableDiffusionModel stable_diffusion;

    while (true) {
        switch (mode)
        {
        case 0: {
            llama.Run(argc, argv);
            break;
        }
        case 1: {
            stable_diffusion.Run(argc, argv);
            break;
        }
        default:
            break;
        }
        
    }
    
    return 0;
}
