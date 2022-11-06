<template>
  <button @click="updateName">更新name</button>
  <button @click="updateEmail">更新email</button>
</template>

<script lang="ts" setup>
// 定义emit
//注意此时不再是像Vue2那样使用$emit('input')了，而是统一使用update:xxx的方式
const emits = defineEmits<{
  (e: 'update:modelValue', value: string): void
  (e: 'update:email', value: string): void
}>()

const updateName = () => {
  emits('update:modelValue', '李四')
}

const updateEmail = () => {
  emits('update:email', '123456@qq.com')
}
</script>