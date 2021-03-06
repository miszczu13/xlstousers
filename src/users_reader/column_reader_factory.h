// Copyright 2020-2021, Karol Czernuszka
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>
//

#ifndef SRC_USERS_READER_COLUMN_READER_FACTORY_H_
#define SRC_USERS_READER_COLUMN_READER_FACTORY_H_

#include <memory>
#include <string>

#include "users_reader/i_column_reader.h"
#include "users_reader/xlsx_column_reader.h"

namespace users_creator {
namespace users_reader {

class ColumnReader {
 public:
  static std::unique_ptr<IColumnReader> getColumnReader(std::string file);
 private:
  static std::string getFileExtension(std::string file);
};

}  // namespace users_reader
}  // namespace users_creator

#endif  // SRC_USERS_READER_COLUMN_READER_FACTORY_H_
