// SPDX-License-Identifier: MIT
// cctest_csmith_e23cc729.c --- cctest case csmith_e23cc729 (csmith seed 3795633961)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3f1cc71e */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 3795633961 -o /tmp/csmith_gen_swbq61ub/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int32_t  f0;
   uint64_t  f1;
   const uint32_t  f2;
   int64_t  f3;
   uint8_t  f4;
   int64_t  f5;
};

struct S1 {
   uint64_t  f0;
};

union U2 {
   int64_t  f0;
   int8_t  f1;
   int8_t  f2;
   int16_t  f3;
};


static uint32_t g_8 = 0xFC9A57B5L;
static uint32_t g_18[5] = {0x45ACEE61L,0x45ACEE61L,0x45ACEE61L,0x45ACEE61L,0x45ACEE61L};
static uint64_t g_20 = 18446744073709551615UL;
static int16_t g_47[2] = {4L,4L};
static int32_t g_64 = 1L;
static int16_t g_65 = 0x5B3AL;
static uint8_t g_67 = 0x93L;
static uint64_t g_72[3] = {0xDAD933B151854E46LL,0xDAD933B151854E46LL,0xDAD933B151854E46LL};
static int16_t g_83[2][5] = {{2L,2L,2L,2L,2L},{1L,1L,1L,1L,1L}};
static uint8_t g_85[1][2][1] = {{{248UL},{248UL}}};
static struct S0 g_90[5][3][2] = {{{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL}},{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{0xC721796DL,0x0D780A8980DF3AEBLL,0x8FA76005L,1L,0UL,1L}},{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL}}},{{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{0xC721796DL,0x0D780A8980DF3AEBLL,0x8FA76005L,1L,0UL,1L}},{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL}},{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{0xC721796DL,0x0D780A8980DF3AEBLL,0x8FA76005L,1L,0UL,1L}}},{{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL}},{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{0xC721796DL,0x0D780A8980DF3AEBLL,0x8FA76005L,1L,0UL,1L}},{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL}}},{{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{0xC721796DL,0x0D780A8980DF3AEBLL,0x8FA76005L,1L,0UL,1L}},{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL}},{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{0xC721796DL,0x0D780A8980DF3AEBLL,0x8FA76005L,1L,0UL,1L}}},{{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL}},{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{0xC721796DL,0x0D780A8980DF3AEBLL,0x8FA76005L,1L,0UL,1L}},{{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL},{-7L,0xFA66077482110C12LL,0xBDA4FDBCL,8L,0UL,0xBB4CDDCCF3742C04LL}}}};
static struct S1 g_126 = {0x0BB9CBC2055579FDLL};
static uint16_t g_139[5][5] = {{0x64F1L,0x64F1L,0x7BDDL,0x64F1L,0x64F1L},{65535UL,65535UL,65535UL,65535UL,65535UL},{0x64F1L,65535UL,65535UL,0x64F1L,65535UL},{65535UL,65535UL,0UL,65535UL,65535UL},{65535UL,0x64F1L,65535UL,65535UL,0x64F1L}};
static uint16_t g_151 = 0xF75CL;
static int32_t g_164 = 0x31D27B0BL;
static int32_t g_167 = 1L;
static int32_t g_169[3][2][1] = {{{0xB4DF1DE3L},{0xB4DF1DE3L}},{{0xB4DF1DE3L},{0xB4DF1DE3L}},{{0xB4DF1DE3L},{0xB4DF1DE3L}}};
static int32_t g_171 = 0L;
static uint16_t g_173[1][3][2] = {{{0x86C0L,0UL},{0x86C0L,0x86C0L},{0UL,0x86C0L}}};
static uint8_t g_177 = 0x05L;
static int16_t g_180[1][5] = {{0L,0L,0L,0L,0L}};
static union U2 g_194 = {1L};



static struct S1  func_1(void);
static struct S1  func_2(int16_t  p_3, uint8_t  p_4, union U2  p_5, int32_t  p_6, uint32_t  p_7);
static int32_t  func_11(uint16_t  p_12, uint32_t  p_13, int8_t  p_14, uint16_t  p_15);
static uint16_t  func_26(uint16_t  p_27, int16_t  p_28, struct S1  p_29);




