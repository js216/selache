// SPDX-License-Identifier: MIT
// cctest_csmith_516f25e7.c --- cctest case csmith_516f25e7 (csmith seed 1366238695)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x56f36209 */

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

// Options:   -s 1366238695 -o /tmp/csmith_gen_6q0s84s1/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 18;
};
#pragma pack(pop)

struct S1 {
   signed f0 : 17;
   unsigned f1 : 17;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   unsigned f0 : 28;
};
#pragma pack(pop)

union U3 {
   uint64_t  f0;
   const int64_t  f1;
   const int16_t  f2;
};


static uint64_t g_7 = 0UL;
static struct S1 g_38 = {-186,129};
static struct S2 g_45 = {10636};
static int32_t g_52 = 0x52276C1FL;
static int32_t *g_53 = &g_52;
static int8_t g_57[5][2] = {{0x08L,0x08L},{0x08L,0x08L},{0x08L,0x08L},{0x08L,0x08L},{0x08L,0x08L}};
static uint16_t g_75 = 0x42DEL;
static int64_t g_112 = 0L;
static uint16_t g_114 = 0x8B8EL;
static uint64_t g_125[5] = {18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL};
static uint16_t g_133 = 65527UL;
static const int8_t g_146 = 0x0AL;
static uint8_t g_150 = 255UL;
static int32_t **g_226 = (void*)0;
static uint32_t g_229 = 0x1B18042EL;
static uint64_t g_239 = 0UL;
static uint64_t g_245 = 0UL;
static int8_t g_262 = 0xDAL;
static int16_t g_264[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
static int64_t g_265 = 0x4DF7525C60A8F4C8LL;
static int8_t g_266[2][1] = {{0xAFL},{0xAFL}};
static uint8_t g_269[3] = {0UL,0UL,0UL};
static struct S1 *g_278 = &g_38;
static struct S1 **g_277 = &g_278;
static struct S0 g_295 = {211};
static struct S2 g_309 = {9190};
static int16_t g_317 = 3L;
static const union U3 *g_318 = (void*)0;
static int8_t g_364 = 7L;
static int16_t g_365[4] = {(-1L),(-1L),(-1L),(-1L)};
static int32_t g_366[1][2] = {{1L,1L}};
static int16_t g_367 = 1L;
static int32_t g_370 = 9L;
static int32_t g_371 = 1L;
static uint8_t g_372[6][1] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
static int64_t g_381 = 3L;
static uint8_t g_382[5][6][1] = {{{246UL},{0UL},{253UL},{0UL},{246UL},{253UL}},{{0xF5L},{0xF5L},{253UL},{253UL},{255UL},{0xC7L}},{{255UL},{253UL},{0xC7L},{1UL},{1UL},{0xC7L}},{{253UL},{255UL},{0xC7L},{255UL},{253UL},{0xC7L}},{{1UL},{1UL},{0xC7L},{253UL},{255UL},{0xC7L}}};
static int64_t g_398[7] = {1L,1L,0x4317772A9D8A6D06LL,1L,1L,0x4317772A9D8A6D06LL,1L};
static int64_t g_438 = (-9L);
static union U3 g_454 = {0x22ADF1F39E0C308BLL};
static uint16_t *g_458 = &g_114;
static int64_t g_481 = (-1L);
static int32_t g_482 = 1L;
static uint8_t g_483 = 0x2BL;
static struct S2 **g_540[7][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
static struct S1 **g_563 = &g_278;
static uint16_t **g_575[7][2][3] = {{{&g_458,&g_458,&g_458},{&g_458,&g_458,&g_458}},{{&g_458,&g_458,&g_458},{&g_458,&g_458,&g_458}},{{&g_458,&g_458,&g_458},{&g_458,&g_458,&g_458}},{{&g_458,&g_458,&g_458},{&g_458,&g_458,&g_458}},{{&g_458,&g_458,&g_458},{&g_458,&g_458,&g_458}},{{&g_458,&g_458,&g_458},{&g_458,&g_458,&g_458}},{{&g_458,&g_458,&g_458},{&g_458,&g_458,&g_458}}};
static uint16_t ***g_574 = &g_575[3][0][0];
static int64_t **g_585 = (void*)0;
static int64_t g_678 = 1L;
static uint8_t g_679 = 8UL;
static const int64_t g_695 = (-1L);
static union U3 g_707 = {0x13AE0275B6B0E3C4LL};
static int64_t g_727[1][7] = {{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}};
static uint32_t g_728 = 0xFD24F4D3L;
static const uint64_t g_750 = 1UL;
static int32_t g_837 = (-1L);
static uint32_t g_838 = 7UL;
static struct S0 *g_872 = (void*)0;
static struct S0 **g_871 = &g_872;
static uint64_t g_918 = 0UL;
static uint32_t g_933 = 0x678DAFBCL;
static uint32_t g_955 = 1UL;
static uint64_t g_1031 = 5UL;
static const int32_t g_1041 = 1L;
static uint64_t g_1049 = 1UL;
static uint8_t g_1074 = 0x06L;



static int32_t  func_1(void);
static uint32_t  func_2(int16_t  p_3, const struct S1  p_4, union U3  p_5, uint16_t  p_6);
static const struct S1  func_8(int64_t  p_9, uint32_t  p_10);
static int32_t  func_11(int16_t  p_12, struct S2  p_13, const int64_t  p_14, struct S0  p_15);
static int16_t  func_16(int32_t  p_17, struct S1  p_18);
static struct S2  func_19(const int8_t  p_20, const uint16_t  p_21);
static struct S2  func_22(int8_t  p_23, struct S1  p_24, int32_t  p_25, struct S2  p_26, struct S1  p_27);
static int16_t  func_30(const int32_t  p_31, uint64_t  p_32, const uint16_t  p_33, uint32_t  p_34);




static int32_t  func_1(void)
{ 
    struct S1 l_37 = {-266,248};
    int64_t l_42[3];
    int32_t l_43 = 1L;
    int16_t l_44 = (-3L);
    int8_t *l_56 = &g_57[0][0];
    struct S2 l_58[1][3][5] = {{{{1548},{1548},{6545},{1548},{1548}},{{5103},{555},{5103},{5103},{555}},{{1548},{5475},{5475},{1548},{5475}}}};
    union U3 l_810[5] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
    int32_t l_811 = (-1L);
    int32_t *l_1055 = &g_482;
    int32_t l_1070 = 1L;
    int32_t l_1071 = (-8L);
    int32_t l_1072 = 6L;
    int32_t l_1073 = 0xFC8B7846L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_42[i] = 0x481D3EFE35FE57B6LL;
    (*l_1055) = (func_2(g_7, func_8((func_11(func_16((func_19(g_7, (func_22(((*l_56) &= (safe_add_func_int16_t_s_s(0x748AL, func_30((safe_mod_func_int32_t_s_s(((g_38 = l_37) , (+(g_38.f0 && ((safe_add_func_int16_t_s_s(((l_43 &= (((g_38.f1 != (((g_7 ^ l_42[2]) ^ g_38.f1) <= g_38.f0)) | 0xF4L) , g_7)) , g_38.f0), g_7)) && 0xC5C2F002739425A3LL)))), g_7)), l_44, l_37.f0, l_37.f0)))), l_37, l_44, l_58[0][2][2], l_37) , g_57[4][0])) , g_7), l_37), g_309, g_7, g_295) , l_37.f1), l_42[2]), l_810[0], l_811) , l_43);
    for (g_239 = 0; (g_239 != 26); ++g_239)
    { 
        int32_t *l_1058 = &g_837;
        int32_t l_1059 = 0x40CB94EAL;
        int32_t *l_1060 = &l_43;
        int32_t *l_1061 = &g_52;
        int32_t *l_1062 = (void*)0;
        int32_t *l_1063 = &g_370;
        int32_t *l_1064 = &g_482;
        int32_t *l_1065 = &l_1059;
        int32_t *l_1066 = &l_1059;
        int32_t *l_1067 = &g_370;
        int32_t *l_1068 = &g_52;
        int32_t *l_1069[4][4] = {{&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52}};
        int i, j;
        --g_1074;
        if ((*l_1063))
            continue;
        return g_239;
    }
    (*l_1055) = ((*l_1055) != (safe_mod_func_int64_t_s_s(((&g_955 != (g_707.f2 , (l_58[0][2][2] , &g_229))) <= ((safe_mul_func_uint8_t_u_u((1UL < 0UL), (*l_1055))) >= g_838)), (*l_1055))));
    return (*l_1055);
}



static uint32_t  func_2(int16_t  p_3, const struct S1  p_4, union U3  p_5, uint16_t  p_6)
{ 
    const uint32_t l_820 = 8UL;
    int16_t l_827[1];
    struct S2 l_828[5] = {{7431},{7431},{7431},{7431},{7431}};
    int32_t l_833[3][1][6] = {{{1L,0x6EFCEE07L,1L,1L,0x6EFCEE07L,1L}},{{1L,0x6EFCEE07L,1L,1L,0x6EFCEE07L,1L}},{{1L,0x6EFCEE07L,1L,1L,0x6EFCEE07L,1L}}};
    int64_t *l_888 = &g_481;
    int64_t **l_887 = &l_888;
    struct S0 *l_911[7];
    int32_t *l_921 = &l_833[1][0][0];
    int32_t *l_922 = &g_371;
    int32_t *l_923 = &l_833[1][0][0];
    int32_t *l_924 = &l_833[1][0][0];
    int32_t *l_925 = &g_370;
    int32_t *l_926 = &g_52;
    int32_t *l_927[4] = {&g_52,&g_52,&g_52,&g_52};
    uint8_t l_928 = 252UL;
    int32_t l_931 = 0L;
    int8_t l_932 = 0x6AL;
    struct S1 l_942 = {-177,246};
    int16_t *l_948 = (void*)0;
    int16_t *l_949[7][7] = {{&l_827[0],&g_317,(void*)0,&g_367,(void*)0,&g_317,&l_827[0]},{&l_827[0],&g_317,(void*)0,&g_367,(void*)0,&g_317,&l_827[0]},{&l_827[0],&g_317,(void*)0,&g_367,(void*)0,&g_317,&l_827[0]},{&l_827[0],&g_317,(void*)0,&g_367,(void*)0,&g_317,&l_827[0]},{&l_827[0],&g_317,(void*)0,&g_367,(void*)0,&g_317,&l_827[0]},{&l_827[0],&g_317,(void*)0,&g_367,(void*)0,&g_317,&l_827[0]},{&l_827[0],&g_317,&g_367,&g_367,&g_367,&l_827[0],&g_367}};
    uint64_t *l_950[2];
    struct S1 l_951[3][3] = {{{-174,359},{-174,359},{-174,359}},{{-174,359},{-174,359},{-174,359}},{{-174,359},{-174,359},{-174,359}}};
    int32_t l_954 = 0x9D56DAA1L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_827[i] = 0L;
    for (i = 0; i < 7; i++)
        l_911[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_950[i] = &g_918;
    for (g_150 = 0; (g_150 <= 0); g_150 += 1)
    { 
        int64_t l_834 = 0L;
        int32_t l_836 = (-8L);
        struct S1 l_841 = {267,74};
        const struct S2 l_881[7] = {{3359},{7104},{7104},{3359},{7104},{7104},{3359}};
        int64_t *l_885 = &l_834;
        int64_t **l_884 = &l_885;
        uint16_t *** const l_910 = &g_575[2][1][2];
        int i;
        for (g_679 = 0; (g_679 <= 0); g_679 += 1)
        { 
            uint64_t l_825 = 0xFD74F36BD237CE46LL;
            int32_t l_831[4][3][5] = {{{0x6C1D8BF4L,0x6C1D8BF4L,7L,7L,0x6C1D8BF4L},{0x6345BB20L,1L,0x6345BB20L,1L,0x6345BB20L},{0x6C1D8BF4L,7L,7L,0x6C1D8BF4L,0x6C1D8BF4L}},{{0xC736E5C7L,1L,0xC736E5C7L,1L,0xC736E5C7L},{0x6C1D8BF4L,0x6C1D8BF4L,7L,7L,0x6C1D8BF4L},{0x6345BB20L,1L,0x6345BB20L,1L,0x6345BB20L}},{{0x6C1D8BF4L,7L,7L,0x6C1D8BF4L,0x6C1D8BF4L},{0xC736E5C7L,1L,0xC736E5C7L,1L,0xC736E5C7L},{0x6C1D8BF4L,0x6C1D8BF4L,7L,7L,0x6C1D8BF4L}},{{0x6345BB20L,1L,0x6345BB20L,1L,0x6345BB20L},{0x6C1D8BF4L,7L,7L,0x6C1D8BF4L,0x6C1D8BF4L},{0xC736E5C7L,1L,0xC736E5C7L,1L,0xC736E5C7L}}};
            uint16_t l_863 = 0x0F2CL;
            struct S0 l_892 = {436};
            union U3 l_901 = {18446744073709551607UL};
            int32_t **l_912 = &g_53;
            int i, j, k;
            for (g_133 = 0; (g_133 <= 1); g_133 += 1)
            { 
                int16_t *l_826 = &g_365[0];
                struct S1 l_829 = {-163,102};
                int8_t *l_830 = (void*)0;
                int32_t l_835[6][5][5] = {{{8L,0x97318A72L,0xEB7C7627L,0x949136C5L,0x1BE758FDL},{1L,0x9D7D599FL,0L,0xEEFCBBA4L,0xA6B01122L},{0xA6B01122L,0x6CE71206L,0x97C6BC3BL,0xEB7C7627L,7L},{0x97318A72L,0x04FFE12BL,0xA34CC873L,0x819EE2B1L,(-5L)},{0xBE47803BL,0x299AEE8CL,0xD88737E8L,0x737CA2E2L,0xEB7C7627L}},{{0xBE47803BL,1L,0xB2775978L,0L,0x4D2AC48DL},{0x97318A72L,0x97C6BC3BL,1L,0xA4ACABA1L,0xCE9F4DF7L},{0xA6B01122L,7L,(-1L),1L,0x04FFE12BL},{1L,0xC00A9AE8L,0xC00A9AE8L,1L,(-1L)},{8L,0xAC4DF606L,0xA6B01122L,(-9L),0x33745499L}},{{0xAC4DF606L,0L,0x7D75325AL,0x299AEE8CL,(-5L)},{0x6E9AC450L,0xCE9F4DF7L,(-2L),(-9L),(-8L)},{0xB2775978L,0L,8L,1L,0x9D7D599FL},{0xEB7C7627L,0x949136C5L,0x1BE758FDL,1L,1L},{0x7D75325AL,0xD6FBBD79L,0xB005DF7BL,0xA4ACABA1L,0xB2775978L}},{{0x1BE758FDL,0x4D2AC48DL,(-8L),0L,0xD6FBBD79L},{1L,0x33D48B8FL,7L,0x737CA2E2L,0xEEFCBBA4L},{0x04FFE12BL,0x33D48B8FL,0x97318A72L,0x819EE2B1L,1L},{0x910146C5L,0x4D2AC48DL,0xD6FBBD79L,0xEB7C7627L,0x299AEE8CL},{(-1L),0xD6FBBD79L,0x2C20BEE5L,0xEEFCBBA4L,0x6CE71206L}},{{0x819EE2B1L,0x949136C5L,7L,0x949136C5L,0x819EE2B1L},{0xEEFCBBA4L,0L,(-5L),0x126BD26CL,8L},{0xEEFCBBA4L,0x9D7D599FL,0xBE47803BL,0x819EE2B1L,0xB005DF7BL},{7L,0xD88737E8L,0x1BE758FDL,0x2C20BEE5L,8L},{0xD6FBBD79L,0x819EE2B1L,0x33745499L,(-5L),0x97C6BC3BL}},{{8L,1L,0x9D7D599FL,0L,0xEEFCBBA4L},{0x6CE71206L,0xAC4DF606L,0L,0x949136C5L,0x33D48B8FL},{1L,0x7AB53B93L,0x2C20BEE5L,0xB005DF7BL,0x737CA2E2L},{0xAC4DF606L,0xEB7C7627L,0xB005DF7BL,(-2L),0L},{1L,0x33D48B8FL,0xB005DF7BL,0xAC4DF606L,0x126BD26CL}}};
                const int32_t * const l_848 = &g_370;
                int i, j, k;
            }
            for (p_5.f0 = 0; (p_5.f0 <= 0); p_5.f0 += 1)
            { 
                const struct S1 *l_894 = &g_38;
                const struct S1 **l_893 = &l_894;
                int32_t *l_906 = &g_482;
                if (((void*)0 == &g_372[1][0]))
                { 
                    int i, j;
                    return g_727[p_5.f0][(p_5.f0 + 3)];
                }
                else
                { 
                    struct S0 *l_878 = &g_295;
                    int64_t *l_883 = (void*)0;
                    int64_t **l_882 = &l_883;
                    int64_t ***l_886[3];
                    int32_t l_891 = 0xF64CC34FL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_886[i] = &g_585;
                    (*l_878) = g_295;
                    l_891 &= (((l_881[0] , l_882) == (p_5.f2 , (l_887 = l_884))) && (((l_878 == ((safe_lshift_func_uint16_t_u_s(l_836, 7)) , (*g_871))) != l_831[1][0][0]) >= p_6));
                }
                (*l_893) = (l_892 , &p_4);
                for (g_728 = 1; (g_728 <= 4); g_728 += 1)
                { 
                    int32_t l_902 = (-1L);
                    int32_t *l_905[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_905[i] = &l_831[2][2][3];
                    l_902 = ((safe_sub_func_uint64_t_u_u(((l_827[p_5.f0] , (safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((5L && 0xF807L) || g_125[(g_679 + 1)]), (l_901 , 0x2EA844D096D15083LL))), (func_19(g_125[(p_5.f0 + 1)], p_6) , 65535UL)))) > 0xDB806EFEAA6A4673LL), 0xC36B32BD15563733LL)) && (-1L));
                    l_831[1][2][2] |= (safe_mul_func_int16_t_s_s(((p_4 , ((g_707 , &l_892) != (*g_871))) > p_4.f0), g_309.f0));
                    return p_5.f0;
                }
                (*l_906) = (g_229 , 0xE3C495ABL);
                for (g_482 = 3; (g_482 >= 0); g_482 -= 1)
                { 
                    int32_t *l_907 = &g_371;
                    int i;
                    (*l_907) = g_264[(g_679 + 3)];
                    (*l_907) |= (g_264[(g_150 + 3)] != (((*g_458) = ((l_892 , l_901) , (*g_458))) & ((void*)0 == l_910)));
                    (*g_871) = l_911[5];
                }
            }
            (*l_912) = &l_836;
        }
        if (l_881[0].f0)
            continue;
        for (g_133 = 0; (g_133 <= 0); g_133 += 1)
        { 
            int32_t *l_913 = &l_833[1][0][0];
            int32_t *l_914 = &l_833[1][0][0];
            int32_t *l_915 = &g_837;
            int32_t *l_916 = (void*)0;
            int32_t *l_917[4][5] = {{&l_833[2][0][3],&g_482,&l_833[2][0][3],&g_837,&g_482},{(void*)0,(void*)0,&g_837,(void*)0,&g_837},{(void*)0,(void*)0,&l_836,&g_482,&l_833[1][0][0]},{&l_833[2][0][3],&l_833[1][0][0],&g_837,&g_837,&l_833[1][0][0]}};
            int i, j;
            g_918--;
        }
    }
    ++l_928;
    g_933++;
    if (((*l_926) = ((*l_921) <= ((safe_lshift_func_uint8_t_u_s((((((safe_rshift_func_uint8_t_u_u(0x7AL, p_6)) != (((safe_rshift_func_uint8_t_u_s((((func_22((*l_922), (l_942 = l_942), ((g_918 = (safe_lshift_func_int16_t_s_s(((~((g_317 = 0xA032L) && ((void*)0 == l_888))) <= 0x12D41BDDB66FB81FLL), 12))) != p_4.f1), l_828[3], l_951[0][1]) , (void*)0) == &l_828[0]) & p_5.f2), p_3)) >= 0x14249845L) > (*l_921))) < g_269[2]) && (*l_926)) >= 0xD6619F2EL), 1)) < p_4.f1))))
    { 
        int64_t l_952 = (-1L);
        int32_t l_953[3][5][3] = {{{0x79B2B45BL,0xFCDAB139L,0xFCDAB139L},{0x280D6FBBL,(-1L),0xBBD187CDL},{0x79B2B45BL,0xFCDAB139L,0xFCDAB139L},{0x280D6FBBL,(-1L),0xBBD187CDL},{0x79B2B45BL,0xFCDAB139L,0xFCDAB139L}},{{0x280D6FBBL,(-1L),0xBBD187CDL},{0x79B2B45BL,0xFCDAB139L,0xFCDAB139L},{0x280D6FBBL,(-1L),0xBBD187CDL},{0x79B2B45BL,0xFCDAB139L,0xFCDAB139L},{0x280D6FBBL,(-1L),0xBBD187CDL}},{{0x79B2B45BL,0xFCDAB139L,0xFCDAB139L},{0x280D6FBBL,(-1L),0xBBD187CDL},{0x79B2B45BL,0xFCDAB139L,0xFCDAB139L},{0x280D6FBBL,(-1L),0xBBD187CDL},{0x79B2B45BL,0xFCDAB139L,0xFCDAB139L}}};
        int i, j, k;
        --g_955;
        (*l_925) = 0x9D3A9031L;
        return p_3;
    }
    else
    { 
        struct S2 l_958 = {3730};
        int32_t l_984 = (-1L);
        int64_t * const * const l_1000 = &l_888;
        union U3 * const l_1027 = (void*)0;
        struct S2 *l_1037 = &g_309;
        struct S2 **l_1036 = &l_1037;
        int32_t l_1046[3][4] = {{0x976BFA9FL,0xEE31D489L,0x976BFA9FL,0xEE31D489L},{0x976BFA9FL,0xEE31D489L,0x976BFA9FL,0xEE31D489L},{0x976BFA9FL,0xEE31D489L,0x976BFA9FL,0xEE31D489L}};
        uint32_t l_1052 = 1UL;
        int i, j;
        if (((*l_923) = (l_958 , (g_38.f0 ^= p_4.f0))))
        { 
            int8_t l_983[7];
            int i;
            for (i = 0; i < 7; i++)
                l_983[i] = (-1L);
            if ((g_366[0][0] | (g_955++)))
            { 
                int8_t l_982 = 1L;
                for (l_954 = 0; (l_954 >= (-24)); l_954 = safe_sub_func_uint32_t_u_u(l_954, 3))
                { 
                    int8_t l_980 = 0xC3L;
                    int8_t *l_981 = &g_364;
                    (*l_925) ^= (((((!(*l_926)) , (safe_lshift_func_int8_t_s_u((~(safe_div_func_uint16_t_u_u((((g_264[2] = (g_264[3] >= (safe_mod_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((func_19((((((g_838 | p_5.f2) || (((1L != ((((safe_sub_func_int8_t_s_s(((*l_981) |= (+((((((safe_sub_func_uint64_t_u_u(0UL, ((safe_rshift_func_uint16_t_u_s((p_6 , 0x9D32L), 5)) && p_6))) || g_150) ^ (*l_923)) | l_958.f0) != l_980) && 0xF0B4L))), l_982)) , l_983[5]) , l_958.f0) && p_3)) != (*l_926)) > 0x12L)) <= 5UL) >= l_982) > p_5.f0), p_6) , l_983[5]), l_980)) , &g_367) == &g_264[1]), l_958.f0)))) >= (*g_458)) >= l_983[5]), p_6))), p_5.f1))) > p_5.f1) <= 0x6B42DD55L) <= l_982);
                    if (l_980)
                        break;
                }
                l_984 |= l_958.f0;
                (*l_921) = (safe_mul_func_uint8_t_u_u((g_262 | ((void*)0 != &g_365[3])), l_983[5]));
            }
            else
            { 
                const int16_t l_987 = 0xE018L;
                (*l_924) ^= l_987;
                (**g_563) = func_8(l_958.f0, p_5.f2);
            }
            return p_6;
        }
        else
        { 
            for (g_483 = 0; (g_483 > 58); g_483++)
            { 
                struct S0 **l_995 = &l_911[1];
                if ((((((*g_278) , 8L) >= (safe_mod_func_uint32_t_u_u(0xF22E40B5L, (safe_mod_func_uint32_t_u_u(g_454.f0, 4294967294UL))))) , 1L) || (*g_458)))
                { 
                    if (p_4.f0)
                        break;
                    if (p_5.f0)
                        continue;
                }
                else
                { 
                    struct S0 **l_994[7];
                    struct S0 ***l_996 = &g_871;
                    int64_t *** const l_997 = &l_887;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_994[i] = &l_911[5];
                    (*l_923) |= (&g_585 != (((l_995 = (l_828[3] , l_994[3])) != ((*l_996) = &g_872)) , l_997));
                }
            }
        }
        if (p_5.f2)
        { 
            struct S0 l_1026 = {-389};
            int8_t *l_1028 = &g_57[0][0];
            struct S2 *l_1034 = &l_828[3];
            struct S2 **l_1033 = &l_1034;
            if ((safe_mul_func_int8_t_s_s(((l_1000 != g_585) , ((*l_1028) = (((safe_div_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_367, (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((+(safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((l_958.f0 >= (safe_sub_func_uint32_t_u_u((0L == (((l_1026 , l_1027) != l_1027) < g_370)), p_5.f0))) ^ p_6), g_7)), (*l_925))), p_4.f1)), p_5.f1))) != p_5.f1), 6)), p_4.f0)))), p_5.f2)), l_1026.f0)) == 0UL), (*l_926))) < p_5.f0) , 0x64L))), 0x53L)))
            { 
                const int32_t *l_1042 = &g_482;
                for (g_371 = 29; (g_371 > 21); g_371 = safe_sub_func_int16_t_s_s(g_371, 6))
                { 
                    uint32_t l_1032 = 0x7B30EF08L;
                    struct S2 ***l_1035[2][1][6] = {{{&g_540[5][0][0],&g_540[2][0][0],&l_1033,&l_1033,&g_540[2][0][0],&g_540[5][0][0]}},{{&l_1033,&g_540[5][0][0],&l_1033,&g_540[5][0][0],&l_1033,&l_1033}}};
                    const int32_t *l_1038 = (void*)0;
                    const int32_t **l_1039[6][4][5] = {{{(void*)0,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{(void*)0,&l_1038,(void*)0,&l_1038,&l_1038},{(void*)0,&l_1038,&l_1038,&l_1038,&l_1038}},{{&l_1038,&l_1038,(void*)0,(void*)0,&l_1038},{(void*)0,&l_1038,&l_1038,&l_1038,&l_1038},{(void*)0,&l_1038,(void*)0,&l_1038,&l_1038},{&l_1038,&l_1038,(void*)0,&l_1038,&l_1038}},{{(void*)0,&l_1038,&l_1038,(void*)0,(void*)0},{&l_1038,&l_1038,(void*)0,&l_1038,&l_1038},{(void*)0,&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,&l_1038,&l_1038,&l_1038,&l_1038}},{{&l_1038,(void*)0,&l_1038,&l_1038,(void*)0},{&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,&l_1038}},{{&l_1038,(void*)0,(void*)0,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,(void*)0,&l_1038},{(void*)0,(void*)0,&l_1038,(void*)0,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,&l_1038}},{{&l_1038,&l_1038,&l_1038,&l_1038,(void*)0},{&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,(void*)0,(void*)0,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,&l_1038}}};
                    const int32_t *l_1040 = &g_1041;
                    int i, j, k;
                    l_1032 = g_1031;
                    l_1036 = l_1033;
                    (*l_923) = 0x21823655L;
                    l_1042 = (l_1040 = l_1038);
                }
                (*l_923) ^= l_984;
            }
            else
            { 
                return l_1026.f0;
            }
        }
        else
        { 
            int64_t l_1044 = 0x63FF5CBB0F30AE64LL;
            int32_t l_1045 = (-5L);
            int32_t l_1047[6][6][3] = {{{0L,3L,(-5L)},{(-10L),0x63AFC518L,(-2L)},{5L,0x63AFC518L,4L},{1L,3L,0xF679CF47L},{0x1704E118L,0xFA1713FCL,(-1L)},{5L,3L,3L}},{{0x37CFD4CAL,0x63AFC518L,0xF679CF47L},{(-1L),0x63AFC518L,0xB9E35441L},{0xD10EFF40L,3L,0x79BCB8DAL},{1L,0xFA1713FCL,(-5L)},{(-1L),3L,(-1L)},{0L,0x63AFC518L,0x79BCB8DAL}},{{0L,0x63AFC518L,0x981DC48DL},{0x1704E118L,3L,(-2L)},{0xD10EFF40L,0xFA1713FCL,3L},{0L,3L,(-5L)},{(-10L),0x63AFC518L,(-2L)},{5L,0x63AFC518L,4L}},{{1L,3L,0xF679CF47L},{0x1704E118L,0xFA1713FCL,(-1L)},{5L,3L,3L},{0x37CFD4CAL,0x63AFC518L,0xF679CF47L},{(-1L),0x63AFC518L,0xB9E35441L},{0xD10EFF40L,3L,0x79BCB8DAL}},{{1L,0xFA1713FCL,(-5L)},{(-1L),3L,(-1L)},{0L,0x63AFC518L,0x79BCB8DAL},{0L,0x63AFC518L,0x981DC48DL},{0x1704E118L,3L,(-2L)},{0xD10EFF40L,0xFA1713FCL,3L}},{{0L,3L,(-5L)},{(-10L),0x63AFC518L,(-2L)},{5L,0x63AFC518L,4L},{1L,3L,0xF679CF47L},{0x1704E118L,0xFA1713FCL,(-1L)},{5L,3L,3L}}};
            int i, j, k;
            for (p_5.f0 = 0; (p_5.f0 <= 3); p_5.f0 += 1)
            { 
                int32_t l_1043 = 8L;
                int32_t l_1048[4][7] = {{5L,0x71F2AD69L,5L,0x71F2AD69L,5L,0x71F2AD69L,5L},{0x641C0838L,6L,6L,0x641C0838L,0x641C0838L,6L,6L},{0xC308477DL,0x71F2AD69L,0xC308477DL,0x71F2AD69L,0xC308477DL,0x71F2AD69L,0xC308477DL},{0x641C0838L,0x641C0838L,6L,6L,0x641C0838L,0x641C0838L,6L}};
                int i, j;
                --g_1049;
                return g_678;
            }
            l_1052--;
        }
    }
    return g_454.f0;
}



