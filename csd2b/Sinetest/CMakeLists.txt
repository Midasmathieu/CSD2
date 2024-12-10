cmake_minimum_required(VERSION 3.20)
project(Sine VERSION 0.0.1)
juce_add_console_app(Sine PRODUCT_NAME "Sine")
target_sources(Sine PRIVATE main.cpp sine.cpp)
target_compile_definitions(Sine PRIVATE JUCE_WEB_BROWSER=0 JUCE_USE_CURL=0)

target_link_libraries(Sine
        PRIVATE
        juce::juce_audio_basics
        juce::juce_audio_devices
        juce::juce_audio_formats
        juce::juce_audio_processors

        PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_warning_flags
)

target_compile_features(Sine PRIVATE cxx_std_20)