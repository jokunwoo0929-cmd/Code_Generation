# c-audit-harness

2인 팀으로 C언어 코드를 생성하고 안전성을 감사하는 최소 하네스 프로젝트

## 규칙

- 모든 코드의 중간 산출물과 요구사항 파일은 `_workspace/` 폴더에 둔다.
- 에이전트는 `.claude/agents/` 폴더에, 스킬은 `.claude/skills/` 폴더에 정의한다.
- 코드 작성과 리뷰는 반드시 사전에 정의된 에이전트(c-coder-agent, c-reviewer-agent)를 통해 순차적으로 진행한다.