static const struct S1  func_8(int64_t  p_9, uint32_t  p_10)
{ 
    int16_t *l_315 = &g_264[1];
    int16_t *l_316 = &g_317;
    int32_t l_344[4] = {0x022920B5L,0x022920B5L,0x022920B5L,0x022920B5L};
    int16_t l_369 = 0x7FFEL;
    struct S2 l_386 = {3393};
    int32_t *l_400[7][6] = {{&g_52,&g_370,&l_344[2],&g_370,&g_52,&l_344[2]},{&g_52,&g_370,&l_344[2],&g_370,&g_52,&l_344[2]},{&g_52,&g_370,&l_344[2],&g_370,&g_52,&l_344[2]},{&g_52,&g_370,&l_344[2],&g_370,&g_52,&l_344[2]},{&g_52,&g_370,&l_344[2],&g_370,&g_52,&l_344[2]},{&g_52,&g_370,&l_344[2],&g_370,&g_52,&l_344[2]},{&g_52,&g_370,&l_344[2],&g_370,&g_52,&l_344[2]}};
    struct S1 *l_402 = &g_38;
    struct S0 l_405[4] = {{128},{128},{128},{128}};
    int8_t l_470 = 0x4AL;
    struct S2 * const l_532 = (void*)0;
    int64_t *l_546 = (void*)0;
    int64_t **l_545[6] = {&l_546,&l_546,&l_546,&l_546,&l_546,&l_546};
    union U3 l_555 = {18446744073709551615UL};
    const struct S1 *l_565 = &g_38;
    const struct S1 **l_564 = &l_565;
    uint16_t ** const l_573 = (void*)0;
    uint16_t ** const *l_572 = &l_573;
    int32_t l_635 = 0xD34CAE9AL;
    int32_t l_655 = 0xD3111420L;
    union U3 *l_668 = &g_454;
    union U3 **l_667 = &l_668;
    struct S2 *l_705 = &g_45;
    int16_t l_757[2];
    uint64_t l_771[6] = {0x5EEC752383E9C240LL,0x5EEC752383E9C240LL,0x5EEC752383E9C240LL,0x5EEC752383E9C240LL,0x5EEC752383E9C240LL,0x5EEC752383E9C240LL};
    uint8_t l_795 = 0UL;
    struct S2 *l_808 = &g_309;
    int i, j;
    for (i = 0; i < 2; i++)
        l_757[i] = 0x2537L;
lbl_320:
    for (p_9 = 0; (p_9 == (-11)); --p_9)
    { 
        return (*g_278);
    }
lbl_486:
    if ((((*l_316) |= ((*l_315) &= 0x242CL)) <= g_150))
    { 
        const union U3 **l_319[1][7][6] = {{{&g_318,&g_318,(void*)0,&g_318,(void*)0,&g_318},{&g_318,&g_318,(void*)0,&g_318,(void*)0,&g_318},{&g_318,&g_318,(void*)0,&g_318,(void*)0,&g_318},{&g_318,&g_318,(void*)0,&g_318,(void*)0,&g_318},{&g_318,&g_318,(void*)0,&g_318,(void*)0,&g_318},{&g_318,&g_318,(void*)0,&g_318,(void*)0,&g_318},{&g_318,&g_318,(void*)0,&g_318,(void*)0,&g_318}}};
        int32_t **l_322 = (void*)0;
        int32_t **l_323 = &g_53;
        int i, j, k;
lbl_321:
        g_318 = g_318;
        if (g_317)
            goto lbl_320;
        if (g_38.f0)
            goto lbl_321;
        if (g_317)
            goto lbl_321;
        (*l_323) = &g_52;
    }
    else
    { 
        uint32_t l_346 = 0xC9C6B8B8L;
        int32_t *l_348 = (void*)0;
        int32_t l_352[7][6] = {{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}};
        int32_t *l_358 = &l_344[2];
        const struct S1 l_359[4] = {{118,50},{118,50},{118,50},{118,50}};
        int i, j;
        for (g_262 = (-22); (g_262 <= (-10)); ++g_262)
        { 
            uint16_t *l_337 = &g_114;
            int32_t l_345[6][3] = {{0x9FB8D8D9L,0xADBC7CBFL,0x9FB8D8D9L},{0x9FB8D8D9L,0xF09860C6L,0xA2032699L},{0x9FB8D8D9L,0x04060ED0L,0xC7DB9B2CL},{0x9FB8D8D9L,0xADBC7CBFL,0x9FB8D8D9L},{0x9FB8D8D9L,0xF09860C6L,0xA2032699L},{0x9FB8D8D9L,0x04060ED0L,0xC7DB9B2CL}};
            int32_t *l_347 = &g_52;
            int i, j;
            if ((safe_rshift_func_int16_t_s_u((g_239 & ((((safe_rshift_func_uint8_t_u_s((((*l_347) |= (((safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((p_10 ^ g_57[0][0]) < p_10), 14)) == ((safe_unary_minus_func_uint32_t_u((((++(*l_337)) && (((0x669BL <= (safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(0x36L, (((l_344[2] , p_9) , l_345[5][0]) >= 0xF5L))) && l_344[3]) <= 0x6F27L), l_345[0][0]))) < p_10) >= 8L)) >= g_146))) & l_346)), l_344[3])), 4)) && p_10) ^ 65529UL)) , 0x3CL), l_344[2])) , p_9) && p_10) < p_10)), p_10)))
            { 
                int32_t **l_349 = (void*)0;
                int32_t **l_350 = (void*)0;
                int32_t **l_351[4] = {&l_348,&l_348,&l_348,&l_348};
                uint32_t l_353 = 18446744073709551611UL;
                int i;
                if (p_9)
                    break;
                g_53 = l_348;
                --l_353;
            }
            else
            { 
                if (p_9)
                    break;
            }
        }
        (*l_358) = ((safe_add_func_int64_t_s_s(g_245, g_262)) > 1UL);
        return l_359[3];
    }
    (*g_53) = l_344[2];
    for (g_239 = 0; (g_239 <= 3); g_239 += 1)
    { 
        int32_t *l_360 = &l_344[g_239];
        int32_t *l_361 = &g_52;
        int32_t *l_362 = (void*)0;
        int32_t *l_363[2];
        int64_t l_368 = 0xDA6E78CDC0A4ABB3LL;
        struct S0 l_385 = {-249};
        struct S1 *l_401 = (void*)0;
        int8_t *l_490 = &g_364;
        int8_t **l_489[7] = {&l_490,&l_490,&l_490,&l_490,&l_490,&l_490,&l_490};
        uint16_t **l_509[6];
        int32_t **l_514 = &l_362;
        int64_t *l_675 = &g_398[5];
        struct S1 *l_718 = &g_38;
        int i;
        for (i = 0; i < 2; i++)
            l_363[i] = (void*)0;
        for (i = 0; i < 6; i++)
            l_509[i] = &g_458;
        g_372[2][0]++;
        for (g_75 = 0; (g_75 <= 3); g_75 += 1)
        { 
            struct S0 l_375 = {225};
            struct S0 l_376 = {-178};
            uint64_t l_414 = 18446744073709551614UL;
            int64_t *l_415 = &l_368;
            int32_t l_418[7] = {0x3E4586CEL,0x3E4586CEL,0x3E4586CEL,0x3E4586CEL,0x3E4586CEL,0x3E4586CEL,0x3E4586CEL};
            uint32_t l_419 = 0x167A158CL;
            struct S1 l_442 = {-253,197};
            union U3 *l_453[6][1][7] = {{{(void*)0,&g_454,&g_454,&g_454,(void*)0,&g_454,&g_454}},{{(void*)0,(void*)0,&g_454,&g_454,(void*)0,&g_454,&g_454}},{{&g_454,(void*)0,&g_454,(void*)0,&g_454,&g_454,&g_454}},{{(void*)0,(void*)0,&g_454,(void*)0,(void*)0,(void*)0,&g_454}},{{&g_454,&g_454,&g_454,&g_454,(void*)0,&g_454,&g_454}},{{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454}}};
            int8_t *l_460 = &g_266[0][0];
            int8_t ** const l_459 = &l_460;
            int32_t *l_476[5][3][2] = {{{&g_370,&g_370},{&g_370,&g_370},{&g_370,&g_370}},{{&g_370,&g_370},{&g_370,&g_370},{&g_370,&g_370}},{{&g_370,&g_370},{&g_370,&g_370},{&g_370,&g_370}},{{&g_370,&g_370},{&g_370,&g_370},{&g_370,&g_370}},{{&g_370,&g_370},{&g_370,&g_370},{&g_370,&g_370}}};
            uint64_t l_503 = 0UL;
            int i, j, k;
            l_344[3] &= 0xBA9A0C4DL;
        }
        (*l_514) = &l_344[3];
    }
    for (g_371 = 0; (g_371 == 16); g_371++)
    { 
        int32_t **l_775 = &l_400[0][4];
        int8_t *l_794[4][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
        uint32_t *l_796 = &g_229;
        uint32_t l_797 = 0xF9413D98L;
        uint8_t *l_798[4][4] = {{&g_483,&g_372[2][0],&g_483,(void*)0},{&g_483,&g_382[3][2][0],(void*)0,(void*)0},{&g_372[2][0],&g_372[2][0],&g_372[3][0],&g_382[3][2][0]},{&g_382[3][2][0],&g_483,&g_372[3][0],&g_483}};
        int8_t l_805 = 0x5CL;
        struct S2 *l_807 = (void*)0;
        int32_t l_809 = (-1L);
        int i, j, k;
        (*l_775) = (void*)0;
        if ((safe_add_func_int16_t_s_s(p_9, (g_269[2] != (safe_rshift_func_uint8_t_u_s((g_382[0][0][0] |= (safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((18446744073709551615UL < p_10) && ((safe_lshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(p_9, (safe_lshift_func_int8_t_s_s((l_795 &= p_9), 6)))) || ((*l_796) = p_9)), 5L)), 14)) != 0x7AB2030565A50B2DLL)), 2)), (*g_458))) && l_797), 3))), p_10))))))
        { 
            int8_t l_804[7] = {0x7DL,0xF5L,0x7DL,0x7DL,0xF5L,0x7DL,0x7DL};
            struct S2 **l_806 = &l_705;
            int i;
            l_807 = ((((void*)0 == l_798[2][1]) | g_367) , ((*l_806) = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((+l_804[6]) , p_10), 2)), (((g_114 , ((*l_316) ^= ((l_805 = p_10) , 0x51C2L))) == 0x25E4L) && p_10))) , &l_386)));
            (*g_53) ^= (&l_386 == l_808);
        }
        else
        { 
            if (g_114)
                goto lbl_486;
            if ((*g_53))
                continue;
            (**g_563) = (*l_402);
        }
        l_809 |= l_797;
    }
    return (**l_564);
}



