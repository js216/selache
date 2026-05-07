// SPDX-License-Identifier: MIT
// cctest_csmith_9350e486.c --- cctest case csmith_9350e486 (csmith seed 2471552134)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9d404732 */

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

// Options:   -s 2471552134 -o /tmp/csmith_gen_8_787lty/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 17;
   signed f1 : 2;
   signed f2 : 28;
   signed f3 : 24;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
};

struct S2 {
   const uint32_t  f0;
   uint32_t  f1;
   unsigned f2 : 29;
   uint16_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   uint8_t  f0;
   struct S1  f1;
   uint8_t  f2;
   int32_t  f3;
   int64_t  f4;
   int8_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S4 {
   int64_t  f0;
   uint32_t  f1;
   int16_t  f2;
   int32_t  f3;
   const struct S0  f4;
   const uint8_t  f5;
   struct S2  f6;
   struct S1  f7;
};
#pragma pack(pop)

union U5 {
   int8_t * f0;
};


static int8_t g_20[7] = {0xA7L,(-1L),0xA7L,0xA7L,(-1L),0xA7L,0xA7L};
static int32_t g_49[4] = {0x6C146DF8L,0x6C146DF8L,0x6C146DF8L,0x6C146DF8L};
static uint64_t g_50 = 1UL;
static uint32_t g_62 = 0x4E288A3DL;
static int32_t *g_69 = &g_49[0];
static int32_t * const *g_68 = &g_69;
static int8_t *g_74[6][7][6] = {{{&g_20[5],&g_20[5],&g_20[5],&g_20[5],(void*)0,(void*)0},{&g_20[5],(void*)0,&g_20[2],(void*)0,(void*)0,(void*)0},{&g_20[5],&g_20[1],&g_20[5],&g_20[1],&g_20[5],&g_20[4]},{&g_20[6],&g_20[5],&g_20[2],&g_20[5],&g_20[6],&g_20[5]},{&g_20[1],&g_20[5],&g_20[5],&g_20[5],&g_20[5],&g_20[6]},{(void*)0,(void*)0,&g_20[5],&g_20[1],&g_20[0],&g_20[5]},{&g_20[5],(void*)0,&g_20[5],(void*)0,&g_20[0],&g_20[2]}},{{(void*)0,&g_20[1],&g_20[5],&g_20[1],(void*)0,&g_20[5]},{&g_20[6],&g_20[5],(void*)0,&g_20[5],&g_20[5],&g_20[3]},{(void*)0,&g_20[5],&g_20[5],&g_20[5],&g_20[0],&g_20[3]},{&g_20[3],&g_20[5],(void*)0,&g_20[1],&g_20[6],&g_20[5]},{&g_20[0],&g_20[4],&g_20[5],&g_20[5],&g_20[0],&g_20[2]},{&g_20[6],&g_20[5],&g_20[5],&g_20[5],&g_20[4],&g_20[5]},{&g_20[2],(void*)0,&g_20[5],&g_20[4],&g_20[6],(void*)0}},{{&g_20[5],&g_20[5],&g_20[1],&g_20[6],&g_20[5],&g_20[2]},{&g_20[5],&g_20[5],&g_20[6],&g_20[5],&g_20[5],&g_20[5]},{&g_20[5],&g_20[5],&g_20[5],&g_20[5],&g_20[5],&g_20[5]},{&g_20[5],&g_20[5],&g_20[5],&g_20[5],&g_20[1],&g_20[2]},{&g_20[0],&g_20[0],&g_20[5],&g_20[5],&g_20[5],&g_20[5]},{&g_20[5],(void*)0,&g_20[4],&g_20[5],&g_20[5],&g_20[0]},{&g_20[5],&g_20[0],&g_20[2],&g_20[5],&g_20[1],(void*)0}},{{&g_20[6],&g_20[5],&g_20[5],&g_20[5],&g_20[5],&g_20[6]},{&g_20[5],&g_20[5],&g_20[5],&g_20[0],&g_20[5],(void*)0},{&g_20[0],&g_20[5],&g_20[6],&g_20[5],&g_20[5],&g_20[4]},{&g_20[5],&g_20[5],&g_20[5],&g_20[1],&g_20[6],&g_20[6]},{&g_20[4],(void*)0,&g_20[0],&g_20[5],&g_20[4],&g_20[5]},{&g_20[5],&g_20[5],&g_20[6],&g_20[5],&g_20[0],&g_20[5]},{&g_20[5],&g_20[4],&g_20[5],&g_20[0],&g_20[6],&g_20[0]}},{{&g_20[5],&g_20[5],&g_20[5],(void*)0,&g_20[0],&g_20[3]},{&g_20[1],&g_20[5],(void*)0,(void*)0,&g_20[5],&g_20[0]},{&g_20[5],&g_20[5],&g_20[0],&g_20[0],(void*)0,&g_20[5]},{&g_20[5],&g_20[1],(void*)0,&g_20[5],&g_20[0],&g_20[5]},{&g_20[5],(void*)0,&g_20[1],&g_20[5],&g_20[0],&g_20[6]},{&g_20[4],&g_20[0],&g_20[2],&g_20[1],(void*)0,&g_20[5]},{&g_20[5],&g_20[5],&g_20[5],&g_20[5],&g_20[1],&g_20[2]}},{{&g_20[0],&g_20[1],&g_20[1],&g_20[0],&g_20[5],&g_20[5]},{&g_20[5],&g_20[0],&g_20[1],&g_20[5],&g_20[5],&g_20[1]},{&g_20[6],&g_20[6],&g_20[5],&g_20[5],&g_20[5],&g_20[5]},{&g_20[1],&g_20[4],&g_20[5],&g_20[5],&g_20[5],&g_20[5]},{&g_20[5],&g_20[1],&g_20[5],&g_20[2],&g_20[5],&g_20[5]},{&g_20[0],&g_20[2],&g_20[5],&g_20[1],(void*)0,&g_20[0]},{&g_20[1],(void*)0,&g_20[0],&g_20[5],&g_20[2],&g_20[5]}}};
static uint16_t g_78[4] = {0x8F9EL,0x8F9EL,0x8F9EL,0x8F9EL};
static uint64_t g_120 = 0x1B1DC04404CF5884LL;
static const union U5 g_123[6][3][4] = {{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}}};
static uint32_t g_126 = 4294967295UL;
static struct S0 g_131 = {289,-1,14032,-1147};
static struct S3 g_145 = {0xC4L,{0L},7UL,0x66C56F7FL,0xADAB8F0384259954LL,1L};
static struct S2 g_182 = {0x3A2BF0E4L,0UL,18962,0x3C93L};
static uint8_t g_207 = 6UL;
static int16_t g_261 = 1L;
static struct S4 g_310 = {0x3594A9BF095E8D6ALL,18446744073709551610UL,1L,0x624F4D23L,{294,-0,-13295,-2072},255UL,{0x92085BA5L,4294967291UL,18805,0x2CBEL},{0xFDE9L}};
static struct S2 *g_316 = &g_182;
static struct S2 **g_315 = &g_316;
static uint16_t *g_340 = &g_182.f3;
static uint16_t *g_341 = &g_78[0];
static int16_t g_352 = 0x8876L;
static const uint64_t *g_357 = (void*)0;
static uint8_t *g_393[3][1] = {{&g_207},{&g_207},{&g_207}};
static uint8_t **g_392 = &g_393[2][0];
static uint8_t ***g_391 = &g_392;
static struct S4 *g_397 = &g_310;
static struct S4 **g_396[6][2] = {{&g_397,&g_397},{&g_397,&g_397},{&g_397,&g_397},{&g_397,&g_397},{&g_397,&g_397},{&g_397,&g_397}};
static int64_t g_412 = 0L;
static union U5 g_475[7] = {{0},{0},{0},{0},{0},{0},{0}};
static uint8_t g_535[3][6][4] = {{{255UL,0x00L,0x40L,8UL},{254UL,0x4BL,0UL,0UL},{254UL,254UL,0x40L,0xD8L},{255UL,0UL,254UL,0x00L},{0x4BL,5UL,1UL,254UL},{0x16L,5UL,0x16L,0x00L}},{{5UL,0UL,5UL,0xD8L},{0xD8L,254UL,0x4BL,0UL},{8UL,0x4BL,0x4BL,8UL},{0xD8L,0x00L,5UL,0x16L},{5UL,254UL,0x16L,0x40L},{0x16L,0x40L,1UL,0x40L}},{{0x4BL,254UL,254UL,0x16L},{255UL,0x00L,0x40L,8UL},{254UL,0x4BL,0UL,0UL},{254UL,254UL,0x40L,0xD8L},{255UL,0UL,0x40L,254UL},{8UL,0xD8L,255UL,0x40L}}};
static int64_t *g_608 = &g_145.f4;
static int8_t ** const g_622 = &g_74[5][3][2];
static int8_t ** const *g_621 = &g_622;
static struct S3 g_628 = {253UL,{0L},1UL,0xBF6497F4L,0xC5FBF71A7401E656LL,-10L};
static int64_t g_650[3][2][7] = {{{0x96C103EF2A7D3132LL,(-1L),0x3EE60A6DD175D1F5LL,(-1L),0x96C103EF2A7D3132LL,0xBB2DA47BFDAFFE1CLL,0xBB2DA47BFDAFFE1CLL},{(-6L),9L,0x181B79C7C8971479LL,9L,(-6L),(-4L),(-4L)}},{{0x96C103EF2A7D3132LL,(-1L),0x3EE60A6DD175D1F5LL,(-1L),0x96C103EF2A7D3132LL,0xBB2DA47BFDAFFE1CLL,0xBB2DA47BFDAFFE1CLL},{(-6L),9L,0x181B79C7C8971479LL,9L,(-6L),(-4L),(-4L)}},{{0x96C103EF2A7D3132LL,(-1L),0x3EE60A6DD175D1F5LL,(-1L),0x96C103EF2A7D3132LL,0xBB2DA47BFDAFFE1CLL,0xBB2DA47BFDAFFE1CLL},{(-6L),9L,0x181B79C7C8971479LL,9L,(-6L),(-4L),(-4L)}}};
static uint16_t g_662 = 0UL;
static union U5 *g_800 = &g_475[1];
static int64_t g_847 = 0x92422EB67A34E46ELL;
static struct S1 g_883 = {0x5D5AL};
static uint64_t *g_909 = &g_120;
static const union U5 *g_932 = (void*)0;
static const union U5 **g_931 = &g_932;
static const union U5 *** const g_930[1][4] = {{&g_931,&g_931,&g_931,&g_931}};
static struct S1 *g_967 = &g_628.f1;
static const struct S2 g_997 = {0x89EE385EL,0xD6858381L,8155,0xDED7L};
static const struct S2 *g_996 = &g_997;