static struct S1  func_1(void)
{ 
    uint32_t l_9 = 0x5047C4D1L;
    union U2 l_10[1][5][3] = {{{{0xD76CE4A6F44401D1LL},{0xD76CE4A6F44401D1LL},{0xD76CE4A6F44401D1LL}},{{0x76EEA53061ECE305LL},{0x76EEA53061ECE305LL},{0x76EEA53061ECE305LL}},{{0xD76CE4A6F44401D1LL},{0xD76CE4A6F44401D1LL},{0xD76CE4A6F44401D1LL}},{{0x76EEA53061ECE305LL},{0x76EEA53061ECE305LL},{0x76EEA53061ECE305LL}},{{0xD76CE4A6F44401D1LL},{0xD76CE4A6F44401D1LL},{0xD76CE4A6F44401D1LL}}}};
    struct S1 l_25 = {18446744073709551615UL};
    int32_t l_134 = 0x84FA51A1L;
    int32_t l_141 = (-9L);
    int32_t l_148 = 0x3165A292L;
    uint16_t l_154 = 0xEE5FL;
    int64_t l_163 = 0xFCF5468D3076AE70LL;
    struct S1 l_206[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
    int i, j, k;
    l_25 = func_2(g_8, l_9, l_10[0][1][1], func_11((g_18[0] = (safe_add_func_uint16_t_u_u(0xAFA0L, l_10[0][1][1].f1))), l_10[0][1][1].f0, l_10[0][1][1].f0, g_8), l_10[0][1][1].f3);
    if ((l_10[0][1][1].f3 == (func_26((l_25 , (l_10[0][1][1].f1 > ((safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(l_10[0][1][1].f2, l_10[0][1][1].f1)), l_25.f0)) == (-1L)))), l_25.f0, l_25) ^ 7L)))
    { 
        const int64_t l_140 = 0xBA22726DF1FB71B8LL;
        l_141 = ((safe_mul_func_uint16_t_u_u(((g_18[0] | (safe_mod_func_int16_t_s_s((+g_85[0][1][0]), (safe_div_func_int32_t_s_s(l_134, (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((g_139[0][0] = 1UL) | g_90[2][1][0].f1), 255UL)), g_47[0]))))))) < l_140), 5UL)) >= 0xA6L);
    }
    else
    { 
        uint64_t l_147[1];
        int32_t l_149 = (-7L);
        int i;
        for (i = 0; i < 1; i++)
            l_147[i] = 0xC544D90D512875DDLL;
        if (g_47[1])
        { 
            struct S0 l_144 = {0x4CD87840L,18446744073709551606UL,18446744073709551613UL,0xCD38516734CF679BLL,253UL,0x45F4F03D5EB93CA2LL};
            int32_t l_165 = (-1L);
            int32_t l_166 = (-1L);
            l_149 ^= (safe_lshift_func_int16_t_s_u((4294967292UL ^ (l_144 , (g_18[0] = (safe_add_func_int32_t_s_s(((l_147[0] < (l_148 &= l_141)) != g_83[1][2]), 0x3C59A757L))))), 12));
            if (g_85[0][1][0])
            { 
                int64_t l_150 = (-1L);
                g_151--;
                g_64 |= (((((g_20 = l_154) <= (safe_mod_func_uint8_t_u_u(0x72L, g_65))) <= (safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((g_18[0] >= 0x1820L) ^ l_163), g_90[2][1][0].f1)), l_150)), 0))) > l_144.f1) || l_144.f3);
            }
            else
            { 
                int32_t l_168 = 0x05BA9ED6L;
                int32_t l_170 = 0xE96879FCL;
                int32_t l_172[2];
                int32_t l_176 = 0x41292671L;
                int i;
                for (i = 0; i < 2; i++)
                    l_172[i] = (-1L);
                --g_173[0][1][0];
                g_64 = ((l_149 = 1L) , l_176);
            }
            g_177--;
        }
        else
        { 
            uint64_t l_181 = 0xD56E028AD11B3277LL;
            g_64 = (((g_180[0][3] = l_10[0][1][1].f2) >= g_90[2][1][0].f4) == l_181);
            g_64 = (((((safe_div_func_uint64_t_u_u(((((safe_mod_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(l_181, (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((l_134 <= ((g_194 = g_194) , ((safe_lshift_func_int8_t_s_u(g_194.f1, 2)) > l_181))), 2)), g_83[0][3])))), 65528UL)) < 0L) | 1UL) , l_181), l_149)) , g_139[0][0]) <= g_72[1]) ^ g_169[2][0][0]) , l_149);
        }
    }
    for (g_177 = 0; (g_177 <= 2); g_177 += 1)
    { 
        union U2 l_205 = {0L};
        for (g_67 = 0; (g_67 <= 2); g_67 += 1)
        { 
            for (l_148 = 2; (l_148 >= 0); l_148 -= 1)
            { 
                int i;
                if (g_72[g_67])
                    break;
                if (g_90[2][1][0].f3)
                    break;
                g_126 = g_126;
            }
            if (g_173[0][1][1])
                continue;
        }
        l_206[3] = func_2(g_90[2][1][0].f3, ((safe_mod_func_uint64_t_u_u((((g_194 = (((safe_mod_func_uint64_t_u_u((((safe_sub_func_int32_t_s_s(((((g_18[0] ^= (g_194 , l_9)) <= g_167) != 9L) < g_90[2][1][0].f4), 4294967289UL)) <= g_173[0][1][0]) , g_85[0][1][0]), 0xB7C0C4574A80814BLL)) | g_83[0][1]) , l_205)) , g_194.f3) || g_90[2][1][0].f2), g_180[0][3])) ^ 0L), l_10[0][1][2], g_83[0][0], l_163);
    }
    return l_206[3];
}



