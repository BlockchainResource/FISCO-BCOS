#pragma once

#include "DB.h"
#include "Storage.h"

namespace dev
{

namespace storage
{

class MemoryDB : public DB
{
  public:
	typedef std::shared_ptr<MemoryDB> Ptr;

	virtual ~MemoryDB(){};

	virtual void init(const std::string &tableName);
	virtual Entries::Ptr select(const std::string &key, Condition::Ptr condition) override;
	virtual size_t update(const std::string &key, Entry::Ptr entry, Condition::Ptr condition) override;
	virtual size_t insert(const std::string &key, Entry::Ptr entry) override;
	virtual size_t remove(const std::string &key, Condition::Ptr condition) override;

	virtual h256 hash();
	virtual void clear();
	virtual std::map<std::string, Entries::Ptr> *data() override;

	void setStateStorage(Storage::Ptr amopDB);

	void setBlockHash(h256 blockHash);
	void setBlockNum(int blockNum);
	void setTableInfo(TableInfo::Ptr tableInfo);
	
  private:
	Entries::Ptr processEntries(Entries::Ptr entries, Condition::Ptr condition);
	bool processCondition(Entry::Ptr entry, Condition::Ptr condition);
	bool isHash(std::string key);
	void checkFiled(Entry::Ptr entry);

	Storage::Ptr _remoteDB;
	TableInfo::Ptr _tableInfo;
	std::map<std::string, Entries::Ptr> _cache;

	h256 _blockHash;
	int _blockNum = 0;
};

} // namespace storage

} // namespace dev