static int32_t  func_11(int16_t  p_12, struct S2  p_13, const int64_t  p_14, struct S0  p_15)
{ 
    for (g_112 = 0; (g_112 < 15); g_112 = safe_add_func_uint64_t_u_u(g_112, 1))
    { 
        struct S2 * const *l_312 = (void*)0;
        l_312 = l_312;
        return g_239;
    }
    return p_14;
}



static int16_t  func_16(int32_t  p_17, struct S1  p_18)
{ 
    int32_t l_100 = 0x29B6EDA7L;
    int32_t **l_102 = &g_53;
    const int32_t l_143[3][4][3] = {{{0xAAC53A07L,0xAAC53A07L,0xA8C7178FL},{0x48A9CFEDL,7L,0x48A9CFEDL},{0xAAC53A07L,0xE08A2E4BL,0xE08A2E4BL},{(-8L),7L,0x43A31542L}},{{0x41299D89L,0xAAC53A07L,0xE08A2E4BL},{0x48A9CFEDL,0x1ADD9D0CL,0x48A9CFEDL},{0x41299D89L,0xE08A2E4BL,0xA8C7178FL},{(-8L),0x1ADD9D0CL,0x43A31542L}},{{0xAAC53A07L,0xAAC53A07L,0xA8C7178FL},{0x48A9CFEDL,7L,0x48A9CFEDL},{0xAAC53A07L,0xE08A2E4BL,0xE08A2E4BL},{(-8L),7L,0x43A31542L}}};
    uint16_t l_176 = 5UL;
    int64_t l_236[5][3][6] = {{{0x4B3AAB27D90806ADLL,0x4B3AAB27D90806ADLL,0x92E1E26954D5C3D9LL,0x2F5CE17B3754A37DLL,0x4B3AAB27D90806ADLL,0x71088D65414BF27CLL},{0x4B3AAB27D90806ADLL,0x2F5CE17B3754A37DLL,0x92E1E26954D5C3D9LL,0x4B3AAB27D90806ADLL,0x4B3AAB27D90806ADLL,0x92E1E26954D5C3D9LL},{0x4B3AAB27D90806ADLL,0x4B3AAB27D90806ADLL,0x92E1E26954D5C3D9LL,0x2F5CE17B3754A37DLL,0x4B3AAB27D90806ADLL,0x71088D65414BF27CLL}},{{0x4B3AAB27D90806ADLL,0x2F5CE17B3754A37DLL,0x92E1E26954D5C3D9LL,0x4B3AAB27D90806ADLL,0x4B3AAB27D90806ADLL,0x92E1E26954D5C3D9LL},{0x4B3AAB27D90806ADLL,0x4B3AAB27D90806ADLL,0x92E1E26954D5C3D9LL,0x2F5CE17B3754A37DLL,0x4B3AAB27D90806ADLL,0x71088D65414BF27CLL},{0x4B3AAB27D90806ADLL,0x2F5CE17B3754A37DLL,0x92E1E26954D5C3D9LL,0x4B3AAB27D90806ADLL,0x4B3AAB27D90806ADLL,0x92E1E26954D5C3D9LL}},{{0x4B3AAB27D90806ADLL,0x4B3AAB27D90806ADLL,0x92E1E26954D5C3D9LL,0x2F5CE17B3754A37DLL,0x4B3AAB27D90806ADLL,0x71088D65414BF27CLL},{0x4B3AAB27D90806ADLL,0x2F5CE17B3754A37DLL,0x92E1E26954D5C3D9LL,0x4B3AAB27D90806ADLL,0x4B3AAB27D90806ADLL,0x92E1E26954D5C3D9LL},{0x4B3AAB27D90806ADLL,0x4B3AAB27D90806ADLL,0x92E1E26954D5C3D9LL,0x2F5CE17B3754A37DLL,0L,0x4B3AAB27D90806ADLL}},{{0L,0x3F382317CB7726CCLL,0x2F5CE17B3754A37DLL,0L,0L,0x2F5CE17B3754A37DLL},{0L,0L,0x2F5CE17B3754A37DLL,0x3F382317CB7726CCLL,0L,0x4B3AAB27D90806ADLL},{0L,0x3F382317CB7726CCLL,0x2F5CE17B3754A37DLL,0L,0L,0x2F5CE17B3754A37DLL}},{{0L,0L,0x2F5CE17B3754A37DLL,0x3F382317CB7726CCLL,0L,0x4B3AAB27D90806ADLL},{0L,0x3F382317CB7726CCLL,0x2F5CE17B3754A37DLL,0L,0L,0x2F5CE17B3754A37DLL},{0L,0L,0x2F5CE17B3754A37DLL,0x3F382317CB7726CCLL,0L,0x4B3AAB27D90806ADLL}}};
    uint16_t l_289 = 0x3195L;
    const int32_t *l_307[5] = {&g_52,&g_52,&g_52,&g_52,&g_52};
    const int32_t **l_308 = &l_307[0];
    int i, j, k;
lbl_290:
    for (g_75 = 0; (g_75 == 21); g_75 = safe_add_func_uint32_t_u_u(g_75, 6))
    { 
        int32_t **l_81 = &g_53;
        (*l_81) = &p_17;
    }
    for (p_17 = (-26); (p_17 <= 5); p_17 = safe_add_func_int8_t_s_s(p_17, 5))
    { 
        const int16_t l_101 = 0x2746L;
        int64_t l_138 = 0x1CD28735F4C61C4CLL;
        uint16_t *l_147 = &g_114;
        const int32_t *l_175 = &g_52;
        const int32_t **l_174 = &l_175;
        int32_t l_177 = (-1L);
        int16_t l_218 = 1L;
        int32_t l_237 = (-4L);
        int32_t l_238[2][7][4] = {{{(-1L),(-6L),(-1L),(-1L)},{(-6L),(-6L),0x90561951L,(-6L)},{(-6L),(-1L),(-1L),(-6L)},{(-1L),(-6L),(-1L),(-1L)},{(-6L),(-6L),0x90561951L,(-6L)},{(-6L),(-1L),(-1L),(-6L)},{(-1L),(-6L),(-1L),(-1L)}},{{(-6L),(-6L),0x90561951L,(-6L)},{(-6L),(-1L),(-1L),(-6L)},{(-1L),(-6L),(-1L),(-1L)},{(-6L),(-6L),0x90561951L,(-6L)},{(-6L),(-1L),(-1L),(-6L)},{(-1L),(-6L),(-1L),(-1L)},{(-6L),(-6L),0x90561951L,(-6L)}}};
        struct S1 *** const l_303 = (void*)0;
        struct S1 ***l_305[2][6][4] = {{{&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277}},{{&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277}}};
        struct S1 ****l_304[7] = {&l_305[0][3][2],&l_305[0][3][2],&l_305[0][3][2],&l_305[0][3][2],&l_305[0][3][2],&l_305[0][3][2],&l_305[0][3][2]};
        struct S1 ****l_306 = &l_305[0][3][2];
        int i, j, k;
        for (g_75 = 0; (g_75 <= 1); g_75 += 1)
        { 
            uint16_t l_103 = 1UL;
            int32_t *l_104 = &g_52;
            p_18.f0 = (0x115EL & (p_18.f0 > ((*l_104) = (p_18.f1 <= ((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((((safe_div_func_int64_t_s_s((((((&g_57[1][0] != (void*)0) , (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((0xBC34589AA37C3AC0LL <= (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(l_100, g_52)), g_7))), l_101)), g_57[3][0]))) , l_102) != &g_53) ^ (-9L)), g_52)) & (-1L)) > l_103), g_52)) ^ p_18.f1), p_17)), p_18.f0)) || p_17)))));
        }
        for (g_75 = 0; (g_75 < 37); g_75 = safe_add_func_int64_t_s_s(g_75, 4))
        { 
            int32_t *l_107 = &g_52;
            int32_t *l_108 = (void*)0;
            int32_t *l_109 = &g_52;
            int32_t *l_110 = &g_52;
            int32_t *l_111 = &g_52;
            int32_t *l_113 = &g_52;
            uint64_t *l_123 = (void*)0;
            uint64_t *l_124[7][3][6] = {{{&g_125[2],&g_125[0],&g_125[0],&g_125[2],&g_125[1],&g_125[2]},{&g_125[1],(void*)0,&g_7,&g_125[2],&g_125[2],&g_7},{&g_7,&g_125[1],&g_7,&g_125[2],&g_125[2],&g_125[2]}},{{(void*)0,(void*)0,(void*)0,&g_125[1],&g_125[1],&g_125[1]},{&g_125[2],&g_125[0],(void*)0,&g_7,&g_125[1],&g_125[1]},{&g_125[2],&g_125[2],&g_125[1],&g_7,&g_7,&g_125[1]}},{{&g_125[2],&g_7,&g_125[2],(void*)0,(void*)0,&g_125[1]},{&g_125[1],&g_125[2],&g_7,&g_125[1],&g_7,&g_125[2]},{&g_125[2],&g_125[1],&g_7,&g_125[2],&g_7,&g_125[1]}},{{&g_125[1],&g_125[2],&g_125[2],&g_125[1],&g_125[0],(void*)0},{&g_125[1],&g_125[0],(void*)0,&g_7,&g_7,(void*)0},{&g_125[2],&g_125[0],(void*)0,(void*)0,&g_125[0],&g_125[2]}},{{&g_125[0],&g_125[2],&g_125[1],&g_125[2],&g_7,&g_125[1]},{(void*)0,&g_125[1],&g_7,&g_125[2],&g_7,(void*)0},{(void*)0,&g_125[2],&g_125[2],&g_125[2],(void*)0,&g_7}},{{&g_125[0],&g_7,&g_7,(void*)0,(void*)0,&g_125[1]},{&g_125[2],&g_125[1],(void*)0,&g_7,&g_125[1],&g_125[1]},{&g_125[1],&g_7,&g_7,&g_125[1],(void*)0,&g_7}},{{&g_125[1],&g_125[2],&g_125[2],&g_125[2],&g_125[2],(void*)0},{&g_125[2],&g_125[2],&g_7,&g_125[1],&g_125[2],&g_125[1]},{&g_125[1],&g_125[2],&g_125[1],(void*)0,(void*)0,&g_125[2]}}};
            uint16_t *l_126 = (void*)0;
            int64_t *l_127[7][7] = {{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,(void*)0},{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,(void*)0,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,(void*)0},{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,(void*)0,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,(void*)0}};
            uint16_t *l_132[4] = {&g_75,&g_75,&g_75,&g_75};
            const int8_t *l_145 = &g_146;
            const int8_t **l_144 = &l_145;
            uint8_t *l_148 = (void*)0;
            uint8_t *l_149 = &g_150;
            uint32_t l_214 = 0x9C7574EAL;
            uint16_t l_216 = 0xB7C9L;
            int32_t l_263 = 1L;
            int32_t l_268 = 0x36FB5A73L;
            struct S1 *l_275 = &g_38;
            struct S1 **l_274 = &l_275;
            int i, j, k;
            g_114--;
            (*l_111) = (g_75 != (safe_lshift_func_uint16_t_u_s((((g_112 = (0xA189L > (g_114 = (!(g_125[2] = (+(safe_mul_func_uint8_t_u_u(((void*)0 != &g_52), 0x31L)))))))) != (safe_lshift_func_int16_t_s_s(((((safe_div_func_uint16_t_u_u(((((g_133 = g_45.f0) > g_75) >= l_101) <= p_17), g_45.f0)) >= p_18.f0) & p_18.f1) & p_18.f0), p_18.f1))) != 65526UL), g_75)));
            if ((safe_mod_func_uint8_t_u_u(((*l_149) ^= ((-1L) & ((*l_107) = (safe_mod_func_int16_t_s_s(((g_133 , 0xC325D181L) & l_138), (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(l_143[1][2][1], 15)), (((((0x6C5F39321C95261ALL && ((((*l_144) = (void*)0) != (void*)0) > 18446744073709551614UL)) , 0x5DA9DFCAL) , 0x79135E92L) , (void*)0) != l_147)))))))), p_17)))
            { 
                uint16_t * const l_172 = &g_75;
                int32_t l_173 = 0x156C3613L;
                int8_t *l_178 = &g_57[0][0];
                uint8_t l_215 = 255UL;
                l_177 ^= (~((1UL > (&g_133 == (void*)0)) != (+(p_18.f0 ^ (((safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((g_133 || 7L), (safe_unary_minus_func_int32_t_s((safe_div_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((~((!(safe_div_func_uint64_t_u_u(((l_173 = ((void*)0 == l_172)) < 4L), 0x795A9035C06EB02BLL))) | l_100)) >= p_18.f0), p_18.f1)) == g_52), g_38.f0)))))), g_52)) ^ 0x7B95B8FDA41C3341LL) , l_174) == (void*)0), 1L)), (*l_111))) , g_150) && l_176)))));
                if (((((*l_178) = 0xA6L) < g_52) >= ((((*l_149) = 253UL) || ((((!(safe_rshift_func_uint8_t_u_s(g_125[2], 7))) || p_18.f1) & ((safe_lshift_func_uint16_t_u_s((*l_175), 1)) , (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_int64_t_s((safe_sub_func_int64_t_s_s((-8L), g_112)))) | 0x9BL), g_114)))) , g_125[2])) , p_18.f0)))
                { 
                    int32_t *l_217[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_217[i] = &l_173;
                    l_177 ^= ((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0xD095L, ((*l_110) | (safe_rshift_func_int8_t_s_u(((*l_178) = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((**l_174) < (p_18.f1 <= ((p_18.f0 >= ((safe_mul_func_uint16_t_u_u((++(*l_147)), (safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((~(((((safe_mod_func_int32_t_s_s(((void*)0 == &l_111), l_214)) & 4294967291UL) && l_215) & 0x2CF5B4EFL) | l_215)), 0x4F90L)), g_125[4])))) || l_216)) == p_18.f0))), p_18.f0)), 1L)), (*l_109))), l_173))), p_18.f0))))), g_112)) || (*l_110));
                    g_38.f0 &= (*l_111);
                    if (l_218)
                        break;
                    return l_173;
                }
                else
                { 
                    uint16_t **l_227 = &l_132[2];
                    uint32_t *l_228 = &g_229;
                    struct S1 **l_230 = (void*)0;
                    struct S1 *l_232 = &g_38;
                    struct S1 **l_231 = &l_232;
                    if ((*l_175))
                        break;
                    (*l_107) ^= ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint64_t_u(((safe_mul_func_uint16_t_u_u(g_112, (((*l_228) = ((&g_53 == (g_226 = &g_53)) | (((*l_227) = &g_114) == (void*)0))) & (-8L)))) > p_18.f0))) > p_18.f1), p_18.f0)) , l_215), 6)) && p_18.f1);
                    (*l_231) = &p_18;
                }
                (*l_102) = &l_173;
                for (l_218 = 6; (l_218 < 21); ++l_218)
                { 
                    int32_t *l_235[4][7][1] = {{{&g_52},{&g_52},{&g_52},{&g_52},{&g_52},{&g_52},{&g_52}},{{&g_52},{&g_52},{&g_52},{&g_52},{&g_52},{&g_52},{&g_52}},{{&g_52},{&g_52},{&g_52},{&g_52},{&g_52},{&g_52},{&g_52}},{{&g_52},{&g_52},{&g_52},{&g_52},{&g_52},{&g_52},{&g_52}}};
                    struct S2 *l_243 = &g_45;
                    struct S2 **l_242 = &l_243;
                    int i, j, k;
                    g_239--;
                    if (p_18.f0)
                        continue;
                    (*l_242) = &g_45;
                }
                (*l_111) |= p_18.f1;
            }
            else
            { 
                int8_t l_244 = 0x73L;
                int32_t l_250 = 1L;
                uint32_t *l_255 = (void*)0;
                uint32_t *l_256 = &g_229;
                --g_245;
                (*l_113) = p_17;
                (*l_111) = ((safe_sub_func_int8_t_s_s(((l_250 || ((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(0x89DCL, ((p_18 , g_114) || (((*l_256) = (*l_113)) >= p_18.f1)))), 14)) | ((((safe_add_func_uint8_t_u_u(7UL, 1UL)) && (*l_111)) > 0xDC1B115D80643096LL) && 0xB0E3L))) != p_17), 0x1FL)) && p_17);
            }
            for (l_176 = 0; (l_176 >= 8); l_176 = safe_add_func_uint32_t_u_u(l_176, 2))
            { 
                int32_t *l_261[3][6][5] = {{{&l_238[1][0][0],&l_238[1][1][1],&l_237,&l_237,&l_237},{(void*)0,(void*)0,&l_238[1][1][1],(void*)0,&g_52},{&l_238[1][0][0],&g_52,&l_237,(void*)0,(void*)0},{(void*)0,&l_237,(void*)0,&l_237,&l_238[1][1][3]},{&l_237,&l_237,&l_237,&l_238[1][1][1],&g_52},{(void*)0,&l_237,&l_237,(void*)0,&l_238[1][0][0]}},{{&l_237,(void*)0,&l_237,&g_52,&l_237},{&l_237,&l_237,&l_238[1][0][0],&l_237,&l_237},{(void*)0,&l_238[1][1][1],(void*)0,&g_52,&l_237},{(void*)0,&l_238[1][1][1],(void*)0,(void*)0,&l_238[1][1][1]},{&l_238[1][0][0],&l_237,&l_237,&l_238[1][1][1],&l_237},{&l_237,(void*)0,&l_237,&l_238[1][0][0],&l_237}},{{&l_237,&l_237,(void*)0,&l_238[1][0][0],&l_237},{&l_237,&l_237,(void*)0,&l_238[1][0][0],&l_238[1][0][0]},{&l_238[1][0][0],&l_238[1][1][3],&l_238[1][0][0],&l_238[1][0][0],&g_52},{(void*)0,&l_237,&l_237,&l_238[1][1][1],&g_52},{(void*)0,&l_237,&l_237,(void*)0,&l_238[1][0][0]},{&l_237,(void*)0,&l_237,&g_52,&l_237}}};
                int32_t l_267 = (-2L);
                struct S1 ***l_276[1][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_276[i][j] = (void*)0;
                }
                g_269[2]--;
                for (g_245 = 0; g_245 < 2; g_245 += 1)
                {
                    for (g_114 = 0; g_114 < 1; g_114 += 1)
                    {
                        g_266[g_245][g_114] = 0x46L;
                    }
                }
                g_38.f0 ^= (((g_277 = l_274) == (void*)0) > ((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(((*l_149) = ((safe_rshift_func_uint16_t_u_u(p_18.f1, 5)) && (safe_div_func_int16_t_s_s((p_18.f1 | (1UL == ((*l_175) | ((safe_mod_func_int8_t_s_s((0x4AD4DC78L ^ 4294967294UL), p_18.f1)) && 0xFD33L)))), g_45.f0)))), l_289)) , g_265) & g_38.f1), p_18.f1)) != p_17));
                for (g_52 = 4; (g_52 >= 0); g_52 -= 1)
                { 
                    int i;
                    return g_125[g_52];
                }
                if (g_38.f0)
                    goto lbl_290;
            }
            for (g_262 = 0; (g_262 == 12); g_262 = safe_add_func_uint16_t_u_u(g_262, 8))
            { 
                int8_t * const l_297 = &g_57[0][0];
                int8_t * const *l_296[6] = {&l_297,&l_297,&l_297,&l_297,&l_297,&l_297};
                int32_t l_302 = 0x9613DEACL;
                int i;
                (*l_109) = (((-9L) | (safe_sub_func_uint16_t_u_u(((g_295 , l_296[4]) == &l_297), (g_239 || (4294967295UL || (p_18.f1 = (safe_div_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(l_302, (*l_107))) == p_18.f1), p_17)))))))) && p_18.f0);
                return l_302;
            }
        }
        (*l_306) = l_303;
        return p_17;
    }
    (*l_308) = l_307[3];
    return g_245;
}