static uint64_t  func_1(void);
static int32_t  func_3(int8_t * p_4);
static int8_t * func_5(int8_t * p_6, const struct S0  p_7, int8_t  p_8, const int64_t  p_9, int16_t  p_10);
static uint8_t  func_21(int32_t  p_22, struct S2  p_23);
static int16_t  func_28(struct S2  p_29, int8_t * p_30, int32_t  p_31);
static struct S2  func_32(int8_t * const  p_33, int8_t * p_34, int8_t * p_35);
static int8_t * func_39(union U5  p_40, int8_t * p_41, uint64_t  p_42);
static union U5  func_43(int8_t * p_44);




static uint64_t  func_1(void)
{ 
    int64_t l_2[1];
    int8_t *l_19 = &g_20[5];
    int16_t l_183 = 0x2983L;
    struct S2 l_199 = {0xDE058419L,0x61D516A5L,18203,0x7449L};
    uint16_t l_418 = 0xA909L;
    int32_t l_423 = 0x066F00F0L;
    int16_t l_439 = 0x7B04L;
    int32_t l_440 = (-3L);
    int32_t l_441 = (-1L);
    int32_t l_442 = 1L;
    int32_t l_443 = 7L;
    int32_t l_444[6][2] = {{1L,1L},{1L,0x33591FFCL},{0x53F21B29L,0x40F60B1DL},{0x33591FFCL,0x40F60B1DL},{0x53F21B29L,0x33591FFCL},{1L,1L}};
    uint64_t l_469 = 0x12432A7D44E34290LL;
    union U5 *l_474 = &g_475[1];
    uint32_t l_497 = 0xE4E6167CL;
    uint64_t l_557 = 0xACD14E7CB1233640LL;
    struct S0 l_581 = {6,-0,-1094,-2249};
    struct S1 l_586 = {0x3213L};
    int16_t l_588 = 0x6592L;
    const uint32_t l_601[3][5][2] = {{{9UL,4294967295UL},{0x6E6C2D0AL,1UL},{0UL,9UL},{0x7C7F6C2DL,0UL},{0UL,1UL}},{{0UL,0UL},{0x7C7F6C2DL,9UL},{0UL,1UL},{0x6E6C2D0AL,4294967295UL},{9UL,0xD2996618L}},{{0xD2996618L,0xD2996618L},{9UL,4294967295UL},{0x6E6C2D0AL,1UL},{0UL,9UL},{0x7C7F6C2DL,0UL}}};
    struct S0 *l_602 = &l_581;
    uint32_t l_605 = 0UL;
    struct S3 l_629 = {0x66L,{0x1666L},0x2FL,1L,8L,9L};
    uint32_t l_789 = 7UL;
    uint32_t l_807 = 0x46E79D12L;
    uint32_t *l_828 = &g_126;
    struct S4 **l_841 = &g_397;
    int16_t l_844 = 0xF7FEL;
    uint16_t *l_861 = &g_662;
    struct S0 l_864[7] = {{342,-0,-4586,-4075},{342,-0,-4586,-4075},{342,-0,-4586,-4075},{342,-0,-4586,-4075},{342,-0,-4586,-4075},{342,-0,-4586,-4075},{342,-0,-4586,-4075}};
    uint64_t l_882 = 0xA48EF15E2BC3DB5ALL;
    uint32_t l_915 = 4294967295UL;
    uint64_t * const l_925 = &l_882;
    struct S1 **l_981 = &g_967;
    int8_t l_999 = 0xD0L;
    uint32_t l_1003 = 0x32660AF1L;
    int64_t l_1037[1][1][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2[i] = 0xE34B64B5C6F8B8AELL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1037[i][j][k] = (-2L);
        }
    }
    if (l_2[0])
    { 
        int8_t l_38 = 6L;
        int8_t **l_166 = &g_74[2][1][1];
        int32_t l_203 = (-10L);
        uint8_t *l_204 = &g_145.f2;
        uint8_t *l_205 = (void*)0;
        uint8_t *l_206 = &g_207;
        const struct S0 l_208 = {37,0,8161,-3077};
        int8_t ***l_413 = &l_166;
        int32_t l_422 = 0x53A85B08L;
        int32_t l_437 = (-4L);
        int32_t l_438[3];
        struct S4 *l_504 = &g_310;
        int32_t *l_549[2];
        uint8_t l_550 = 255UL;
        int16_t *l_563 = &g_145.f1.f0;
        uint32_t l_593[3];
        struct S0 l_647[1] = {{297,1,-12737,3778}};
        int32_t l_651 = 0x97867AC3L;
        uint32_t l_661 = 0x4194FE9FL;
        uint16_t l_705 = 0x8743L;
        uint32_t l_726 = 0x55CBDE3BL;
        uint32_t l_735[1];
        union U5 **l_824 = &l_474;
        int i;
        for (i = 0; i < 3; i++)
            l_438[i] = 0x89BA3C34L;
        for (i = 0; i < 2; i++)
            l_549[i] = &l_438[2];
        for (i = 0; i < 3; i++)
            l_593[i] = 0x4F7EDE89L;
        for (i = 0; i < 1; i++)
            l_735[i] = 0x68F432BAL;
    }
    else
    { 
        int32_t l_953[5][6][2] = {{{(-1L),(-1L)},{0xC6FCFB65L,(-1L)},{(-1L),0xC6FCFB65L},{(-1L),(-1L)},{0xC6FCFB65L,(-1L)},{(-1L),0xC6FCFB65L}},{{(-1L),(-1L)},{0xC6FCFB65L,(-1L)},{(-1L),0xC6FCFB65L},{(-1L),(-1L)},{0xC6FCFB65L,(-1L)},{(-1L),0xC6FCFB65L}},{{(-1L),(-1L)},{0xC6FCFB65L,(-1L)},{(-1L),0xC6FCFB65L},{(-1L),(-1L)},{0xC6FCFB65L,(-1L)},{(-1L),0xC6FCFB65L}},{{(-1L),(-1L)},{0xC6FCFB65L,(-1L)},{(-1L),0xC6FCFB65L},{(-1L),(-1L)},{0xC6FCFB65L,(-1L)},{(-1L),0xC6FCFB65L}},{{(-1L),(-1L)},{0xC6FCFB65L,(-1L)},{(-1L),0xC6FCFB65L},{(-1L),(-1L)},{0xC6FCFB65L,(-1L)},{(-1L),0xC6FCFB65L}}};
        uint16_t l_958 = 0x24FAL;
        struct S4 *l_961 = &g_310;
        struct S1 l_1004 = {-3L};
        uint32_t l_1026 = 0x4C6C7B96L;
        int16_t l_1038 = 0x72BDL;
        int32_t **l_1043 = (void*)0;
        int32_t **l_1044 = &g_69;
        int i, j, k;
lbl_1031:
        for (l_629.f5 = 0; (l_629.f5 >= 0); l_629.f5 -= 1)
        { 
            uint64_t l_916 = 0xE621FD25ECB6E202LL;
            struct S1 *l_918 = &g_628.f1;
            struct S1 **l_917 = &l_918;
            uint16_t l_921[6][2] = {{0x02F3L,0x02F3L},{0UL,0x02F3L},{0x02F3L,0UL},{0x02F3L,0x02F3L},{0UL,0x02F3L},{0x02F3L,0UL}};
            int32_t l_943 = 0xF668A89CL;
            int32_t l_954 = 0x5BF487C0L;
            int32_t l_955 = 0x94C06916L;
            uint32_t l_995 = 7UL;
            struct S1 l_1005 = {-1L};
            int i, j;
        }
        for (g_261 = 0; (g_261 > 11); g_261 = safe_add_func_int16_t_s_s(g_261, 1))
        { 
            struct S3 *l_1008 = &l_629;
            int32_t l_1011 = 0x762A8263L;
            int32_t l_1012 = (-1L);
            int32_t l_1039[2][1][6] = {{{1L,1L,0x658B4D15L,1L,1L,0x658B4D15L}},{{1L,1L,0x658B4D15L,1L,1L,0x658B4D15L}}};
            int i, j, k;
            (*l_1008) = l_629;
            if ((((safe_rshift_func_int8_t_s_s(l_1011, 6)) < l_1012) > (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((~g_535[0][0][2]), ((0L & ((void*)0 == &g_261)) || (safe_add_func_uint16_t_u_u((((*l_602) , 0xFEL) <= l_1011), l_418))))), l_586.f0)), 2L))))
            { 
                int32_t *l_1024 = &g_310.f3;
                int32_t *l_1025[5][2];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1025[i][j] = &l_1012;
                }
                l_1026--;
                for (g_310.f2 = (-10); (g_310.f2 == 13); g_310.f2 = safe_add_func_int32_t_s_s(g_310.f2, 3))
                { 
                    if (l_629.f3)
                        goto lbl_1031;
                }
                return l_953[3][0][0];
            }
            else
            { 
                int32_t *l_1032 = &l_1012;
                int32_t *l_1033 = &l_1012;
                int32_t *l_1034 = &l_953[0][2][0];
                int32_t *l_1035 = &l_441;
                int32_t *l_1036[5][2][3] = {{{&l_953[3][0][0],&l_441,&l_953[3][0][0]},{&l_443,&l_441,&l_441}},{{&g_49[0],&l_441,&g_49[0]},{&l_443,&l_443,&l_441}},{{&l_953[3][0][0],&l_441,&l_953[3][0][0]},{&l_443,&l_441,&l_441}},{{&g_49[0],&l_441,&g_49[0]},{&l_443,&l_443,&l_441}},{{&l_953[3][0][0],&l_441,&l_953[3][0][0]},{&l_443,&l_441,&l_441}}};
                uint32_t l_1040 = 1UL;
                int i, j, k;
                l_1040--;
                return l_199.f2;
            }
        }
        (*l_1044) = &l_953[4][5][1];
    }
    return l_418;
}



