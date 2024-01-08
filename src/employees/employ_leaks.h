/**********************************************************************************
 *          Project
 *    __ _
 *   / _| |__   __ _       ___  ___ _ ____   _____ _ __
 *  | |_| '_ \ / _` | ___ / __|/ _ \ '__\ \ / / _ \ '__|
 *  |  _| | | | (_| ||___|\__ \  __/ |   \ V /  __/ |
 *  |_| |_| |_|\__, |     |___/\___|_|    \_/ \___|_|
 *                |_|
 *
 * Copyright (c) 2011-2024 FreeHackQuest <freehackquest@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 ***********************************************************************************/

#ifndef EMPLOY_LEAKS_H
#define EMPLOY_LEAKS_H

#include <employees.h>
#include <model_leak.h>

class EmployLeaks : public WsjcppEmployBase {
public:
  EmployLeaks();
  static std::string name() { return "EmployLeaks"; }
  virtual bool init();
  virtual bool deinit();

  int addLeak(ModelLeak *pModelLeak, std::string &sError);
  const ModelLeak *findLeakByUuid(std::string sUuid);
  int removeLeak(std::string sUuid);
  int updateLeak(ModelLeak *pModelLeak);
  nlohmann::json toJson();

private:
  std::string TAG;
  std::vector<ModelLeak *> m_vectCacheLeaks;
  std::map<std::string, ModelLeak *> m_mapCacheLeaks;
};

#endif // EMPLOY_LEAKS_H
