<template>
  <child v-model="name" v-model:email="email" />
  <p>姓名：{{ name }}</p>
  <p>邮箱：{{ email }}</p>
</template>

<script lang="ts" setup>
import child from './VModel-Child.vue'
import { ref } from 'vue'

const name = ref<string>('张三')
const email = ref<string>('666@qq.com')
</script>