static int32_t  func_3(int8_t * p_4)
{ 
    struct S1 l_400 = {0xFF30L};
    uint64_t *l_407[2][1][7] = {{{&g_50,&g_50,(void*)0,&g_50,&g_50,(void*)0,&g_50}},{{&g_120,(void*)0,(void*)0,&g_120,(void*)0,(void*)0,&g_120}}};
    int32_t l_408 = 0x396FE5B1L;
    struct S1 l_411[6] = {{1L},{1L},{1L},{1L},{1L},{1L}};
    int i, j, k;
    l_411[5] = (l_400 , ((0UL <= (l_400.f0 > (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((g_50 = (--g_120)) || g_261) && l_408), 1L)), (l_408 <= l_408))), 5)))) , l_400));
    return l_400.f0;
}



static int8_t * func_5(int8_t * p_6, const struct S0  p_7, int8_t  p_8, const int64_t  p_9, int16_t  p_10)
{ 
    uint8_t *l_210[5][6] = {{&g_145.f0,&g_207,&g_145.f0,&g_145.f0,&g_145.f0,&g_145.f0},{&g_207,&g_207,&g_145.f0,(void*)0,&g_145.f0,&g_207},{&g_145.f0,&g_207,(void*)0,(void*)0,&g_207,&g_145.f0},{&g_207,&g_145.f0,(void*)0,&g_145.f0,&g_207,&g_207},{&g_145.f0,&g_145.f0,&g_145.f0,&g_145.f0,&g_207,&g_145.f0}};
    uint8_t **l_209 = &l_210[3][4];
    uint8_t ***l_211 = (void*)0;
    uint8_t ***l_212 = &l_209;
    int32_t l_215[2][7];
    const int8_t *l_255[3][6] = {{&g_145.f5,&g_145.f5,&g_145.f5,&g_145.f5,&g_145.f5,&g_145.f5},{(void*)0,(void*)0,&g_145.f5,&g_20[5],&g_145.f5,(void*)0},{&g_145.f5,&g_145.f5,&g_20[5],&g_20[5],&g_145.f5,&g_145.f5}};
    const int8_t **l_254[7][2] = {{&l_255[0][5],&l_255[2][2]},{&l_255[2][2],&l_255[0][5]},{&l_255[2][2],&l_255[2][2]},{&l_255[0][5],&l_255[2][2]},{&l_255[2][2],&l_255[0][5]},{&l_255[2][2],&l_255[2][2]},{&l_255[0][5],&l_255[2][2]}};
    uint64_t l_271 = 18446744073709551611UL;
    struct S2 *l_284 = &g_182;
    uint32_t *l_293 = (void*)0;
    const int64_t *l_302 = &g_145.f4;
    struct S3 l_309 = {0x25L,{0x6C34L},0xFBL,-1L,0L,0L};
    uint8_t l_328 = 0xBDL;
    uint16_t *l_338 = &g_310.f6.f3;
    uint16_t **l_339[5][4][2] = {{{&l_338,&l_338},{&l_338,&l_338},{&l_338,&l_338},{&l_338,&l_338}},{{&l_338,&l_338},{&l_338,&l_338},{&l_338,&l_338},{&l_338,&l_338}},{{&l_338,&l_338},{&l_338,&l_338},{&l_338,&l_338},{&l_338,&l_338}},{{&l_338,&l_338},{&l_338,&l_338},{&l_338,&l_338},{&l_338,&l_338}},{{&l_338,&l_338},{&l_338,&l_338},{&l_338,&l_338},{&l_338,&l_338}}};
    struct S0 * const l_342 = &g_131;
    struct S2 **l_346 = &l_284;
    uint32_t l_353[4];
    int64_t l_376 = 0x4CE9CE2CA771B95ALL;
    int8_t *l_399 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_215[i][j] = 0x96D85EFDL;
    }
    for (i = 0; i < 4; i++)
        l_353[i] = 0xF308D577L;
