---
name: c-code-review
description: "C언어 코드 작성과 안전성 검사를 2인 팀(coder-reviewer)으로 수행한다. 'C코드 작성', '프로그램 만들어줘' 요청 시 사용한다."
allowed-tools: Bash, Read, Write
---

# C Code Review Skill

2인 팀을 순차로 호출해 C 코드를 생성하고 규칙을 검증한다.

## Workflow
1. Precondition 체크. `_workspace/req.txt` 파일이 존재하는지 확인한다. 없으면 "req.txt에 요구사항을 먼저 작성하세요" 안내 후 종료.
2. author 호출. c-coder-agent를 호출, 출력은 `_workspace/code.c`.
3. reviewer 호출. c-reviewer-agent를 호출, 출력은 `_workspace/review-report.md`.
4. 판정 분기.
   - PASS: `_workspace/code.c` 코드를 제시하고 완료.
   - REDO: reviewer의 수정 지시를 프롬프트에 포함해 author 재호출 (최대 2회).
5. 루프 종료. PASS 또는 재호출 2회 초과 시 종료.