static struct S2  func_19(const int8_t  p_20, const uint16_t  p_21)
{ 
    struct S2 l_78 = {13314};
    return l_78;
}



static struct S2  func_22(int8_t  p_23, struct S1  p_24, int32_t  p_25, struct S2  p_26, struct S1  p_27)
{ 
    int32_t *l_62 = (void*)0;
    int32_t *l_63 = &g_52;
    int32_t *l_64 = (void*)0;
    int32_t *l_65 = &g_52;
    int32_t *l_66 = &g_52;
    int32_t *l_67 = &g_52;
    int32_t *l_68 = (void*)0;
    int32_t *l_69 = (void*)0;
    int32_t *l_70 = &g_52;
    int32_t *l_71 = (void*)0;
    int32_t *l_72 = (void*)0;
    int32_t *l_73 = &g_52;
    int32_t *l_74[6] = {&g_52,(void*)0,&g_52,&g_52,(void*)0,&g_52};
    int i;
    for (g_52 = (-12); (g_52 >= (-25)); g_52 = safe_sub_func_uint8_t_u_u(g_52, 8))
    { 
        struct S2 l_61 = {3172};
        return l_61;
    }
    ++g_75;
    return g_45;
}



static int16_t  func_30(const int32_t  p_31, uint64_t  p_32, const uint16_t  p_33, uint32_t  p_34)
{ 
    struct S2 *l_46 = (void*)0;
    struct S2 *l_47 = &g_45;
    int32_t *l_54 = &g_52;
    int32_t **l_55 = &l_54;
    (*l_47) = g_45;
    for (p_34 = 6; (p_34 != 32); p_34 = safe_add_func_uint8_t_u_u(p_34, 1))
    { 
        int32_t *l_51 = &g_52;
        int32_t **l_50[6][7] = {{&l_51,(void*)0,&l_51,&l_51,(void*)0,&l_51,(void*)0},{(void*)0,&l_51,&l_51,&l_51,&l_51,&l_51,&l_51},{(void*)0,(void*)0,&l_51,(void*)0,&l_51,&l_51,(void*)0},{&l_51,&l_51,&l_51,&l_51,&l_51,(void*)0,(void*)0},{&l_51,(void*)0,&l_51,(void*)0,&l_51,&l_51,&l_51},{&l_51,(void*)0,&l_51,&l_51,&l_51,(void*)0,&l_51}};
        int i, j;
        g_53 = (void*)0;
        (*l_51) = (*l_51);
    }
    (*l_47) = g_45;
    (*l_55) = l_54;
    return p_32;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_57[i][j], "g_57[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_125[i], "g_125[i]", print_hash_value);

    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_264[i], "g_264[i]", print_hash_value);

    }
    transparent_crc(g_265, "g_265", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_266[i][j], "g_266[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_269[i], "g_269[i]", print_hash_value);

    }
    transparent_crc(g_295.f0, "g_295.f0", print_hash_value);
    transparent_crc(g_309.f0, "g_309.f0", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_365[i], "g_365[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_366[i][j], "g_366[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_372[i][j], "g_372[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_381, "g_381", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_382[i][j][k], "g_382[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_398[i], "g_398[i]", print_hash_value);

    }
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_454.f0, "g_454.f0", print_hash_value);
    transparent_crc(g_454.f1, "g_454.f1", print_hash_value);
    transparent_crc(g_454.f2, "g_454.f2", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_707.f0, "g_707.f0", print_hash_value);
    transparent_crc(g_707.f1, "g_707.f1", print_hash_value);
    transparent_crc(g_707.f2, "g_707.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_727[i][j], "g_727[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_838, "g_838", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1041, "g_1041", print_hash_value);
    transparent_crc(g_1049, "g_1049", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