lbl_267:
    (*l_212) = l_209;
    for (g_145.f5 = 0; (g_145.f5 > (-21)); g_145.f5 = safe_sub_func_uint8_t_u_u(g_145.f5, 1))
    { 
        int32_t *l_216 = &g_49[0];
        struct S3 *l_221 = &g_145;
        int8_t *l_222 = &g_20[4];
        struct S0 *l_223[2][7][7] = {{{&g_131,&g_131,&g_131,&g_131,(void*)0,&g_131,(void*)0},{&g_131,(void*)0,(void*)0,&g_131,(void*)0,(void*)0,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,(void*)0,&g_131,(void*)0,&g_131,(void*)0,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131,(void*)0,(void*)0},{&g_131,&g_131,(void*)0,(void*)0,&g_131,&g_131,&g_131},{(void*)0,(void*)0,(void*)0,&g_131,(void*)0,&g_131,&g_131}},{{(void*)0,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,(void*)0,(void*)0,(void*)0},{&g_131,(void*)0,&g_131,(void*)0,&g_131,(void*)0,&g_131},{&g_131,(void*)0,(void*)0,&g_131,&g_131,(void*)0,(void*)0},{(void*)0,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,(void*)0,(void*)0,&g_131,&g_131,(void*)0}}};
        int32_t l_245 = (-1L);
        int32_t l_246[1];
        uint16_t l_251 = 7UL;
        struct S2 **l_318 = &l_284;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_246[i] = 0x8A98FE82L;
        (*l_216) &= l_215[0][5];
        if ((((safe_div_func_uint8_t_u_u(((1L == (safe_mul_func_int16_t_s_s(((void*)0 != l_221), (((*l_222) = (p_9 > (p_7.f0 < 1UL))) != (((void*)0 == &l_216) >= 0x8FE323DCL))))) > p_7.f3), g_207)) , l_223[0][3][6]) != (void*)0))
        { 
            int32_t *l_224 = &l_215[0][3];
            int32_t *l_225 = &l_215[1][1];
            int32_t *l_226 = &l_215[0][5];
            int32_t *l_227 = &l_215[1][5];
            int32_t *l_228 = &l_215[0][4];
            int32_t *l_229 = (void*)0;
            int32_t *l_230 = &l_215[0][5];
            int32_t *l_231 = &g_49[0];
            int32_t *l_232 = &g_49[1];
            int32_t *l_233 = &g_49[1];
            int32_t *l_234 = &l_215[1][2];
            int32_t *l_235 = &l_215[0][5];
            int32_t *l_236 = (void*)0;
            int32_t *l_237 = &g_49[0];
            int32_t *l_238 = &g_49[3];
            int32_t *l_239 = &l_215[0][5];
            int32_t *l_240 = (void*)0;
            int32_t *l_241 = (void*)0;
            int32_t *l_242 = (void*)0;
            int32_t *l_243 = &l_215[0][5];
            int32_t *l_244[6][5][4] = {{{&l_215[0][5],&g_49[0],&g_49[0],&l_215[1][4]},{(void*)0,(void*)0,(void*)0,&l_215[1][1]},{&l_215[0][5],&g_49[0],&g_49[1],(void*)0},{(void*)0,&l_215[0][5],&g_49[0],&g_49[0]},{&g_49[0],&g_49[3],&l_215[0][5],&l_215[0][6]}},{{&g_49[0],&g_49[0],&g_49[0],(void*)0},{&l_215[1][1],&l_215[1][4],(void*)0,&l_215[0][5]},{&l_215[0][5],&l_215[0][5],&g_49[2],&l_215[1][4]},{&l_215[1][4],&l_215[1][2],&g_49[2],&g_49[0]},{&l_215[0][5],&g_49[0],(void*)0,&g_49[2]}},{{&l_215[1][1],&l_215[0][5],&g_49[0],(void*)0},{&g_49[0],(void*)0,&l_215[0][5],(void*)0},{&g_49[0],&l_215[0][5],&g_49[0],(void*)0},{(void*)0,&g_49[2],&g_49[1],&g_49[1]},{&l_215[0][5],&l_215[0][5],(void*)0,&l_215[0][6]}},{{(void*)0,&l_215[1][2],&g_49[0],(void*)0},{&l_215[0][5],&g_49[0],(void*)0,&g_49[0]},{&g_49[3],&g_49[0],&g_49[0],(void*)0},{&g_49[0],&l_215[1][2],&l_215[1][4],&l_215[0][6]},{&g_49[0],&l_215[0][5],&g_49[0],&g_49[1]}},{{&l_215[1][1],&g_49[2],&l_215[0][5],(void*)0},{&l_215[0][5],&l_215[0][5],(void*)0,(void*)0},{&l_215[0][5],(void*)0,&g_49[2],(void*)0},{&l_215[0][5],&l_215[0][5],&g_49[1],&g_49[2]},{&g_49[3],&g_49[0],&g_49[0],&g_49[0]}},{{&g_49[0],&l_215[1][2],&l_215[0][5],&l_215[1][4]},{&g_49[0],&l_215[0][5],&g_49[0],&l_215[0][5]},{&g_49[3],&l_215[1][4],&g_49[1],(void*)0},{&l_215[0][5],&g_49[0],&g_49[2],&l_215[0][6]},{&l_215[0][5],&g_49[3],(void*)0,&g_49[0]}}};
            uint32_t l_247 = 18446744073709551608UL;
            int16_t l_250 = (-5L);
            const int8_t ***l_256 = &l_254[2][1];
            struct S0 l_263 = {219,-1,8207,-3378};
            int i, j, k;
            l_247++;
            l_251++;
            (*l_256) = l_254[2][1];
            for (g_145.f0 = (-29); (g_145.f0 > 15); g_145.f0++)
            { 
                struct S0 l_262 = {93,0,-7246,-2924};
                for (g_50 = 0; (g_50 == 2); g_50 = safe_add_func_uint32_t_u_u(g_50, 4))
                { 
                    uint32_t l_264 = 0UL;
                    g_261 |= 0xF0DBF80FL;
                    l_263 = l_262;
                    --l_264;
                }
            }
            if (l_251)
                goto lbl_267;
        }
        else
        { 
            int32_t *l_268 = &l_215[0][3];
            int32_t *l_269 = &l_245;
            int32_t *l_270 = (void*)0;
            l_271--;
            (*l_268) |= (((safe_div_func_uint16_t_u_u(0x341FL, (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_182.f3, ((0xB2L & g_78[0]) > ((g_145.f4 > (safe_mul_func_int8_t_s_s(((*l_222) = 1L), (*l_216)))) && p_10)))), 2)), (*l_269))))) > (*l_269)) >= 2UL);
            for (g_145.f1.f0 = 6; (g_145.f1.f0 >= 2); g_145.f1.f0 -= 1)
            { 
                struct S2 **l_285 = &l_284;
                (*l_285) = l_284;
            }
            for (g_182.f1 = 0; (g_182.f1 != 0); g_182.f1 = safe_add_func_int8_t_s_s(g_182.f1, 6))
            { 
                int16_t *l_294 = &g_145.f1.f0;
                int64_t *l_297 = (void*)0;
                int64_t *l_298 = (void*)0;
                int64_t *l_299[6] = {&g_145.f4,&g_145.f4,&g_145.f4,&g_145.f4,&g_145.f4,&g_145.f4};
                int i;
                for (g_126 = 0; (g_126 >= 47); ++g_126)
                { 
                    return &g_20[0];
                }
                for (l_271 = 0; (l_271 != 29); l_271++)
                { 
                    int32_t **l_292 = &l_268;
                    (*l_292) = &l_246[0];
                }
                (*l_269) = ((2UL <= (p_10 = ((*l_294) = (l_293 == (void*)0)))) == ((l_215[0][5] = (safe_lshift_func_uint8_t_u_s(g_182.f0, 0))) <= (g_120 = (p_7.f0 | ((((&g_126 != (void*)0) , p_7.f1) && 0xC46277B2L) & 1UL)))));
            }
            l_215[0][6] |= (safe_mod_func_uint32_t_u_u((&p_9 != l_302), ((*l_216) = (safe_div_func_int8_t_s_s(p_7.f1, (*l_216))))));
        }
        l_215[1][5] = (((*l_216) = ((safe_rshift_func_int16_t_s_u(((safe_div_func_uint8_t_u_u(((l_309 , (((g_131.f3 | (*l_216)) || (p_7.f3 , 0UL)) & ((((g_310 , l_309.f0) != g_310.f6.f1) | 6UL) == (*l_216)))) && p_7.f3), l_309.f0)) != l_215[0][5]), 4)) , l_309.f0)) == 0L);
        for (g_145.f4 = 0; (g_145.f4 < 16); g_145.f4++)
        { 
            int32_t *l_319 = &l_215[0][5];
            int32_t *l_320 = &l_215[0][5];
            int32_t *l_321 = &l_246[0];
            int32_t *l_322 = &l_245;
            int32_t *l_323 = (void*)0;
            int32_t *l_324 = &g_49[0];
            int32_t *l_325 = &l_245;
            int32_t *l_326 = &l_215[0][5];
            int32_t *l_327[3][3][7];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_327[i][j][k] = &l_245;
                }
            }
            for (g_62 = (-23); (g_62 > 32); g_62 = safe_add_func_uint8_t_u_u(g_62, 9))
            { 
                for (g_310.f6.f1 = 0; (g_310.f6.f1 <= 1); g_310.f6.f1 += 1)
                { 
                    struct S2 ***l_317[5][5] = {{(void*)0,&g_315,&g_315,(void*)0,(void*)0},{(void*)0,&g_315,(void*)0,&g_315,&g_315},{&g_315,&g_315,&g_315,(void*)0,&g_315},{(void*)0,&g_315,&g_315,(void*)0,&g_315},{&g_315,(void*)0,&g_315,&g_315,&g_315}};
                    int i, j;
                    l_318 = g_315;
                }
            }
            if (p_7.f2)
                break;
            l_328++;
            (*l_325) = l_328;
        }
        if (p_10)
            break;
    }
    if (((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_145.f1.f0, 0xA5EA84F4L)), (!((g_340 = l_338) != (g_341 = &g_78[2]))))), (p_7.f2 >= p_10))) > (l_342 == l_342)))
    { 
        struct S4 * const l_343[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S4 *l_345 = &g_310;
        struct S4 **l_344 = &l_345;
        struct S2 ***l_347 = &g_315;
        int i, j;
        (*l_344) = l_343[0][5];
        (*l_347) = l_346;
    }
    else
    { 
        int32_t *l_348 = &g_310.f3;
        int32_t *l_349 = &l_215[0][5];
        int32_t *l_350[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_351 = 1L;
        const uint64_t *l_356 = &g_120;
        uint32_t l_364 = 4294967289UL;
        int i;
        ++l_353[2];
        (*l_348) = (((g_145.f5 , &g_50) == (g_357 = l_356)) && (((((safe_lshift_func_uint16_t_u_u((&g_316 != &g_316), 13)) , (l_309.f4 == ((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((-1L), 14)), 0xC2DD38DEFA6D99CBLL)) != 0L))) == p_9) && 1UL) & g_310.f6.f1));
        l_364--;
        for (l_309.f4 = 3; (l_309.f4 <= 9); l_309.f4 = safe_add_func_uint64_t_u_u(l_309.f4, 4))
        { 
            int64_t l_369[7] = {5L,5L,5L,5L,5L,5L,5L};
            int64_t l_383 = 0x35D333595A84D613LL;
            uint64_t *l_386 = &l_271;
            int16_t *l_398 = &g_145.f1.f0;
            int i;
            (*l_348) |= ((-1L) | ((g_131 , (l_369[4] , ((safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((+((*l_349) = ((p_10 == (+(0x4436EE8E53D12853LL | l_376))) & (safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s(g_310.f4.f0, 0x5707L)), l_369[4]))))) || p_7.f0), p_8)), g_310.f2)) < l_369[4]))) != p_9));
            (*l_348) &= (((1L == (*l_349)) & ((l_369[1] != (*g_357)) != (*g_357))) | ((safe_div_func_uint16_t_u_u(l_383, (safe_sub_func_int16_t_s_s((((*l_386) = 0x9233D27D5CDC6855LL) , 0x7EC8L), g_310.f6.f2)))) <= l_309.f0));
            (*l_348) = ((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((*l_349) = (-4L)), ((void*)0 == g_391))), ((safe_mul_func_int16_t_s_s(g_145.f1.f0, (*g_340))) && (g_310.f7.f0 = ((*l_398) &= (((void*)0 != g_396[0][1]) <= 0L)))))) < l_369[4]);
        }
    }
    return l_399;
}



