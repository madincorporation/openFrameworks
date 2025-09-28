# macOS BigSur
# pre reqs:
#   install Vulkan SDK via installer from https://vulkan.lunarg.com/sdk/home#mac
source ~/VulkanSDK/1.4.313.1/setup-env.sh
# after this $VULKAN_SDK != ~/VulkanSDK/1.4.313.1/macOS
g++ -std=c++17 -I$VULKAN_SDK/include -L$VULKAN_SDK/lib -lvulkan -o VulkanPlainMinimal vulkan_plain_minimal.cpp
g++ -std=c++17 -I$VULKAN_SDK/include -L$VULKAN_SDK/lib -lvulkan -lglfw -o VulkanGlfwMinimal vulkan_glfw_minimal.cpp
