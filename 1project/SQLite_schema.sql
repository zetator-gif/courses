CREATE TABLE IF NOT EXISTS snippets {
  id TEXT PRIMARY KEY,
  user_id TEXT.
  title TEXT NOT NULL.
  language TEXT DEFAULT 'text',
  content TEXT NOT NULL,
  created_at TEXT NOT NULL,
  expires_at TEXT,
  is_public INTEGER NOT NULL DEFAULT 1,
  is_deleted INTEGER NOT NULL DEFAULT 0,
  views INTEGER NOT NULL DEFAULT 0,
  likes INTEGER NOT NULL DEFAULT 0,
  hash TEXT
};

CREATE INDEX Idx_snippets_created_at ON snippets(created_at);
CREATE INDEX idx_snippets_user_id ON snippets(user_id);
CREATE INDEX idx_snippets_public ON snippets(is_public, created_at);