static uint8_t  func_21(int32_t  p_22, struct S2  p_23)
{ 
    int32_t **l_200 = &g_69;
    struct S3 l_201 = {8UL,{0xBAA1L},0x22L,0x05F7048AL,0xD496F539C1A3CEE7LL,-1L};
    struct S3 *l_202 = &l_201;
    (*l_200) = (void*)0;
    (*l_202) = l_201;
    return g_182.f2;
}



static int16_t  func_28(struct S2  p_29, int8_t * p_30, int32_t  p_31)
{ 
    int64_t l_192 = 0x2BB132C40E746C3ALL;
    int8_t l_195 = 1L;
    uint32_t *l_196 = &g_62;
    int32_t *l_197 = (void*)0;
    int32_t l_198[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_198[i][j] = 0x4AB13705L;
    }
    l_198[0][1] = ((*g_69) = (safe_add_func_uint32_t_u_u(((*l_196) = (((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0x36L, p_29.f0)), ((g_78[0] >= 0x1AB1AB868E2F5152LL) <= ((((-6L) <= (safe_div_func_uint16_t_u_u(l_192, (safe_mul_func_int8_t_s_s((l_192 > 1UL), 255UL))))) , l_195) <= 7L)))) >= l_192) | 0x33L)), l_195)));
    (**g_68) = (*g_69);
    return p_31;
}



