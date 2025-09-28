#include <vulkan/vulkan.h>
#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "My Vulkan App";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "My Engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_0;

    VkInstanceCreateInfo createInfo = {};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    createInfo.flags = VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;

    // Add MoltenVK extension if necessary
    #ifdef __APPLE__
        std::vector<const char*> extNames = {VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME};
        createInfo.enabledExtensionCount = static_cast<uint32_t>(extNames.size());
        createInfo.ppEnabledExtensionNames = extNames.data();
    #endif

    VkInstance instance;
    if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
        throw std::runtime_error("failed to create instance!");
    }
    std::cout << "Vulkan instance created successfully!\n";

    vkDestroyInstance(instance, nullptr);
    return 0;
}
