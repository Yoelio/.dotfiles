int main(int argc, char* argv[])
{
    qInstallMsgHandler(&ConsoleMessageHandler);

#ifdef WAIT_FOR_KEY_PRESS_AT_START
    std::cout << "Press enter to continue...";
    std::cin.get();
#endif