static struct S2  func_32(int8_t * const  p_33, int8_t * p_34, int8_t * p_35)
{ 
    uint32_t l_172 = 0UL;
    int32_t *l_173 = &g_49[0];
    int32_t *l_174 = &g_49[0];
    int32_t *l_175[5] = {&g_49[2],&g_49[2],&g_49[2],&g_49[2],&g_49[2]};
    int32_t l_176 = 0x9338E5F9L;
    int32_t l_177 = 0x79BB8A7CL;
    int32_t l_178 = 1L;
    uint32_t l_179[4][1][5] = {{{1UL,0xCFAFA3A9L,0xCFAFA3A9L,1UL,0xCFAFA3A9L}},{{4294967295UL,4294967295UL,1UL,4294967295UL,4294967295UL}},{{0xCFAFA3A9L,1UL,0xCFAFA3A9L,0xCFAFA3A9L,1UL}},{{4294967295UL,4294967288UL,4294967288UL,4294967295UL,4294967288UL}}};
    int i, j, k;
    for (g_62 = (-29); (g_62 > 49); g_62 = safe_add_func_uint32_t_u_u(g_62, 1))
    { 
        struct S1 l_171 = {-5L};
        (**g_68) = (safe_mul_func_uint8_t_u_u((l_171 , 0x73L), g_120));
    }
    (*g_69) = l_172;
    --l_179[0][0][0];
    return g_182;
}



