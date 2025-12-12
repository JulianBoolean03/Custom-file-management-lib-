
#include "/home/julian/jlibs/include/jfc.h"
#include <chrono>
#include <cstddef>
#include <filesystem>
#include <iostream>
#include <thread>

#include <string>
namespace fs = std::filesystem;
using namespace std::chrono_literals;

// full delete  template
static int full_delete_ext(const std::string &path_str,
                           const std::string &ext) {
  try {
    std::cout << " Now deleting all *" << ext << " files from " << path_str
              << '\n';

    std::this_thread::sleep_for(2s);

    for (const auto &entry : fs::directory_iterator(path_str)) {
      if (entry.is_regular_file() && entry.path().extension() == ext) {
        fs::remove(entry.path());
      }
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error using directory :" << e.what() << '\n';
    return -1;
  }
  return 0;
}

// count files template

static int count_files_ext(const std::string path_str, const std::string &ext) {
  std::size_t fileCount{};
  try {
    for (const auto &entry : fs::directory_iterator(path_str)) {
      if (entry.is_regular_file() && entry.path().extension() == ext) {
        ++fileCount;
      }
    }
    std::cout << "There are " << fileCount << " files locatedat " << path_str
              << '\n';
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error using the directory: " << e.what() << '\n';
    return -1;
  }
  return 0;
}

// return list of paths
static void list_by_ext(const std::string &path_str, const std::string &ext) {
  try {
    std::cout << "These are the files in this directory: " << '\n';
    for (const auto &entry : fs::directory_iterator(path_str)) {
      if (entry.is_regular_file() && entry.path().extension() == ext) {
        fs::path relative_path = fs::relative(entry.path(), path_str);
        std::cout << relative_path << '\n';
      }
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error using the directory: " << e.what() << '\n';
  }
}

// THIS IS FOR CHRIS *CREATE YOUR FUNCTION TEMPLE HERE *USE THE ONES I MADE
// ABOVE AS REFERNCE
//  Organize the files in the given directory in alphabetical order by name.

// THIS IS FOR CHRIS *CREATE YOUR HELPER FUNCTION HERE LIKE THE ONES BELOW

// Helper for full delete stuff
int full_delete_png(const std::string &path_str) {
  return full_delete_ext(path_str, ".png");
}
int full_delete_pdf(const std::string &path_str) {
  return full_delete_ext(path_str, ".pdf");
}
int full_delete_jpeg(const std::string &path_str) {
  return full_delete_ext(path_str, ".jpeg");
}
int full_delete_xlsx(const std::string &path_str) {
  return full_delete_ext(path_str, ".xlsx");
}
int full_delete_mov(const std::string &path_str) {
  return full_delete_ext(path_str, ".mov");
}
int full_delete_mp4(const std::string &path_str) {
  return full_delete_ext(path_str, ".mp4");
}
int full_delete_mp3(const std::string &path_str) {
  return full_delete_ext(path_str, ".mp3");
}
int full_delete_pages(const std::string &path_str) {
  return full_delete_ext(path_str, ".pages");
}
int full_delete_docx(const std::string &path_str) {
  return full_delete_ext(path_str, ".docx");
}

// file count template
int count_png(const std::string &path_str) {
  return count_files_ext(path_str, ".png");
}
int count_pdf(const std::string &path_str) {
  return count_files_ext(path_str, ".pdf");
}
int count_jpeg(const std::string &path_str) {
  return count_files_ext(path_str, ".jpeg");
}
int count_xlsx(const std::string &path_str) {
  return count_files_ext(path_str, ".xlsx");
}
int count_mov(const std::string &path_str) {
  return count_files_ext(path_str, ".mov");
}
int count_mp3(const std::string &path_str) {
  return count_files_ext(path_str, ".mp3");
}
int count_mp4(const std::string &path_str) {
  return count_files_ext(path_str, ".mp4");
}

int count_pages(const std::string &path_str) {
  return count_files_ext(path_str, ".pages");
}

int count_docx(const std::string &path_str) {
  return count_files_ext(path_str, ".docx");
}

// paths
void list_by_docx(const std::string &path_str) {
  list_by_ext(path_str, ".docx");
}
void list_by_pages(const std::string &path_str) {
  list_by_ext(path_str, ".pages");
}
void list_by_pdf(const std::string &path_str) { list_by_ext(path_str, ".pdf"); }
void list_by_xlsx(const std::string &path_str) {
  list_by_ext(path_str, ".xlsx");
}

void list_by_pngs(const std::string &path_str) {
  list_by_ext(path_str, ".png");
}
void list_by_jpeg(const std::string &path_str) {
  list_by_ext(path_str, ".jpeg");
}
void list_by_mov(const std::string &path_str) { list_by_ext(path_str, ".mov"); }
void list_by_mp3(const std::string &path_str) { list_by_ext(path_str, ".mp3"); }
void list_by_mp4(const std::string &path_str) { list_by_ext(path_str, ".mp4"); }
