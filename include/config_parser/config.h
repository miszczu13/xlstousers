#ifndef INCLUDE_CONFIG_PARSER_CONFIG_H_
#define INCLUDE_CONFIG_PARSER_CONFIG_H_

#include <map>
#include <vector>
#include <string>

namespace xlstousers {
namespace config_parser {

struct UidsRange {
  int min_uid;
  int max_uid;
};

struct User {
  UidsRange uids_range;
  int gid;
  std::string home;
  int change;
  std::string class_name;
  std::string shell;
  int expire;
};

struct Quota {
  int block_hard_limit;
  int block_soft_limit;
  int inodes_hard_limit;
  int inodes_soft_limit;
  int block_time;
  int inodes_time;
  std::string path_quota;
};

struct ProgramSettings {
  std::string xls_file;
  std::string config_file;
  bool interactive_mode;
  bool test_mode;
  bool quota;
};

struct Config {
  std::vector<std::string> columns;
  int password_lenght;
  User user;
  Quota quota;
};

}  // namespace config_parser
}  // namespace xlstousers

#endif  // INCLUDE_CONFIG_PARSER_CONFIG_H_