static int8_t * func_39(union U5  p_40, int8_t * p_41, uint64_t  p_42)
{ 
    int16_t l_159 = 0L;
    int32_t l_160 = 0xABB6E06CL;
    int32_t *l_161[6][4] = {{(void*)0,(void*)0,(void*)0,&g_49[0]},{(void*)0,&g_49[2],&l_160,(void*)0},{&l_160,&g_49[0],&l_160,&l_160},{&l_160,&g_49[0],(void*)0,(void*)0},{&g_49[0],&g_49[2],&g_49[2],&g_49[0]},{&l_160,(void*)0,&g_49[2],&l_160}};
    uint32_t l_162 = 0xA851268EL;
    int8_t *l_165 = &g_145.f5;
    int i, j;
    l_162++;
    return l_165;
}



static union U5  func_43(int8_t * p_44)
{ 
    int32_t *l_45 = (void*)0;
    int32_t **l_46 = &l_45;
    int32_t *l_48 = &g_49[0];
    int32_t **l_47 = &l_48;
    struct S3 l_51 = {0UL,{-5L},0x8BL,1L,0x19AC4E69A4575F7FLL,0x77L};
    int16_t l_79 = (-1L);
    const uint8_t l_134 = 246UL;
    int32_t l_136 = (-3L);
    int8_t l_137 = 0xBEL;
    int32_t l_152 = 0xC2D907B6L;
    int32_t l_153 = 0x76A68AF1L;
    int32_t l_154[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};
    union U5 l_158 = {0};
    int i;
    (*l_47) = ((*l_46) = l_45);
lbl_57:
    g_50 ^= g_49[2];
    l_51 = l_51;
    for (l_51.f4 = (-25); (l_51.f4 <= 3); l_51.f4++)
    { 
        uint8_t l_56[7] = {0xDDL,0xDDL,0xDDL,0xDDL,0xDDL,0xDDL,0xDDL};
        int32_t l_70 = 0x2A55CCBDL;
        struct S0 *l_132 = &g_131;
        int32_t *l_135[5];
        int i;
        for (i = 0; i < 5; i++)
            l_135[i] = &l_70;
        for (g_50 = 0; (g_50 <= 3); g_50 += 1)
        { 
            int i;
            if ((g_20[(g_50 + 3)] ^ g_49[g_50]))
            { 
                const int32_t *l_54 = &g_49[0];
                const int32_t **l_55 = &l_54;
                (*l_55) = l_54;
                g_49[g_50] |= l_56[4];
            }
            else
            { 
                if (l_51.f2)
                    goto lbl_57;
            }
            for (l_51.f1.f0 = 1; (l_51.f1.f0 <= 6); l_51.f1.f0 += 1)
            { 
                int64_t l_60[3][2] = {{0xDFA23986B299B5F2LL,0xDFA23986B299B5F2LL},{0xDFA23986B299B5F2LL,0xDFA23986B299B5F2LL},{0xDFA23986B299B5F2LL,0xDFA23986B299B5F2LL}};
                uint32_t *l_61 = &g_62;
                struct S4 l_101[7] = {{0x1975C8F0ABFABC74LL,0xE3606EC1L,-8L,0x697E171BL,{122,0,744,5},255UL,{0xCFE8E9ACL,1UL,8779,0x068BL},{0x4F8CL}},{0x1975C8F0ABFABC74LL,0xE3606EC1L,-8L,0x697E171BL,{122,0,744,5},255UL,{0xCFE8E9ACL,1UL,8779,0x068BL},{0x4F8CL}},{-7L,0xAFF43A56L,-3L,-9L,{307,-0,5129,1756},0xA5L,{0x864248A5L,1UL,7293,65535UL},{0L}},{0x1975C8F0ABFABC74LL,0xE3606EC1L,-8L,0x697E171BL,{122,0,744,5},255UL,{0xCFE8E9ACL,1UL,8779,0x068BL},{0x4F8CL}},{0x1975C8F0ABFABC74LL,0xE3606EC1L,-8L,0x697E171BL,{122,0,744,5},255UL,{0xCFE8E9ACL,1UL,8779,0x068BL},{0x4F8CL}},{-7L,0xAFF43A56L,-3L,-9L,{307,-0,5129,1756},0xA5L,{0x864248A5L,1UL,7293,65535UL},{0L}},{0x1975C8F0ABFABC74LL,0xE3606EC1L,-8L,0x697E171BL,{122,0,744,5},255UL,{0xCFE8E9ACL,1UL,8779,0x068BL},{0x4F8CL}}};
                uint64_t *l_119 = &g_120;
                int i, j;
                l_70 &= ((safe_mul_func_int8_t_s_s(l_60[0][1], ((((*l_61) = 1UL) == (safe_add_func_int64_t_s_s((~l_60[0][1]), (safe_sub_func_int64_t_s_s(((g_68 == (void*)0) | 1UL), l_60[0][1]))))) , 4UL))) , (**g_68));
                for (l_51.f2 = 0; (l_51.f2 <= 6); l_51.f2 += 1)
                { 
                    int8_t *l_73[3];
                    uint16_t *l_77[3];
                    uint32_t *l_88[5] = {&g_62,&g_62,&g_62,&g_62,&g_62};
                    uint64_t l_89 = 18446744073709551615UL;
                    uint16_t *l_90[4];
                    uint16_t **l_91 = &l_77[2];
                    uint16_t *l_93[2];
                    uint16_t **l_92 = &l_93[0];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_73[i] = &g_20[3];
                    for (i = 0; i < 3; i++)
                        l_77[i] = &g_78[0];
                    for (i = 0; i < 4; i++)
                        l_90[i] = &g_78[1];
                    for (i = 0; i < 2; i++)
                        l_93[i] = &g_78[3];
                    if ((*g_69))
                        break;
                    (**g_68) = (safe_rshift_func_int16_t_s_u((((g_74[2][1][1] = l_73[2]) != &g_20[(g_50 + 3)]) || ((safe_lshift_func_uint16_t_u_u((l_79 ^= l_60[0][1]), 0)) != (safe_rshift_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((l_88[4] == (void*)0) >= (g_78[0] >= (l_60[2][1] , l_89))), g_49[0])), (*g_69))) , g_78[0]) != l_89) >= l_60[0][0]), g_49[2])))), 15));
                    (**g_68) |= ((((((*l_91) = l_90[3]) != ((*l_92) = &g_78[1])) , (safe_div_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((((l_56[4] > (safe_unary_minus_func_int64_t_s(g_78[0]))) < 65531UL) <= ((l_101[3] , (safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u(((--(*l_61)) < (safe_unary_minus_func_int8_t_s((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_101[3].f4.f2, l_89)), 0x148970CE46C46319LL))))), l_89)) , &g_62) == l_88[4]), 4294967288UL)) ^ 0L), l_60[0][1]))) , 0x4AL)) || l_89), 9)), 4L)), g_20[5]))) == l_56[4]) , l_101[3].f6.f3);
                }
                for (l_51.f2 = 0; (l_51.f2 <= 6); l_51.f2 += 1)
                { 
                    if ((**g_68))
                        break;
                }
                (*g_69) = (safe_add_func_uint64_t_u_u(((*l_119) = (safe_rshift_func_uint8_t_u_s(0xF1L, 6))), ((*p_44) >= (l_70 > (((g_126 = (safe_rshift_func_int8_t_s_u((g_123[4][0][2] , ((0x32D78657L && (((safe_lshift_func_uint8_t_u_s(g_49[g_50], 3)) , (0x2539712DL | l_101[3].f4.f0)) , g_20[(g_50 + 3)])) | l_101[3].f0)), 7))) , &g_20[5]) != (void*)0)))));
            }
            return g_123[4][0][0];
        }
        if ((*g_69))
            break;
        l_137 = (l_136 &= ((**g_68) = ((**g_68) != (safe_sub_func_int32_t_s_s(((*p_44) & ((safe_sub_func_int32_t_s_s(((2L && (((((*l_132) = g_131) , (!g_78[0])) <= (l_56[5] != (l_56[4] & g_120))) & l_56[6])) < l_134), 0xD3598B09L)) | g_126)), 0xF7E3BC08L)))));
    }
    for (l_51.f0 = 0; (l_51.f0 < 49); l_51.f0++)
    { 
        uint64_t l_148[1];
        struct S1 l_149[3][2][7] = {{{{-10L},{1L},{0x35D4L},{-10L},{0x38B4L},{0L},{1L}},{{-1L},{8L},{0x3C1FL},{0xC740L},{0x3C1FL},{8L},{-1L}}},{{{8L},{1L},{0xDC8BL},{0x3C1FL},{-1L},{8L},{0x3C1FL}},{{-10L},{0x38B4L},{0L},{1L},{1L},{0L},{0x38B4L}}},{{{1L},{-2L},{0xDC8BL},{0xC740L},{-2L},{0x3C1FL},{0x38B4L}},{{-1L},{1L},{0x3C1FL},{-1L},{0x38B4L},{-1L},{0x3C1FL}}}};
        int32_t l_150[6][1];
        int32_t *l_151[3];
        uint8_t l_155 = 0x30L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_148[i] = 18446744073709551615UL;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_150[i][j] = (-5L);
        }
        for (i = 0; i < 3; i++)
            l_151[i] = &g_49[0];
        (**g_68) = ((!(((((g_20[5] , (safe_mul_func_int8_t_s_s(((void*)0 != l_48), (safe_lshift_func_uint8_t_u_s(((g_145 , ((g_131 , (safe_div_func_int8_t_s_s((*p_44), (g_131.f1 , l_148[0])))) & g_50)) == 5L), (*p_44)))))) , l_149[0][0][0]) , (*g_68)) != (void*)0) && 5UL)) && l_148[0]);
        l_155--;
    }
    return l_158;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_49[i], "g_49[i]", print_hash_value);

    }
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);

    }
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_131.f1, "g_131.f1", print_hash_value);
    transparent_crc(g_131.f2, "g_131.f2", print_hash_value);
    transparent_crc(g_131.f3, "g_131.f3", print_hash_value);
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    transparent_crc(g_145.f1.f0, "g_145.f1.f0", print_hash_value);
    transparent_crc(g_145.f2, "g_145.f2", print_hash_value);
    transparent_crc(g_145.f3, "g_145.f3", print_hash_value);
    transparent_crc(g_145.f4, "g_145.f4", print_hash_value);
    transparent_crc(g_145.f5, "g_145.f5", print_hash_value);
    transparent_crc(g_182.f0, "g_182.f0", print_hash_value);
    transparent_crc(g_182.f1, "g_182.f1", print_hash_value);
    transparent_crc(g_182.f2, "g_182.f2", print_hash_value);
    transparent_crc(g_182.f3, "g_182.f3", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_310.f0, "g_310.f0", print_hash_value);
    transparent_crc(g_310.f1, "g_310.f1", print_hash_value);
    transparent_crc(g_310.f2, "g_310.f2", print_hash_value);
    transparent_crc(g_310.f3, "g_310.f3", print_hash_value);
    transparent_crc(g_310.f4.f0, "g_310.f4.f0", print_hash_value);
    transparent_crc(g_310.f4.f1, "g_310.f4.f1", print_hash_value);
    transparent_crc(g_310.f4.f2, "g_310.f4.f2", print_hash_value);
    transparent_crc(g_310.f4.f3, "g_310.f4.f3", print_hash_value);
    transparent_crc(g_310.f5, "g_310.f5", print_hash_value);
    transparent_crc(g_310.f6.f0, "g_310.f6.f0", print_hash_value);
    transparent_crc(g_310.f6.f1, "g_310.f6.f1", print_hash_value);
    transparent_crc(g_310.f6.f2, "g_310.f6.f2", print_hash_value);
    transparent_crc(g_310.f6.f3, "g_310.f6.f3", print_hash_value);
    transparent_crc(g_310.f7.f0, "g_310.f7.f0", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_535[i][j][k], "g_535[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_628.f0, "g_628.f0", print_hash_value);
    transparent_crc(g_628.f1.f0, "g_628.f1.f0", print_hash_value);
    transparent_crc(g_628.f2, "g_628.f2", print_hash_value);
    transparent_crc(g_628.f3, "g_628.f3", print_hash_value);
    transparent_crc(g_628.f4, "g_628.f4", print_hash_value);
    transparent_crc(g_628.f5, "g_628.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_650[i][j][k], "g_650[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_847, "g_847", print_hash_value);
    transparent_crc(g_883.f0, "g_883.f0", print_hash_value);
    transparent_crc(g_997.f0, "g_997.f0", print_hash_value);
    transparent_crc(g_997.f1, "g_997.f1", print_hash_value);
    transparent_crc(g_997.f2, "g_997.f2", print_hash_value);
    transparent_crc(g_997.f3, "g_997.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
