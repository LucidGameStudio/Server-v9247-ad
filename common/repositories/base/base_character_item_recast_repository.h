/**
 * DO NOT MODIFY THIS FILE
 *
 * This repository was automatically generated and is NOT to be modified directly.
 * Any repository modifications are meant to be made to the repository extending the base.
 * Any modifications to base repositories are to be made by the generator only
 *
 * @generator ./utils/scripts/generators/repository-generator.pl
 * @docs https://eqemu.gitbook.io/server/in-development/developer-area/repositories
 */

#ifndef EQEMU_BASE_CHARACTER_ITEM_RECAST_REPOSITORY_H
#define EQEMU_BASE_CHARACTER_ITEM_RECAST_REPOSITORY_H

#include "../../database.h"
#include "../../strings.h"
#include <ctime>

class BaseCharacterItemRecastRepository {
public:
	struct CharacterItemRecast {
		uint32_t id;
		uint16_t recast_type;
		uint32_t timestamp;
	};

	static std::string PrimaryKey()
	{
		return std::string("id");
	}

	static std::vector<std::string> Columns()
	{
		return {
			"id",
			"recast_type",
			"timestamp",
		};
	}

	static std::vector<std::string> SelectColumns()
	{
		return {
			"id",
			"recast_type",
			"timestamp",
		};
	}

	static std::string ColumnsRaw()
	{
		return std::string(Strings::Implode(", ", Columns()));
	}

	static std::string SelectColumnsRaw()
	{
		return std::string(Strings::Implode(", ", SelectColumns()));
	}

	static std::string TableName()
	{
		return std::string("character_item_recast");
	}

	static std::string BaseSelect()
	{
		return fmt::format(
			"SELECT {} FROM {}",
			SelectColumnsRaw(),
			TableName()
		);
	}

	static std::string BaseInsert()
	{
		return fmt::format(
			"INSERT INTO {} ({}) ",
			TableName(),
			ColumnsRaw()
		);
	}

	static CharacterItemRecast NewEntity()
	{
		CharacterItemRecast e{};

		e.id          = 0;
		e.recast_type = 0;
		e.timestamp   = 0;

		return e;
	}

	static CharacterItemRecast GetCharacterItemRecast(
		const std::vector<CharacterItemRecast> &character_item_recasts,
		int character_item_recast_id
	)
	{
		for (auto &character_item_recast : character_item_recasts) {
			if (character_item_recast.id == character_item_recast_id) {
				return character_item_recast;
			}
		}

		return NewEntity();
	}

	static CharacterItemRecast FindOne(
		Database& db,
		int character_item_recast_id
	)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"{} WHERE id = {} LIMIT 1",
				BaseSelect(),
				character_item_recast_id
			)
		);

		auto row = results.begin();
		if (results.RowCount() == 1) {
			CharacterItemRecast e{};

			e.id          = static_cast<uint32_t>(strtoul(row[0], nullptr, 10));
			e.recast_type = static_cast<uint16_t>(strtoul(row[1], nullptr, 10));
			e.timestamp   = static_cast<uint32_t>(strtoul(row[2], nullptr, 10));

			return e;
		}

		return NewEntity();
	}

	static int DeleteOne(
		Database& db,
		int character_item_recast_id
	)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"DELETE FROM {} WHERE {} = {}",
				TableName(),
				PrimaryKey(),
				character_item_recast_id
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int UpdateOne(
		Database& db,
		const CharacterItemRecast &e
	)
	{
		std::vector<std::string> v;

		auto columns = Columns();

		v.push_back(columns[0] + " = " + std::to_string(e.id));
		v.push_back(columns[1] + " = " + std::to_string(e.recast_type));
		v.push_back(columns[2] + " = " + std::to_string(e.timestamp));

		auto results = db.QueryDatabase(
			fmt::format(
				"UPDATE {} SET {} WHERE {} = {}",
				TableName(),
				Strings::Implode(", ", v),
				PrimaryKey(),
				e.id
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static CharacterItemRecast InsertOne(
		Database& db,
		CharacterItemRecast e
	)
	{
		std::vector<std::string> v;

		v.push_back(std::to_string(e.id));
		v.push_back(std::to_string(e.recast_type));
		v.push_back(std::to_string(e.timestamp));

		auto results = db.QueryDatabase(
			fmt::format(
				"{} VALUES ({})",
				BaseInsert(),
				Strings::Implode(",", v)
			)
		);

		if (results.Success()) {
			e.id = results.LastInsertedID();
			return e;
		}

		e = NewEntity();

		return e;
	}

	static int InsertMany(
		Database& db,
		const std::vector<CharacterItemRecast> &entries
	)
	{
		std::vector<std::string> insert_chunks;

		for (auto &e: entries) {
			std::vector<std::string> v;

			v.push_back(std::to_string(e.id));
			v.push_back(std::to_string(e.recast_type));
			v.push_back(std::to_string(e.timestamp));

			insert_chunks.push_back("(" + Strings::Implode(",", v) + ")");
		}

		std::vector<std::string> v;

		auto results = db.QueryDatabase(
			fmt::format(
				"{} VALUES {}",
				BaseInsert(),
				Strings::Implode(",", insert_chunks)
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static std::vector<CharacterItemRecast> All(Database& db)
	{
		std::vector<CharacterItemRecast> all_entries;

		auto results = db.QueryDatabase(
			fmt::format(
				"{}",
				BaseSelect()
			)
		);

		all_entries.reserve(results.RowCount());

		for (auto row = results.begin(); row != results.end(); ++row) {
			CharacterItemRecast e{};

			e.id          = static_cast<uint32_t>(strtoul(row[0], nullptr, 10));
			e.recast_type = static_cast<uint16_t>(strtoul(row[1], nullptr, 10));
			e.timestamp   = static_cast<uint32_t>(strtoul(row[2], nullptr, 10));

			all_entries.push_back(e);
		}

		return all_entries;
	}

	static std::vector<CharacterItemRecast> GetWhere(Database& db, const std::string &where_filter)
	{
		std::vector<CharacterItemRecast> all_entries;

		auto results = db.QueryDatabase(
			fmt::format(
				"{} WHERE {}",
				BaseSelect(),
				where_filter
			)
		);

		all_entries.reserve(results.RowCount());

		for (auto row = results.begin(); row != results.end(); ++row) {
			CharacterItemRecast e{};

			e.id          = static_cast<uint32_t>(strtoul(row[0], nullptr, 10));
			e.recast_type = static_cast<uint16_t>(strtoul(row[1], nullptr, 10));
			e.timestamp   = static_cast<uint32_t>(strtoul(row[2], nullptr, 10));

			all_entries.push_back(e);
		}

		return all_entries;
	}

	static int DeleteWhere(Database& db, const std::string &where_filter)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"DELETE FROM {} WHERE {}",
				TableName(),
				where_filter
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int Truncate(Database& db)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"TRUNCATE TABLE {}",
				TableName()
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int64 GetMaxId(Database& db)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"SELECT COALESCE(MAX({}), 0) FROM {}",
				PrimaryKey(),
				TableName()
			)
		);

		return (results.Success() && results.begin()[0] ? strtoll(results.begin()[0], nullptr, 10) : 0);
	}

	static int64 Count(Database& db, const std::string &where_filter = "")
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"SELECT COUNT(*) FROM {} {}",
				TableName(),
				(where_filter.empty() ? "" : "WHERE " + where_filter)
			)
		);

		return (results.Success() && results.begin()[0] ? strtoll(results.begin()[0], nullptr, 10) : 0);
	}

};

#endif //EQEMU_BASE_CHARACTER_ITEM_RECAST_REPOSITORY_H
