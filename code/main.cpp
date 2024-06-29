#include <iostream>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

int main() {
  struct termios oldSettings, newSettings;
  tcgetattr(STDIN_FILENO, &oldSettings);
  newSettings = oldSettings;
  newSettings.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newSettings);
  char ch;
  std::cout << "Введите символы (нажмите 'q' для выхода): ";
  while (std::cin.get(ch) && ch != 'q') {
    if (std::cin.get(ch) && ch == 'a') {
      std::cout << "открываю приложение" << std::endl;
      system("open /Applications/Microsoft\\ Remote\\ Desktop.app/");
    }
  }
  std::cout << "закрываю и отчищаю логи" << std::endl;
  system("pkill Microsoft\\ Remote\\ Desktop");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "Application\\ "
         "Support/com.microsoft.rdc.macos/"
         "com.microsoft.rdc.application-data.sqlite");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "Application "
         "Support/com.microsoft.rdc.macos/"
         "com.microsoft.rdc.application-data.sqlite");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "Application "
         "Support/com.microsoft.rdc.macos/"
         "com.microsoft.rdc.application-data.sqlite-wal");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "Application "
         "Support/com.microsoft.rdc.macos/"
         "com.microsoft.rdc.application-data.sqlite-shm");
  system("rm -rf /Users/*/Library/Group "
         "Containers/UBF8T346G9.com.microsoft.rdc/Library/Application "
         "Support/com.microsoft.rdc.macos.spotlight-data.sqlite");
  system("rm -rf /Users/*/Library/Group "
         "Containers/UBF8T346G9.com.microsoft.rdc/Library/Application "
         "Support/com.microsoft.rdc.macos.spotlight-data.sqlite-wal");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "Application Support/Microsoft Remote Desktop/AriaStorage.db");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "HTTPStorages/com.microsoft.rdc.macos/httpstorages.sqlite");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "HTTPStorages/com.microsoft.rdc.macos/httpstorages.sqlite-wal");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "HTTPStorages/com.microsoft.rdc.macos/httpstorages.sqlite-shm");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "Caches/com.microsoft.rdc.macos/Cache.db");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "Caches/com.microsoft.rdc.macos/Cache.db-wal");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "Caches/com.microsoft.rdc.macos/Cache.db-shm");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "Caches/com.microsoft.rdc.macos/Cache.db");
  system("rm -rf "
         "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/Library/"
         "Caches/com.microsoft.rdc.macos/Cache.db-wal");
  system("rm -rf "
        "/Users/*/Library/Containers/com.microsoft.rdc.macos/Data/tmp/");
  system("rm -rf ~/.zsh_sessions/* 2>/dev/null || true");
  system("rm -rf ~/.zsh_history 2>/dev/null || true");
  system("rm -rf wifi.log 2>/dev/null || true");
  system("rm -rf system.log 2>/dev/null || true");
  system("reset");
  tcsetattr(STDIN_FILENO, TCSANOW, &oldSettings);
  return 0;
}