static struct S1  func_2(int16_t  p_3, uint8_t  p_4, union U2  p_5, int32_t  p_6, uint32_t  p_7)
{ 
    struct S1 l_24 = {0xE5EC35211521FAFBLL};
    for (p_6 = 28; (p_6 == 12); --p_6)
    { 
        return l_24;
    }
    return l_24;
}



static int32_t  func_11(uint16_t  p_12, uint32_t  p_13, int8_t  p_14, uint16_t  p_15)
{ 
    int16_t l_19 = 0x5943L;
    int64_t l_21 = 0x4C6A37D7C869B7D6LL;
    l_21 = (g_20 = l_19);
    return l_21;
}



static uint16_t  func_26(uint16_t  p_27, int16_t  p_28, struct S1  p_29)
{ 
    int32_t l_42 = 0x95534FD3L;
    int32_t l_84 = (-10L);
    union U2 l_93 = {0xD30D066B32335DC6LL};
    uint16_t l_124 = 0xE7EEL;
lbl_125:
    for (p_27 = 0; (p_27 < 6); ++p_27)
    { 
        uint64_t l_63 = 0x2071694A98A1BD05LL;
        int32_t l_68[4];
        int16_t l_94[1][5][5] = {{{8L,0xEA9CL,8L,8L,0xEA9CL},{0x9F83L,(-4L),(-4L),0x9F83L,(-4L)},{0xEA9CL,0xEA9CL,0x54F2L,0xEA9CL,0xEA9CL},{(-4L),0x9F83L,(-4L),(-4L),0x9F83L},{0xEA9CL,8L,8L,0xEA9CL,8L}}};
        uint16_t l_106 = 0x30F7L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_68[i] = 0xF5592973L;
        for (g_20 = 0; (g_20 == 10); g_20++)
        { 
            uint8_t l_46 = 0x35L;
            int16_t l_69 = 5L;
            int32_t l_71 = 9L;
            for (g_8 = 0; (g_8 == 25); g_8++)
            { 
                int64_t l_43 = (-4L);
                l_43 = (l_42 |= (safe_div_func_int16_t_s_s(g_18[0], g_18[1])));
                return l_43;
            }
            if (l_42)
                goto lbl_125;
            if ((l_42 > (safe_rshift_func_uint8_t_u_u((l_46 != (l_42 >= (p_29.f0 , g_47[0]))), 1))))
            { 
                uint16_t l_52 = 0x0149L;
                uint16_t l_66 = 0x8A62L;
                g_67 = ((l_66 = (g_65 = (safe_div_func_uint8_t_u_u((g_64 |= (safe_add_func_int16_t_s_s((l_52 = p_27), (((((safe_mod_func_uint8_t_u_u(((p_27 != ((safe_sub_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_20, 14)), (safe_rshift_func_int8_t_s_s((g_47[0] && l_63), l_63)))) && g_20) >= g_20), p_29.f0)) && l_63)) < p_28), 0x1BL)) < l_63) && g_20) < p_28) >= 0x67A5E2B1956A74ABLL)))), g_18[1])))) , g_8);
                if (l_42)
                    continue;
                if (p_28)
                    break;
            }
            else
            { 
                int32_t l_70 = 0xA99669D5L;
                int32_t l_81 = 0x2E546EC7L;
                int32_t l_82 = 0x06456AA7L;
                --g_72[1];
                g_64 ^= (g_72[1] & (safe_sub_func_uint64_t_u_u(18446744073709551614UL, (((safe_sub_func_uint64_t_u_u((((l_68[0] |= ((safe_mod_func_uint16_t_u_u((g_85[0][1][0]--), (l_42 = (g_72[1] , (safe_mod_func_uint64_t_u_u((l_46 | g_65), p_27)))))) > p_27)) ^ g_47[1]) <= g_18[3]), 0x4D3A61860F42E901LL)) && 1L) >= p_28))));
            }
        }
        if ((((func_2(l_84, (g_90[2][1][0] , (p_29.f0 >= (safe_rshift_func_int8_t_s_s(g_90[2][1][0].f3, 5)))), l_93, l_94[0][0][2], p_29.f0) , l_94[0][2][4]) < p_29.f0) >= l_63))
        { 
            int16_t l_105 = 2L;
            int32_t l_107 = 0xE3AF3587L;
            if ((g_85[0][0][0] & (p_28 , p_28)))
            { 
                g_64 ^= ((p_29.f0 >= 0xB18E49B9DBF79CE2LL) && 0x0CL);
            }
            else
            { 
                uint16_t l_108 = 0x03A9L;
                l_42 ^= ((p_28 == (!(7L < (safe_mul_func_uint16_t_u_u((l_107 = (l_106 = (((!((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((l_68[0] &= (((g_90[2][1][0].f4 &= 0x40L) , (safe_mul_func_uint16_t_u_u(p_27, p_28))) < g_8)) && 0xC9L) < g_90[2][1][0].f1), l_63)), l_105)) != p_29.f0)) | g_18[0]) == (-1L)))), g_18[0]))))) , 0x620CEAD8L);
                return l_108;
            }
        }
        else
        { 
            uint8_t l_119 = 255UL;
            for (g_8 = 26; (g_8 >= 36); g_8 = safe_add_func_uint16_t_u_u(g_8, 8))
            { 
                int32_t l_120[4][3];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_120[i][j] = (-8L);
                }
                g_64 = (((((safe_unary_minus_func_uint64_t_u((~(safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_120[3][2] = (safe_mul_func_int8_t_s_s(1L, l_119))), 9)), g_18[4]))))) , (safe_rshift_func_int16_t_s_s((+l_119), g_83[0][0]))) , l_124) && p_27) , g_90[2][1][0].f0);
            }
        }
    }
    g_126 = p_29;
    return l_42;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_18[i], "g_18[i]", print_hash_value);

    }
    transparent_crc(g_20, "g_20", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);

    }
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_83[i][j], "g_83[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_85[i][j][k], "g_85[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_90[i][j][k].f0, "g_90[i][j][k].f0", print_hash_value);
                transparent_crc(g_90[i][j][k].f1, "g_90[i][j][k].f1", print_hash_value);
                transparent_crc(g_90[i][j][k].f2, "g_90[i][j][k].f2", print_hash_value);
                transparent_crc(g_90[i][j][k].f3, "g_90[i][j][k].f3", print_hash_value);
                transparent_crc(g_90[i][j][k].f4, "g_90[i][j][k].f4", print_hash_value);
                transparent_crc(g_90[i][j][k].f5, "g_90[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_139[i][j], "g_139[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_169[i][j][k], "g_169[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_173[i][j][k], "g_173[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_177, "g_177", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_180[i][j], "g_180[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_194.f0, "g_194.f0", print_hash_value);
    transparent_crc(g_194.f1, "g_194.f1", print_hash_value);
    transparent_crc(g_194.f2, "g_194.f2", print_hash_value);
    transparent_crc(g_194.f3, "g_194.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
