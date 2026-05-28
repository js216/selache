// SPDX-License-Identifier: MIT
// cctest_csmith_59856492.c --- cctest case csmith_59856492 (csmith seed 1501914258)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6657ea6e */
/* @exp_ticks 0x55d1 */

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

// Options:   -s 1501914258 -o /tmp/csmith_gen_jnh38nxx/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int16_t  f0;
   int32_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int64_t  f0;
   uint16_t  f1;
   int16_t  f2;
   const int32_t  f3;
   int16_t  f4;
   struct S0  f5;
};
#pragma pack(pop)

union U2 {
   int64_t  f0;
   int16_t  f1;
   int8_t * f2;
   struct S1  f3;
};

union U3 {
   int8_t  f0;
   const uint32_t  f1;
   uint8_t  f2;
   uint32_t  f3;
};


static int32_t g_3[3][7] = {{0xBE135E1FL,(-1L),(-1L),0xBE135E1FL,(-10L),0L,(-10L)},{0xBE135E1FL,(-1L),(-1L),0xBE135E1FL,(-10L),0L,(-10L)},{0xBE135E1FL,(-1L),(-1L),0xBE135E1FL,(-10L),0L,(-10L)}};
static int32_t g_4 = 7L;
static int32_t g_5 = 0x257EA0D0L;
static int32_t g_6 = 0xF88039D6L;
static int32_t g_8 = 0x81ECA6C8L;
static uint16_t g_10 = 0xF0F5L;
static int8_t g_15 = 4L;
static int16_t g_64 = 0x3D57L;
static uint64_t g_101 = 0xEA944068BD6B81C7LL;
static int32_t g_103 = 0x60CA180BL;
static int32_t g_105 = 0x186BE7BEL;
static int32_t g_107 = 0xE07D3A08L;
static int64_t g_109 = 0x6DC7391AF2E2092BLL;
static int64_t g_111[2] = {(-1L),(-1L)};
static uint32_t g_119 = 0x42BE7AC7L;
static struct S0 g_127 = {0L,0x8F678E9AL};
static union U2 g_211 = {0L};
static int8_t g_243 = 1L;
static int64_t g_244 = 0xAC5A14F6FAD5A6DDLL;
static int8_t g_245 = 0x9AL;
static uint8_t g_248[5] = {0x99L,0x99L,0x99L,0x99L,0x99L};
static int64_t g_253 = (-8L);
static uint16_t g_278 = 0x50D0L;
static const int64_t *g_291 = &g_111[0];
static const int64_t **g_290 = &g_291;
static uint32_t g_311 = 0UL;
static struct S1 g_329 = {1L,0x58C6L,-3L,0xC6094E3DL,0x5E36L,{-1L,9L}};
static uint32_t g_332 = 0x3769E7DFL;
static int16_t *g_339[4] = {&g_211.f1,&g_211.f1,&g_211.f1,&g_211.f1};
static int16_t **g_338[7][2][1] = {{{&g_339[0]},{&g_339[3]}},{{&g_339[0]},{&g_339[3]}},{{&g_339[0]},{&g_339[3]}},{{&g_339[0]},{&g_339[3]}},{{&g_339[0]},{&g_339[3]}},{{&g_339[0]},{&g_339[3]}},{{&g_339[0]},{&g_339[3]}}};
static struct S1 g_445 = {0xC967F03E088F4922LL,65535UL,0x31E2L,0x2A1E5884L,-8L,{0L,-4L}};
static struct S1 *g_444 = &g_445;
static int64_t g_495 = 0L;
static union U3 g_506 = {0L};
static const int32_t *g_509 = &g_105;
static uint8_t g_566[4] = {255UL,255UL,255UL,255UL};
static int8_t g_620 = 0xDEL;
static uint64_t g_621 = 6UL;
static union U2 g_628 = {0L};
static uint32_t * const g_633 = &g_119;
static uint32_t * const *g_632 = &g_633;
static int16_t g_654 = (-4L);
static uint64_t g_662 = 0x93AE300580031B0BLL;
static int8_t g_682 = (-1L);
static uint64_t g_683[4][3] = {{18446744073709551610UL,0xA16D0588701BE064LL,0xA16D0588701BE064LL},{18446744073709551610UL,0xA16D0588701BE064LL,0xA16D0588701BE064LL},{18446744073709551610UL,0xA16D0588701BE064LL,0xA16D0588701BE064LL},{18446744073709551610UL,0xA16D0588701BE064LL,0xA16D0588701BE064LL}};
static uint32_t *g_694 = (void*)0;
static uint32_t **g_693 = &g_694;
static uint32_t ***g_692[2] = {&g_693,&g_693};
static uint32_t *** const *g_691 = &g_692[0];
static uint16_t g_709[2][7] = {{1UL,3UL,1UL,65535UL,0x6D58L,0x6D58L,65535UL},{1UL,3UL,1UL,65535UL,0x6D58L,0x6D58L,65535UL}};
static uint8_t **g_719 = (void*)0;
static int32_t *g_728[7][3] = {{&g_445.f5.f1,&g_4,&g_445.f5.f1},{&g_329.f5.f1,&g_103,&g_329.f5.f1},{&g_445.f5.f1,&g_4,&g_445.f5.f1},{&g_329.f5.f1,&g_103,&g_329.f5.f1},{&g_445.f5.f1,&g_4,&g_445.f5.f1},{&g_329.f5.f1,&g_103,&g_329.f5.f1},{&g_445.f5.f1,&g_4,&g_445.f5.f1}};
static int32_t **g_727[1] = {&g_728[4][1]};
static uint32_t g_782 = 9UL;
static uint16_t **g_920 = (void*)0;
static union U2 *g_943 = &g_628;
static union U2 ** const g_942 = &g_943;
static uint32_t g_962 = 0xAFE6FEF7L;
static int16_t ***g_1037[1][6][5] = {{{&g_338[0][0][0],&g_338[0][0][0],&g_338[6][1][0],&g_338[6][1][0],&g_338[3][0][0]},{&g_338[6][1][0],(void*)0,(void*)0,&g_338[6][1][0],(void*)0},{&g_338[3][0][0],&g_338[6][1][0],&g_338[6][1][0],&g_338[6][1][0],&g_338[6][1][0]},{(void*)0,(void*)0,&g_338[6][1][0],&g_338[6][1][0],&g_338[6][1][0]},{&g_338[6][1][0],&g_338[0][0][0],&g_338[6][1][0],&g_338[6][1][0],&g_338[6][1][0]},{&g_338[6][1][0],&g_338[6][1][0],&g_338[6][1][0],&g_338[6][1][0],&g_338[6][1][0]}}};
static int16_t ****g_1036 = &g_1037[0][2][3];
static uint64_t g_1099[2] = {0x2778169254138B43LL,0x2778169254138B43LL};
static int16_t g_1112[2][3] = {{0x6C30L,0x6C30L,0x6C30L},{0L,0L,0L}};
static struct S0 *g_1238 = &g_127;
static uint16_t ***g_1297 = &g_920;
static uint16_t ***g_1298 = &g_920;
static int16_t g_1327 = 0x77C1L;
static const int64_t g_1384 = 0xC18A389EFD24A307LL;
static int16_t g_1477 = 0xC1F4L;
static uint32_t g_1512 = 1UL;
static uint8_t ***g_1517 = &g_719;
static uint8_t ****g_1516 = &g_1517;
static uint16_t g_1581 = 0x4D9BL;
static struct S1 g_1588 = {0x9E1E959AB8CA0EB6LL,1UL,1L,0xACFE341EL,0x21AEL,{0L,-1L}};
static int64_t g_1595 = 0xCE54A5FF4FBFAF04LL;
static const int16_t *g_1810[7] = {&g_329.f4,&g_329.f4,&g_329.f4,&g_329.f4,&g_329.f4,&g_329.f4,&g_329.f4};
static const int16_t ** const g_1809[3][5] = {{&g_1810[6],&g_1810[5],&g_1810[6],&g_1810[6],&g_1810[5]},{&g_1810[4],&g_1810[3],&g_1810[6],(void*)0,(void*)0},{&g_1810[3],&g_1810[4],&g_1810[3],&g_1810[6],(void*)0}};
static const int16_t ** const *g_1808 = &g_1809[0][4];
static const int16_t ** const **g_1807[4][5][3] = {{{&g_1808,(void*)0,&g_1808},{&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808},{(void*)0,&g_1808,&g_1808}},{{&g_1808,&g_1808,&g_1808},{(void*)0,(void*)0,(void*)0},{&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808}},{{&g_1808,(void*)0,&g_1808},{&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808},{(void*)0,&g_1808,&g_1808}},{{&g_1808,&g_1808,&g_1808},{(void*)0,(void*)0,(void*)0},{&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808}}};
static const int16_t ** const ***g_1806 = &g_1807[3][4][1];
static uint16_t g_1842 = 65533UL;
static uint32_t g_1885 = 2UL;
static int8_t g_1912 = 0xF9L;
static int32_t g_1920 = 0xDB5F38AAL;
static union U2 g_2030 = {4L};
static uint32_t g_2232 = 0x1F2F86C5L;



static const uint32_t  func_1(void);
static int8_t  func_22(int8_t * p_23, int8_t * p_24);
static uint64_t  func_25(int8_t * p_26, int32_t * p_27);
static struct S0  func_33(int32_t * p_34, struct S0  p_35);
static uint32_t  func_46(uint64_t  p_47, int32_t * p_48, int32_t  p_49);
static int32_t  func_50(int32_t * p_51, int8_t * p_52, int8_t * p_53);
static int8_t  func_55(int8_t  p_56, int8_t * const  p_57, uint32_t  p_58, int32_t * const  p_59, const int32_t * p_60);
static uint16_t  func_69(int32_t * p_70, uint16_t  p_71, uint8_t  p_72, struct S1  p_73);




static const uint32_t  func_1(void)
{ 
    int16_t l_2[5];
    int32_t l_2148 = (-1L);
    int8_t l_2149[7][3];
    int32_t l_2162 = (-9L);
    int32_t l_2163 = 1L;
    int32_t *l_2167 = &g_105;
    uint32_t l_2199[2][4][6] = {{{0x58BF42A5L,0x58BF42A5L,0x07DC9C5CL,0x58BF42A5L,0x58BF42A5L,0x07DC9C5CL},{0x58BF42A5L,0x58BF42A5L,0x07DC9C5CL,0x58BF42A5L,0x58BF42A5L,0x07DC9C5CL},{0x58BF42A5L,0x58BF42A5L,0x07DC9C5CL,0x58BF42A5L,0x58BF42A5L,0x58BF42A5L},{18446744073709551606UL,18446744073709551606UL,0x58BF42A5L,18446744073709551606UL,18446744073709551606UL,0x58BF42A5L}},{{18446744073709551606UL,18446744073709551606UL,0x58BF42A5L,18446744073709551606UL,18446744073709551606UL,0x58BF42A5L},{18446744073709551606UL,18446744073709551606UL,0x58BF42A5L,18446744073709551606UL,18446744073709551606UL,0x58BF42A5L},{18446744073709551606UL,18446744073709551606UL,0x58BF42A5L,18446744073709551606UL,18446744073709551606UL,0x58BF42A5L},{18446744073709551606UL,18446744073709551606UL,0x58BF42A5L,18446744073709551606UL,18446744073709551606UL,0x58BF42A5L}}};
    int32_t l_2219 = 6L;
    struct S0 l_2250 = {1L,9L};
    const uint64_t l_2261 = 0x8BE2C4E97EC47D47LL;
    uint32_t l_2295 = 18446744073709551613UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_2[i] = 0L;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
            l_2149[i][j] = 0x7CL;
    }
    for (g_3[0][0] = 0; (g_3[0][0] <= 4); g_3[0][0] += 1)
    { 
        int8_t *l_14[3];
        union U3 *l_2141 = &g_506;
        int32_t l_2147[5] = {0x7BE3AB8CL,0x7BE3AB8CL,0x7BE3AB8CL,0x7BE3AB8CL,0x7BE3AB8CL};
        const int64_t l_2168 = 0x9C58C7FB57EEB50BLL;
        uint64_t l_2196 = 18446744073709551615UL;
        uint64_t l_2197 = 0x01CA476E1AB4B5E3LL;
        union U2 l_2208 = {0x45BBC914B757B282LL};
        struct S1 l_2255 = {1L,8UL,0xD1FDL,0x41450234L,0xF826L,{5L,0xC707C22DL}};
        uint8_t *l_2263[5][2];
        uint8_t **l_2262 = &l_2263[4][1];
        int i, j;
        for (i = 0; i < 3; i++)
            l_14[i] = &g_15;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_2263[i][j] = &g_566[1];
        }
        for (g_4 = 4; (g_4 >= 0); g_4 -= 1)
        { 
            uint32_t l_2146 = 4294967291UL;
            int32_t l_2161 = 0x76C0FFB3L;
            for (g_5 = 4; (g_5 >= 0); g_5 -= 1)
            { 
                int16_t l_2142 = 3L;
                struct S0 *l_2151 = &g_1588.f5;
                struct S0 **l_2152 = &l_2151;
                for (g_6 = 0; (g_6 <= 4); g_6 += 1)
                { 
                    int32_t *l_7 = &g_8;
                    int32_t *l_9 = &g_8;
                    int i;
                    --g_10;
                    (*l_7) = ((!4L) < ((((void*)0 == l_14[1]) , 0xA6L) | 0L));
                    if (l_2[g_5])
                        continue;
                }
                for (g_6 = 3; (g_6 >= 1); g_6 -= 1)
                { 
                    uint32_t l_2145[5] = {4UL,4UL,4UL,4UL,4UL};
                    int32_t *l_2150 = &g_628.f3.f5.f1;
                    int i;
                }
                (*l_2152) = l_2151;
                if ((*g_509))
                    continue;
            }
            for (g_119 = 0; (g_119 <= 3); g_119 += 1)
            { 
                uint32_t l_2154[6] = {0x05C23366L,0x5998005EL,0x5998005EL,0x05C23366L,0x5998005EL,0x5998005EL};
                int32_t l_2160[1][5][6] = {{{(-1L),0xFC88F8C1L,0x55944B89L,0L,0x51048636L,0L},{0x55944B89L,(-1L),0x55944B89L,0x65C23F69L,(-1L),0L},{0L,0x65C23F69L,0L,0xEF009D05L,0xB21B8312L,0xB21B8312L},{0xEF009D05L,0xB21B8312L,0xB21B8312L,0xEF009D05L,0L,0x65C23F69L},{0L,0L,(-1L),0x65C23F69L,0x55944B89L,(-1L)}}};
                uint32_t l_2164 = 4294967295UL;
                int i, j, k;
                for (g_1842 = 0; (g_1842 <= 3); g_1842 += 1)
                { 
                    int32_t *l_2153[3][5] = {{&l_2147[2],&g_1588.f5.f1,(void*)0,&g_1588.f5.f1,&l_2147[2]},{&g_329.f5.f1,&g_1588.f5.f1,&g_445.f5.f1,&l_2147[2],&g_445.f5.f1},{&g_445.f5.f1,&g_445.f5.f1,(void*)0,&l_2147[2],&g_329.f5.f1}};
                    int i, j;
                    l_2154[1] = (l_2147[2] = 0L);
                }
                for (g_8 = 1; (g_8 >= 0); g_8 -= 1)
                { 
                    struct S1 **l_2155 = &g_444;
                    int32_t *l_2156 = &l_2148;
                    int32_t *l_2157 = &g_103;
                    int32_t *l_2158 = &g_6;
                    int32_t *l_2159[3][3] = {{&g_329.f5.f1,&g_329.f5.f1,&g_329.f5.f1},{(void*)0,(void*)0,(void*)0},{&g_329.f5.f1,&g_329.f5.f1,&g_329.f5.f1}};
                    int i, j;
                    (*l_2155) = &g_329;
                    (*l_2156) &= l_2[g_3[0][0]];
                    (*l_2156) |= g_248[g_8];
                    (*l_2156) &= g_566[(g_8 + 1)];
                    --l_2164;
                }
                l_2167 = &l_2163;
                return l_2168;
            }
        }
        for (g_1842 = 0; (g_1842 <= 0); g_1842 += 1)
        { 
            int8_t l_2198 = 0x41L;
            int32_t l_2200 = (-5L);
            int32_t l_2204 = (-6L);
            int64_t *l_2220 = (void*)0;
            int64_t *l_2221 = &l_2208.f0;
            int16_t *l_2222[1];
            uint8_t *l_2223 = &g_566[0];
            int32_t *l_2224 = &g_107;
            uint32_t l_2248 = 0x23408CDEL;
            struct S0 *l_2251 = &g_628.f3.f5;
            int i;
            for (i = 0; i < 1; i++)
                l_2222[i] = &g_445.f4;
            for (g_1327 = 0; (g_1327 <= 1); g_1327 += 1)
            { 
                struct S0 **l_2177[7] = {&g_1238,&g_1238,&g_1238,&g_1238,&g_1238,&g_1238,&g_1238};
                struct S0 ***l_2176 = &l_2177[0];
                struct S0 ****l_2175 = &l_2176;
                int64_t l_2201[4];
                int32_t *l_2202 = (void*)0;
                int32_t *l_2203[1];
                int i;
                for (i = 0; i < 4; i++)
                    l_2201[i] = 0xB51E3D7954E52F0BLL;
                for (i = 0; i < 1; i++)
                    l_2203[i] = &g_445.f5.f1;
                l_2204 ^= ((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0x86L, (safe_lshift_func_int8_t_s_u((g_1912 ^= (((*l_2175) = (void*)0) != (((((safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((l_2200 &= ((safe_mod_func_int16_t_s_s((l_2177[0] != (void*)0), (safe_lshift_func_int16_t_s_u(((l_2199[0][1][1] &= (safe_div_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(l_2147[2], ((safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s((((g_1099[g_1327] = (((*l_2167) & ((*g_509) && (*l_2167))) <= l_2196)) & l_2197) >= (-2L)), 0x1BB0FE560EE946CDLL)), g_1112[0][0])) | 65533UL))), l_2198)), 65527UL))) != 1UL), 10)))) ^ (*l_2167))), g_278)) ^ 0x8BB17F48L), (**g_632))) || l_2197) , g_1099[g_1327]) || (*l_2167)) , (void*)0))), 2)))), l_2198)) != (*l_2167)) || (*l_2167)) || l_2201[1]);
                for (g_329.f0 = 0; (g_329.f0 <= 4); g_329.f0 += 1)
                { 
                    int32_t l_2205 = (-3L);
                    int i;
                    l_2205 |= g_111[g_1327];
                }
            }
            (*l_2224) = (safe_mul_func_uint16_t_u_u((l_2208 , (((safe_add_func_uint8_t_u_u(((*l_2223) = (safe_sub_func_int16_t_s_s(((*l_2167) = (safe_sub_func_int32_t_s_s(((l_2[g_3[0][0]] ^= (((**g_942) , (safe_sub_func_uint8_t_u_u(1UL, (*l_2167)))) ^ (safe_mul_func_int64_t_s_s((**g_290), (g_506 , ((*l_2221) = (l_2219 == 0UL))))))) | l_2196), (*g_509)))), l_2168))), 248UL)) , l_2200) >= 2L)), 0x30B5L));
            for (g_127.f0 = 0; (g_127.f0 <= 0); g_127.f0 += 1)
            { 
                int16_t l_2231 = 0xF0C6L;
                int32_t l_2243 = 0xD9AD0A9AL;
                int32_t **l_2249 = &g_728[4][1];
                for (g_445.f4 = 0; (g_445.f4 >= 0); g_445.f4 -= 1)
                { 
                    int32_t *l_2225 = &g_1588.f5.f1;
                    int32_t *l_2226 = &g_107;
                    int32_t *l_2227 = &g_5;
                    int32_t *l_2228 = &g_105;
                    int32_t *l_2229 = &l_2162;
                    int32_t *l_2230[6];
                    int64_t **l_2237 = &l_2220;
                    int64_t ***l_2236 = &l_2237;
                    int64_t ****l_2235 = &l_2236;
                    struct S0 *l_2238 = &g_445.f5;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2230[i] = &g_127.f1;
                    g_2232++;
                    if ((*l_2167))
                        break;
                    (*l_2235) = (void*)0;
                    (*l_2238) = (*g_1238);
                    (*l_2227) |= (safe_mod_func_uint32_t_u_u((safe_div_func_int64_t_s_s(0xB69EA1156754FE3FLL, (**g_290))), (*l_2224)));
                }
                if (((l_2243 = (g_962 ^ (**g_290))) == l_2231))
                { 
                    return l_2231;
                }
                else
                { 
                    (*l_2167) ^= (safe_lshift_func_uint16_t_u_s(0x90F1L, ((safe_div_func_uint16_t_u_u(0x8ACEL, l_2248)) & 65529UL)));
                }
                (*l_2249) = &l_2243;
            }
            (*l_2224) &= 0xE623767BL;
            (*l_2251) = ((*g_1238) = (g_211.f0 , func_33(&l_2147[2], func_33(&l_2148, l_2250))));
        }
        for (g_2232 = 0; (g_2232 <= 4); g_2232 += 1)
        { 
            int64_t *l_2256 = &l_2208.f3.f0;
            uint16_t *l_2257 = (void*)0;
            uint16_t *l_2258 = &g_278;
            int32_t l_2260[1];
            int16_t l_2281 = (-1L);
            uint32_t l_2283 = 0xA8B45E68L;
            const int16_t l_2318 = 0x077FL;
            int i;
            for (i = 0; i < 1; i++)
                l_2260[i] = 0x431B59EEL;
            for (g_662 = 0; (g_662 <= 4); g_662 += 1)
            { 
                if (l_2208.f0)
                    break;
            }
            if (((safe_rshift_func_uint16_t_u_u(((*l_2258) = ((~(**g_290)) && ((*l_2256) = (l_2255 , l_2255.f1)))), 1)) >= (~(18446744073709551614UL | (l_2260[0] != l_2261)))))
            { 
                (**g_1516) = l_2262;
            }
            else
            { 
                int32_t l_2279 = 0xF4D61BFAL;
                int32_t l_2280 = 0x1CF02BA5L;
                int32_t l_2282 = 0x8C2C69E6L;
                uint8_t ***l_2317 = (void*)0;
                int32_t *l_2320 = (void*)0;
                if ((safe_mod_func_int16_t_s_s(l_2168, l_2168)))
                { 
                    int64_t l_2266 = 0L;
                    int32_t *l_2267 = &g_105;
                    int32_t *l_2268 = &g_5;
                    int32_t *l_2269 = &l_2255.f5.f1;
                    int32_t *l_2270 = &l_2219;
                    int32_t *l_2271 = &g_4;
                    int32_t *l_2272 = &g_8;
                    int32_t *l_2273 = &l_2250.f1;
                    int32_t *l_2274 = &l_2163;
                    int32_t *l_2275 = &g_127.f1;
                    int32_t *l_2276 = &g_4;
                    int32_t *l_2277 = (void*)0;
                    int32_t *l_2278[7] = {&l_2260[0],&l_2260[0],&l_2260[0],&l_2260[0],&l_2260[0],&l_2260[0],&l_2260[0]};
                    int i;
                    l_2283--;
                    (*l_2167) = (*l_2167);
                    if ((*g_509))
                        break;
                    return g_64;
                }
                else
                { 
                    int32_t *l_2286 = &g_107;
                    int32_t *l_2287 = &g_1920;
                    int32_t *l_2288 = &g_1588.f5.f1;
                    int32_t *l_2289 = &l_2147[2];
                    int32_t *l_2290 = (void*)0;
                    int32_t *l_2291 = &g_107;
                    int32_t *l_2292 = &g_103;
                    int32_t *l_2293 = &g_445.f5.f1;
                    int32_t *l_2294[6][1][3] = {{{(void*)0,&l_2219,&l_2219}},{{&l_2147[3],&l_2279,&l_2147[3]}},{{(void*)0,(void*)0,&l_2219}},{{&l_2260[0],&l_2279,&l_2260[0]}},{{(void*)0,&l_2219,&l_2219}},{{&l_2147[3],&l_2279,&l_2147[3]}}};
                    int32_t **l_2319[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_2319[i] = &l_2287;
                    ++l_2295;
                    (*l_2287) ^= (safe_rshift_func_uint8_t_u_s(((**l_2262) |= (~((safe_lshift_func_uint16_t_u_u((((((safe_add_func_uint16_t_u_u((l_2279 != 0x27C41B23L), 0x24CAL)) || (((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(0x3802L, (safe_rshift_func_int8_t_s_s((((*l_2258) = (&g_782 == ((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((void*)0 != l_2317), 0xDA1DB88194C3CCAFLL)), 4UL)) , &g_2232))) && (*l_2167)), (*l_2167))))), (*l_2286))) < (*g_633)) ^ (*l_2167))) <= l_2318) == 0UL) , g_253), 5)) >= 4294967287UL))), l_2283));
                    l_2320 = &l_2147[0];
                }
            }
        }
    }
    return g_10;
}



static int8_t  func_22(int8_t * p_23, int8_t * p_24)
{ 
    union U3 l_1620 = {9L};
    int32_t *l_1628 = (void*)0;
    int32_t l_1630 = (-1L);
    int32_t l_1631 = 1L;
    int32_t l_1634 = 0x0814ABCDL;
    int32_t l_1635 = 8L;
    int32_t l_1636 = (-2L);
    uint32_t l_1637 = 0UL;
    int32_t l_1645 = 0L;
    int32_t l_1646 = (-1L);
    int32_t l_1647 = 0xE70B603CL;
    int32_t l_1648 = 0x43B951CCL;
    int32_t l_1649 = 1L;
    int32_t l_1650 = 1L;
    int32_t l_1651 = 7L;
    int32_t l_1653 = 0x0D417469L;
    uint32_t l_1654 = 0x47189E63L;
    uint32_t *****l_1671 = (void*)0;
    uint64_t l_1674[7] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL};
    uint8_t l_1689 = 7UL;
    uint16_t l_1748 = 0x3DB0L;
    struct S1 l_1751 = {2L,2UL,0x81FCL,0L,0L,{0x6C8AL,-1L}};
    struct S0 **l_1788 = &g_1238;
    struct S0 l_1812 = {-1L,-2L};
    union U2 * const l_1814 = &g_628;
    int8_t l_1841 = 9L;
    int8_t l_1867 = 0x1DL;
    int8_t l_1907 = 0x69L;
    int32_t l_1921 = 0x9A4F4ED9L;
    int32_t l_1922[6];
    uint64_t *l_1948 = &g_683[3][1];
    int32_t l_1949 = 1L;
    uint8_t *l_1950 = &l_1620.f2;
    uint32_t l_1951 = 0xEC8E0421L;
    int64_t l_1952 = (-1L);
    int32_t *l_1953 = &l_1653;
    uint32_t ***l_1954 = &g_693;
    uint64_t l_1965 = 0x5E3DBE1259F35B54LL;
    int16_t ** const *l_1977[3][5][1] = {{{(void*)0},{&g_338[6][1][0]},{(void*)0},{(void*)0},{&g_338[6][1][0]}},{{(void*)0},{(void*)0},{&g_338[6][1][0]},{(void*)0},{(void*)0}},{{&g_338[6][1][0]},{(void*)0},{(void*)0},{&g_338[6][1][0]},{(void*)0}}};
    int16_t ** const **l_1976 = &l_1977[1][2][0];
    int32_t l_2114 = 0x02ECD410L;
    struct S1 l_2140 = {8L,65535UL,1L,0L,1L,{0L,0L}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1922[i] = 0x1EBFDAF1L;
    if ((func_25(p_24, &g_3[2][0]) != (((l_1620 , g_105) ^ ((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_1620.f2 ^ (!(safe_lshift_func_int8_t_s_u((l_1620.f0 == l_1620.f0), l_1620.f0)))), l_1620.f2)), l_1620.f0)) == (**g_290))) , 0x5CA27F4FC9AF8D6FLL)))
    { 
        int32_t **l_1629 = &g_728[4][1];
        int32_t *l_1632 = &g_329.f5.f1;
        int32_t *l_1633[6] = {&g_107,&g_329.f5.f1,&g_329.f5.f1,&g_107,&g_329.f5.f1,&g_329.f5.f1};
        int32_t l_1652 = (-1L);
        union U3 l_1659 = {0xECL};
        uint32_t ****l_1673 = &g_692[0];
        uint32_t *****l_1672 = &l_1673;
        uint16_t l_1675 = 0xE39AL;
        int i;
        (*l_1629) = l_1628;
        ++l_1637;
        for (g_445.f1 = (-22); (g_445.f1 >= 60); g_445.f1 = safe_add_func_int32_t_s_s(g_445.f1, 6))
        { 
            int16_t l_1642 = (-6L);
            int32_t l_1643 = 0L;
            int32_t l_1644[7][7][5] = {{{0x08FFB443L,(-1L),1L,(-1L),(-1L)},{(-3L),(-1L),3L,0x47C797ADL,0xE22B2B79L},{(-1L),0L,0x33962B8DL,(-2L),0xD4CAA67FL},{0xA410555AL,0x6248389BL,(-1L),0xB5EE9D18L,0L},{(-1L),0x0D2294EBL,0xAE47AE59L,0x30B2B029L,0x5C13881DL},{(-3L),0xCD1DD133L,0x838F6F2CL,0x78E6C082L,0x838F6F2CL},{0x559B5FB5L,(-1L),1L,4L,(-3L)}},{{0x73004BB0L,0L,0xC916EA78L,0x1DE56BFCL,3L},{(-8L),0x852CA773L,0xAF0D9CD0L,4L,0x5B2913F2L},{(-3L),9L,(-8L),0x2C781CF4L,3L},{(-1L),0xE36B75A8L,(-8L),1L,0x08FFB443L},{0xC5F289B9L,0x847AFFADL,0xAF0D9CD0L,0x9F805E44L,0x2C781CF4L},{0x5E7B1E14L,1L,0xC916EA78L,0L,0xAE47AE59L},{(-6L),0x847AFFADL,1L,0x37A2D615L,0L}},{{1L,0xE36B75A8L,(-8L),0xE8A4C147L,0xA410555AL},{1L,9L,0x5E7B1E14L,0xAE47AE59L,0xE8A4C147L},{(-6L),0x852CA773L,(-1L),0x579E3685L,0L},{0x5E7B1E14L,0L,(-1L),0x838F6F2CL,0xE8A4C147L},{0xC5F289B9L,(-1L),(-6L),0xA410555AL,0xA410555AL},{(-1L),9L,(-1L),0xA410555AL,0L},{(-3L),1L,0x3E65D065L,0x838F6F2CL,0xAE47AE59L}},{{(-8L),1L,0L,0x579E3685L,0x2C781CF4L},{0x73004BB0L,0x82B6B11BL,0x3E65D065L,0xAE47AE59L,0x08FFB443L},{0x559B5FB5L,(-7L),(-1L),0xE8A4C147L,3L},{0xD42F7AF2L,(-7L),(-6L),0x37A2D615L,0x5B2913F2L},{(-1L),0x82B6B11BL,(-1L),0L,3L},{0x3E65D065L,1L,(-1L),0x9F805E44L,(-3L)},{(-1L),1L,0x5E7B1E14L,1L,0x838F6F2CL}},{{0xD42F7AF2L,9L,(-8L),0x2C781CF4L,0x838F6F2CL},{0x559B5FB5L,(-1L),1L,4L,(-3L)},{0x73004BB0L,0L,0xC916EA78L,0x1DE56BFCL,3L},{(-8L),0x852CA773L,0xAF0D9CD0L,4L,0x5B2913F2L},{(-3L),9L,(-8L),0x2C781CF4L,3L},{(-1L),0xE36B75A8L,(-8L),1L,0x08FFB443L},{0xC5F289B9L,0x847AFFADL,0xAF0D9CD0L,0x9F805E44L,0x2C781CF4L}},{{0x5E7B1E14L,1L,0xC916EA78L,0L,0xAE47AE59L},{(-6L),0x847AFFADL,1L,0x37A2D615L,0L},{1L,0xE36B75A8L,(-8L),0xE8A4C147L,0xA410555AL},{1L,9L,0x5E7B1E14L,0xAE47AE59L,0xE8A4C147L},{(-6L),0x852CA773L,(-1L),0x579E3685L,0L},{0x5E7B1E14L,0L,(-1L),0x838F6F2CL,0xE8A4C147L},{0xC5F289B9L,(-1L),(-6L),0xA410555AL,0xA410555AL}},{{(-1L),9L,(-1L),0xA410555AL,0L},{(-3L),1L,0x3E65D065L,0x838F6F2CL,0xAE47AE59L},{4L,0xBB88E854L,(-6L),1L,1L},{0x051DEA07L,0xC483031FL,0x6248389BL,0x5E7B1E14L,0x559B5FB5L},{1L,0xB5EE9D18L,0x217F8B95L,0xF30AE8B6L,0L},{0xF285D944L,0xB5EE9D18L,0x516F4D07L,0xAF0D9CD0L,8L},{(-9L),0xC483031FL,0x33C1A762L,(-1L),(-6L)}}};
            int i, j, k;
            --l_1654;
        }
        l_1675 = (((((*g_444) , 0x3875E288L) , ((safe_mul_func_uint8_t_u_u(((l_1659 , (safe_sub_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((1UL <= (((safe_add_func_int64_t_s_s(((l_1620 , (safe_add_func_uint8_t_u_u(((+((*l_1632) == ((l_1672 = l_1671) != (void*)0))) == (*l_1632)), l_1645))) && l_1654), (*g_291))) < (*l_1632)) <= 0L)), (-10L))), 2L)) , 65535UL) > (*l_1632)), l_1674[0]))) , (*l_1632)), 0x28L)) >= 4294967289UL)) | 0x6C81L) && 0x042EL);
        (*l_1629) = &l_1646;
    }
    else
    { 
        uint32_t l_1684 = 2UL;
        int32_t * const *l_1687 = &l_1628;
        int64_t *l_1688 = &g_253;
        int32_t l_1690 = 9L;
        int32_t l_1691[3];
        int16_t l_1692 = 1L;
        int32_t *l_1694 = &l_1653;
        int64_t l_1722 = 1L;
        union U3 l_1743[5] = {{0xF9L},{0xF9L},{0xF9L},{0xF9L},{0xF9L}};
        uint8_t l_1770 = 0xDCL;
        int16_t l_1793[5][5] = {{1L,1L,1L,(-9L),1L},{0x2324L,(-1L),(-9L),0x2324L,(-9L)},{0x2324L,0x2324L,4L,1L,0x88A5L},{1L,0x88A5L,(-9L),(-9L),0x88A5L},{0x88A5L,(-1L),1L,0x88A5L,(-9L)}};
        struct S0 **l_1794 = &g_1238;
        const int16_t ** const ***l_1811 = &g_1807[3][3][0];
        union U2 *l_1813 = &g_628;
        uint32_t l_1825 = 18446744073709551609UL;
        uint32_t l_1848 = 0xEB86763DL;
        int64_t l_1857 = 0xC7BA9BDABD1C3CF5LL;
        int32_t l_1858[2][4] = {{0L,0L,0xC9E279A2L,0L},{0L,0x5B3B1DC2L,0x5B3B1DC2L,0L}};
        uint32_t l_1924 = 0xD6035474L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1691[i] = (-1L);
        if ((g_1112[1][0] & ((*g_1238) , ((safe_sub_func_int16_t_s_s((l_1690 &= (((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((0xD6C8L && 0x782AL), (l_1684 = (--g_1588.f1)))) , (((safe_add_func_int8_t_s_s((l_1684 & ((*l_1688) = ((void*)0 != l_1687))), 0x73L)) < l_1684) || 0x1AL)), 0xFF324C07L)) > 0xCA6B8F842E50D113LL) & l_1689)), l_1691[2])) != l_1692))))
        { 
            int32_t *l_1693 = &g_3[0][3];
            int32_t l_1696 = 0L;
            int32_t l_1700 = 0x47D8364EL;
            int32_t l_1702[5] = {0x8D8FC6B5L,0x8D8FC6B5L,0x8D8FC6B5L,0x8D8FC6B5L,0x8D8FC6B5L};
            int8_t l_1745 = 0x4EL;
            uint8_t *l_1777 = (void*)0;
            uint8_t *l_1778 = &g_506.f2;
            int32_t *l_1779 = &l_1634;
            struct S1 l_1782 = {1L,0xFD39L,3L,1L,-1L,{1L,-1L}};
            int16_t *l_1785 = (void*)0;
            int16_t *l_1786[6] = {&g_127.f0,&l_1782.f2,&l_1782.f2,&g_127.f0,&l_1782.f2,&l_1782.f2};
            uint16_t *l_1791[2];
            const union U2 *l_1792 = &g_211;
            uint8_t l_1795[5][5] = {{255UL,255UL,255UL,255UL,255UL},{1UL,0x46L,1UL,0x46L,1UL},{255UL,255UL,255UL,255UL,255UL},{0x0AL,0x46L,0x0AL,0x46L,0x0AL},{255UL,255UL,255UL,255UL,255UL}};
            int32_t l_1824 = 0L;
            union U3 *l_1831 = &l_1743[0];
            int32_t l_1877 = 0x3A43FB5BL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1791[i] = &l_1751.f1;
            for (g_662 = 0; (g_662 <= 1); g_662 += 1)
            { 
                int64_t l_1695 = 0x707157F69912FB50LL;
                int32_t l_1701[2];
                int32_t *l_1726 = &l_1634;
                int64_t l_1747 = 0x9DA1E28C1506F0E5LL;
                int16_t l_1769[6][3][6] = {{{0x5CD1L,(-9L),(-9L),0x5CD1L,0x6B14L,0x5CD1L},{0x5CD1L,0x6B14L,0x5CD1L,(-9L),(-9L),0x5CD1L},{(-9L),(-9L),(-9L),0x6E9BL,(-9L),(-9L)}},{{(-9L),0x6B14L,0x6E9BL,0x6E9BL,0x6B14L,(-9L)},{(-9L),(-9L),0x6E9BL,(-9L),(-9L),(-9L)},{0x5CD1L,(-9L),(-9L),0x5CD1L,0x6B14L,0x5CD1L}},{{0x5CD1L,0x6B14L,0x5CD1L,(-9L),(-9L),0x5CD1L},{(-9L),(-9L),(-9L),0x6E9BL,(-9L),(-9L)},{(-9L),0x6B14L,0x6E9BL,0x6E9BL,0x6B14L,(-9L)}},{{(-9L),(-9L),0x6E9BL,(-9L),(-9L),(-9L)},{0x5CD1L,(-9L),(-9L),0x5CD1L,0x6B14L,0x5CD1L},{0x5CD1L,0x6B14L,0x5CD1L,(-9L),(-9L),0x5CD1L}},{{(-9L),(-9L),(-9L),0x6E9BL,(-9L),(-9L)},{(-9L),0x6B14L,0x6E9BL,0x6E9BL,0x6B14L,(-9L)},{(-9L),(-9L),0x6E9BL,(-9L),(-9L),(-9L)}},{{0x5CD1L,(-9L),0x5CD1L,0x6E9BL,(-9L),0x6E9BL},{0x6E9BL,(-9L),0x6E9BL,0x5CD1L,0x5CD1L,0x6E9BL},{(-9L),(-9L),0x5CD1L,0x6B14L,0x5CD1L,(-9L)}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1701[i] = 4L;
                l_1694 = l_1693;
                for (l_1654 = 0; (l_1654 <= 2); l_1654 += 1)
                { 
                    int32_t *l_1697 = &g_103;
                    int32_t *l_1698 = &g_628.f3.f5.f1;
                    int32_t *l_1699[3][3][4] = {{{&l_1647,&g_628.f3.f5.f1,&l_1691[1],(void*)0},{&g_5,&l_1651,&g_3[0][0],(void*)0},{&l_1630,&g_628.f3.f5.f1,&g_5,&g_628.f3.f5.f1}},{{&g_103,(void*)0,&g_5,&g_4},{&l_1691[1],(void*)0,&l_1630,&l_1648},{&l_1651,(void*)0,&l_1648,&l_1691[1]}},{{&l_1651,(void*)0,&l_1630,&l_1630},{&l_1691[1],&l_1691[1],&g_5,&g_3[0][0]},{&g_103,&g_5,&g_5,(void*)0}}};
                    uint16_t l_1703 = 0x96BBL;
                    int16_t *l_1721 = &g_1112[0][1];
                    uint8_t l_1723[6] = {0x93L,0UL,0x93L,0x93L,0UL,0x93L};
                    int i, j, k;
                    --l_1703;
                    if (g_709[g_662][(l_1654 + 1)])
                        continue;
                    l_1698 = &l_1701[0];
                    if (g_683[l_1654][(g_662 + 1)])
                        continue;
                    l_1723[3] ^= ((*l_1698) = (safe_mod_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s(((((0xE904974C8CAB6E55LL <= ((safe_lshift_func_int8_t_s_s((&l_1674[1] != (l_1620 , l_1688)), 5)) ^ ((g_444 = (((((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((~(((*l_1721) = 0xF415L) & ((*l_1694) == l_1701[1]))) >= 0x1B97L), l_1695)), (*l_1697))) ^ l_1722), 0x5CL)), (*l_1694))) && 0x1337L) > (*l_1698)) && l_1695) , (void*)0)) != (void*)0))) | g_1588.f4) && (-2L)) < 0x43L), 8)) > (*l_1698)), 0x901D79C92A3752E4LL)));
                }
                (*l_1726) = (safe_lshift_func_int8_t_s_s((-2L), 2));
                (*l_1726) = 0xE62C426AL;
                if (((*l_1726) = (safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((*l_1693) ^ ((**g_632) ^= (safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s((*p_24), ((*l_1694) >= (((safe_mod_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((((l_1743[0] , (*l_1693)) , (((+(*l_1693)) == 0x01C981A3L) , g_127.f1)) , (*l_1693)), (*l_1726))) == 1L), (*l_1693))) & g_1099[1]) , (*l_1726))))) & 1L), 0x98A6L)))), (*l_1726))), (*l_1693))), 65531UL)) || (*l_1694)), l_1745))))
                { 
                    int32_t *l_1746[3][6][2] = {{{&l_1647,&g_445.f5.f1},{&l_1701[0],&g_445.f5.f1},{&l_1647,&g_445.f5.f1},{&l_1701[0],&g_445.f5.f1},{&l_1647,&g_445.f5.f1},{&l_1701[0],&g_445.f5.f1}},{{&l_1647,&g_445.f5.f1},{&l_1701[0],&g_445.f5.f1},{&l_1647,&g_445.f5.f1},{&l_1701[0],&g_445.f5.f1},{&l_1647,&g_445.f5.f1},{&l_1701[0],&g_445.f5.f1}},{{&l_1647,&g_445.f5.f1},{&l_1701[0],&g_445.f5.f1},{&l_1647,&g_445.f5.f1},{&l_1701[0],&g_445.f5.f1},{&l_1647,&g_445.f5.f1},{&l_1701[0],&g_445.f5.f1}}};
                    int i, j, k;
                    --l_1748;
                }
                else
                { 
                    int32_t *l_1752 = &g_105;
                    uint8_t *l_1755 = &g_566[0];
                    int32_t *l_1764 = &l_1701[0];
                    int32_t *l_1765 = &l_1650;
                    int32_t *l_1766 = &g_105;
                    int32_t *l_1767 = (void*)0;
                    int32_t *l_1768[4][1][7];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 7; k++)
                                l_1768[i][j][k] = &l_1701[0];
                        }
                    }
                    l_1694 = (l_1751 , l_1752);
                    (*l_1726) |= (((((g_1588 , ((((0xAF8E89BFL <= (((0x33L ^ ((safe_lshift_func_uint8_t_u_s((--(*l_1755)), g_10)) && (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((0xF924L != (safe_div_func_int32_t_s_s(1L, (*l_1752)))), 3)), (*l_1752))) < 0x3437240E08A09F4ALL) >= (*l_1752)))) >= (*l_1752)) ^ 3UL)) ^ 0L) == (*p_23)) < 0L)) , 18446744073709551606UL) <= g_1588.f1) | (*l_1693)) != (**g_290));
                    --l_1770;
                }
            }
            (*l_1779) = (((*l_1778) |= (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((*p_24), 0xC9L)), (*l_1693)))) ^ ((*l_1693) == (*l_1693)));
            if ((((safe_mod_func_int8_t_s_s((l_1782 , (safe_mul_func_int16_t_s_s(((*l_1779) = (*l_1694)), (!((l_1788 != ((((((((((((safe_lshift_func_uint16_t_u_u((l_1647 = l_1650), 1)) ^ (*l_1693)) && ((((*g_942) != l_1792) <= (*l_1693)) >= 1L)) ^ (*l_1693)) < l_1793[4][2]) != (*l_1693)) ^ (*l_1693)) ^ 18446744073709551615UL) & 0L) | 1L) >= (*l_1694)) , l_1794)) > (*g_291)))))), l_1795[4][2])) <= (*g_509)) > (*l_1694)))
            { 
                uint32_t l_1798 = 2UL;
                int32_t l_1826[1];
                union U3 *l_1827 = &g_506;
                int32_t *l_1833 = &l_1651;
                int32_t *l_1834 = (void*)0;
                int32_t *l_1835 = &g_127.f1;
                int32_t *l_1836[4][5][3] = {{{&l_1630,&l_1700,&l_1700},{&g_8,&l_1631,(void*)0},{(void*)0,&l_1630,&l_1651},{&g_8,&g_8,&l_1648},{&l_1630,(void*)0,&l_1630}},{{&l_1631,&g_8,&l_1631},{&l_1700,&l_1630,&l_1653},{&g_445.f5.f1,&l_1631,&l_1631},{&l_1653,&l_1700,&l_1630},{&g_445.f5.f1,&g_445.f5.f1,&l_1648}},{{&l_1653,&l_1653,&l_1651},{&g_445.f5.f1,&g_445.f5.f1,(void*)0},{&l_1700,&l_1653,&l_1700},{&l_1631,&g_445.f5.f1,&g_8},{&l_1630,&l_1700,&l_1700}},{{&g_8,&l_1631,(void*)0},{(void*)0,&l_1630,&l_1651},{&g_8,&g_8,&l_1648},{&l_1630,(void*)0,&l_1630},{&l_1631,&g_8,&l_1631}}};
                uint32_t l_1837 = 7UL;
                int8_t l_1840[4][5] = {{0x92L,0x19L,0x19L,0xE1L,0x19L},{0x19L,0x19L,1L,0xE1L,0x00L},{0x19L,0x92L,0x92L,0x19L,0x19L},{0x19L,0xE1L,0xA8L,0xA8L,0xE1L}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1826[i] = 0L;
                if ((*l_1694))
                { 
                    int32_t *l_1796 = &l_1700;
                    int32_t *l_1797[1][5][6] = {{{(void*)0,(void*)0,&l_1630,&l_1702[3],&l_1649,&l_1691[0]},{&l_1691[0],(void*)0,(void*)0,(void*)0,(void*)0,&l_1691[0]},{&l_1702[3],(void*)0,&l_1630,(void*)0,&l_1691[0],&l_1630},{&l_1696,&l_1702[3],&l_1702[3],&l_1649,&l_1702[3],&l_1702[3]},{&l_1696,&l_1630,&l_1649,(void*)0,&l_1702[1],(void*)0}}};
                    uint64_t *l_1815 = &g_1099[1];
                    int i, j, k;
                    ++l_1798;
                    (**l_1788) = (*g_1238);
                    if (g_10)
                        goto lbl_1832;
                    (**l_1788) = (**l_1788);
                    (*l_1796) &= (7UL ^ (!(((((*l_1815) = (0xD0CE383A0E8D831CLL | ((l_1798 > (safe_add_func_uint8_t_u_u(((*g_509) != (safe_rshift_func_int16_t_s_s(((l_1811 = g_1806) != (void*)0), 12))), ((func_33(&l_1691[2], l_1812) , l_1813) != l_1814)))) | (*l_1779)))) , 0xBED5D548L) , &l_1620) != (void*)0)));
                    (*l_1779) ^= (((((*l_1796) = (*l_1796)) , ((safe_div_func_int16_t_s_s((*l_1796), 0x6366L)) & ((*p_23) = 0x81L))) <= (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((((*l_1815) |= ((255UL < (l_1674[0] || (safe_lshift_func_uint8_t_u_s((*l_1693), 4)))) == 0xAE47L)) , (**g_290)) > g_329.f2), g_5)), l_1824))) ^ l_1825);
                }
                else
                { 
                    (*l_1779) = ((l_1826[0] &= (*l_1694)) , (*g_509));
                    return (*p_23);
                }
lbl_1832:
                (*l_1779) ^= (l_1827 == (((*p_23) && (safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_u((g_1512 , 0x12L), 4))))) , l_1831));
                --l_1837;
                ++g_1842;
            }
            else
            { 
                int32_t *l_1847 = &g_107;
                int32_t l_1856[2];
                uint16_t l_1859 = 0UL;
                int64_t l_1876 = 0xDDD2CD13E09CCF3CLL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1856[i] = 0x37EE09FFL;
                (*g_1238) = (*g_1238);
                if ((*l_1694))
                { 
                    uint32_t l_1845 = 1UL;
                    l_1845 = (-1L);
                }
                else
                { 
                    int32_t *l_1846 = &l_1696;
                    int32_t *l_1849 = &l_1702[3];
                    int32_t *l_1850 = &l_1782.f5.f1;
                    int32_t *l_1851 = (void*)0;
                    int32_t l_1852 = 0xB24C6421L;
                    int32_t *l_1853 = &g_127.f1;
                    int32_t *l_1854 = &l_1691[2];
                    int32_t *l_1855[6][6][1] = {{{(void*)0},{&l_1702[3]},{&g_107},{(void*)0},{&l_1751.f5.f1},{(void*)0}},{{&l_1634},{&l_1702[3]},{&l_1634},{(void*)0},{&l_1751.f5.f1},{(void*)0}},{{&g_107},{&l_1702[3]},{(void*)0},{&l_1702[3]},{&l_1751.f5.f1},{&l_1702[3]}},{{(void*)0},{&l_1702[3]},{&g_107},{(void*)0},{&l_1751.f5.f1},{(void*)0}},{{&l_1634},{&l_1702[3]},{&l_1634},{(void*)0},{&l_1751.f5.f1},{(void*)0}},{{&g_107},{&l_1702[3]},{(void*)0},{&l_1702[3]},{&l_1751.f5.f1},{&l_1702[3]}}};
                    int32_t **l_1862[4][2][6] = {{{&l_1847,(void*)0,&l_1628,(void*)0,&l_1847,&l_1847},{(void*)0,&l_1847,&l_1847,&l_1847,&l_1847,(void*)0}},{{&l_1846,(void*)0,(void*)0,&l_1847,(void*)0,(void*)0},{(void*)0,&l_1846,&l_1847,&l_1628,&l_1628,&l_1847}},{{(void*)0,(void*)0,&l_1628,&l_1847,&l_1847,&l_1847},{&l_1846,(void*)0,&l_1846,&l_1847,&l_1628,&l_1628}},{{(void*)0,&l_1846,&l_1846,(void*)0,(void*)0,&l_1847},{&l_1847,(void*)0,&l_1628,(void*)0,&l_1847,&l_1847}}};
                    int i, j, k;
                    (*l_1846) |= l_1634;
                    l_1694 = l_1847;
                    (*l_1694) |= ((*l_1779) = l_1848);
                    --l_1859;
                    l_1628 = &l_1856[1];
                }
                (*l_1847) = ((*l_1847) ^ (((*l_1847) && (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((*l_1694), (g_445.f1 = (*l_1779)))) || ((*p_23) = (l_1867 , (*p_23)))) & 1L), 13))) && l_1674[3]));
                l_1877 = ((*l_1847) = (((*g_291) , ((safe_add_func_uint32_t_u_u((*l_1694), (0x58L == ((*l_1694) , (((*l_1847) == (-2L)) <= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((*l_1778) = (safe_rshift_func_int16_t_s_u(l_1876, (*l_1779)))), (*l_1693))), (*l_1693)))))))) == (*l_1693))) , (*l_1693)));
            }
        }
        else
        { 
            int32_t l_1878 = 0xD4BCF251L;
            int32_t l_1884 = 0x93B97EEFL;
            int32_t l_1896[6] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
            struct S0 l_1902 = {0x46E0L,0x822F0C1CL};
            uint16_t l_1913[2][5] = {{0x16B5L,4UL,4UL,0x16B5L,4UL},{0x16B5L,0x16B5L,0x4E9DL,0x16B5L,0x16B5L}};
            int32_t *l_1915 = (void*)0;
            int32_t *l_1916 = &l_1884;
            int32_t *l_1917 = &l_1902.f1;
            int32_t *l_1918 = &l_1896[0];
            int32_t *l_1919[1];
            int8_t l_1923 = 0xB7L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1919[i] = &l_1649;
lbl_1927:
            if (l_1878)
            { 
                int32_t *l_1879 = &l_1646;
                int32_t *l_1880 = &l_1691[2];
                int32_t *l_1881 = &g_628.f3.f5.f1;
                int32_t *l_1882 = &g_103;
                int32_t *l_1883[6] = {&l_1631,&l_1631,&l_1631,&l_1631,&l_1631,&l_1631};
                uint64_t l_1906 = 0x2EC005B9E4AD159ALL;
                int i;
                ++g_1885;
                (*l_1880) |= (p_24 == (void*)0);
                for (l_1857 = 2; (l_1857 > (-25)); l_1857 = safe_sub_func_int32_t_s_s(l_1857, 6))
                { 
                    int8_t *l_1892 = (void*)0;
                    int8_t *l_1893 = &g_243;
                    int32_t *l_1894 = &l_1653;
                    int32_t **l_1895 = &l_1894;
                    uint64_t l_1897 = 18446744073709551615UL;
                    l_1694 = &l_1878;
                    (*l_1895) = ((safe_add_func_int8_t_s_s(((*l_1893) = ((*p_24) = (*p_24))), 246UL)) , l_1894);
                    (*l_1894) &= 0xA2EA0FC9L;
                    --l_1897;
                }
                (*l_1879) = (((safe_sub_func_int32_t_s_s(((*l_1882) = (((func_33(&l_1858[0][2], l_1902) , 0x05L) || ((+(((safe_add_func_int16_t_s_s(((l_1906 >= (l_1907 == (safe_div_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((*l_1882), l_1902.f0)) == g_1912) <= 0xE1FF13F4C55239A3LL), (*g_633))))) | (*p_24)), l_1902.f1)) != (*l_1694)) <= 0x4F68L)) && 2L)) , 1L)), l_1913[0][2])) < l_1896[1]) != 1UL);
            }
            else
            { 
                struct S1 **l_1914 = &g_444;
                (*l_1914) = &l_1751;
            }
            ++l_1924;
            if (g_329.f2)
                goto lbl_1927;
            return (*p_24);
        }
    }
    (*l_1953) = (safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((g_506.f2 == (((((((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((((&l_1674[0] == l_1948) , (*p_23)) & ((*l_1950) &= (l_1949 == ((*l_1814) , l_1907)))), l_1634)) , (*g_693)) != &l_1654), l_1748)), l_1951)), 0x71D9L)) != 7L) , (void*)0) == l_1814) < l_1689) , l_1952) > l_1751.f5.f1)), l_1631)) >= l_1651), l_1751.f0)), l_1841)) , 0xA9L) > 0x49L), l_1751.f5.f0)), 7)) || l_1674[0]), l_1867));
    if (((l_1954 != (l_1620 , (*g_691))) == (((((safe_add_func_uint64_t_u_u(g_1885, ((**g_290) >= g_709[0][0]))) , (*l_1953)) | (*l_1953)) <= (*l_1953)) || 1UL)))
    { 
        const int32_t *l_1957[3];
        const int32_t **l_1958 = &l_1957[0];
        int i;
        for (i = 0; i < 3; i++)
            l_1957[i] = &l_1631;
        (*l_1958) = l_1957[0];
    }
    else
    { 
        int32_t *l_1959 = &g_107;
        int32_t *l_1960 = &g_107;
        int32_t *l_1961 = &l_1647;
        int32_t *l_1962 = (void*)0;
        int32_t *l_1963 = (void*)0;
        int32_t *l_1964[3];
        uint8_t l_1984 = 0x30L;
        const int16_t ***l_1986 = (void*)0;
        const int16_t **** const l_1985 = &l_1986;
        union U2 *l_2029 = &g_2030;
        int16_t *l_2077[1];
        int64_t l_2080 = 0x5CA7DBC8B6976892LL;
        uint32_t **l_2108 = &g_694;
        struct S0 l_2111 = {-3L,0x1624665FL};
        int i;
        for (i = 0; i < 3; i++)
            l_1964[i] = &g_1588.f5.f1;
        for (i = 0; i < 1; i++)
            l_2077[i] = &l_1751.f2;
        l_1965--;
        if ((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s(g_1588.f5.f1, ((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((g_1327 < 0xF0502556C75538EDLL), ((*l_1950) &= ((l_1976 == ((0x21L == (safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s(l_1984, (*l_1961))), 3UL)), (*g_291)))) , l_1985)) && g_329.f5.f1)))), (*l_1953))) | 0xC4E7L))), (*l_1959))))
        { 
            int8_t l_2001[7][2][4] = {{{0x68L,0x76L,0x68L,0x76L},{0x68L,0x76L,0x68L,0x76L}},{{0x68L,0x76L,0x68L,0x76L},{0x68L,0x76L,0x68L,0x76L}},{{0x68L,0x76L,0x68L,0x76L},{0x68L,0x76L,0x68L,0x76L}},{{0x68L,0x76L,0x68L,0x76L},{0x68L,0x76L,0x68L,0x76L}},{{0x68L,0x76L,0x68L,0x76L},{0x68L,0x76L,0x68L,0x76L}},{{0x68L,0x76L,0x68L,0x76L},{0x68L,0x76L,0x68L,0x76L}},{{0x68L,0x76L,0x68L,0x76L},{0x68L,0x76L,0x68L,0x76L}}};
            int32_t l_2002 = 0x39C9E15DL;
            union U2 *l_2028 = (void*)0;
            int32_t l_2034[7] = {9L,4L,4L,9L,4L,4L,9L};
            union U3 l_2037 = {0x00L};
            int8_t *l_2053 = &l_1620.f0;
            int8_t **l_2052 = &l_2053;
            int32_t l_2060 = 0x0FE6E324L;
            int16_t *l_2076 = &g_2030.f1;
            uint16_t l_2115 = 0UL;
            int64_t *l_2136 = &g_2030.f3.f0;
            int i, j, k;
            if ((safe_sub_func_int64_t_s_s((!(((safe_add_func_int64_t_s_s(((!(*l_1961)) > ((safe_div_func_int16_t_s_s((((((*l_1959) && ((((*l_1960) != ((255UL > (safe_rshift_func_uint8_t_u_s((0x7D72674EL > ((*g_633) = (safe_sub_func_uint64_t_u_u(((g_1588.f3 , ((*g_633) != l_2001[4][1][3])) && (*l_1953)), (**g_290))))), 3))) | (*g_509))) , (*p_24)) <= 0xF6L)) <= (*l_1953)) | (*l_1953)) < (*l_1953)), (*l_1953))) >= g_1099[1])), (*g_291))) ^ (**g_290)) > l_2001[1][1][3])), 3L)))
            { 
                uint32_t l_2003[5][4] = {{4294967288UL,4294967288UL,4294967288UL,4294967288UL},{4294967288UL,4294967288UL,4294967288UL,4294967288UL},{4294967288UL,4294967288UL,4294967288UL,4294967288UL},{4294967288UL,4294967288UL,4294967288UL,4294967288UL},{4294967288UL,4294967288UL,4294967288UL,4294967288UL}};
                int i, j;
                --l_2003[0][0];
            }
            else
            { 
                int32_t *l_2020 = &l_1634;
                int32_t l_2032 = 0xF7BB24A2L;
                union U2 l_2069 = {0L};
                int16_t *l_2081[7] = {&g_445.f4,&g_445.f4,&g_445.f4,&g_445.f4,&g_445.f4,&g_445.f4,&g_445.f4};
                int8_t l_2100[7][3][5] = {{{0x88L,0xF3L,1L,(-5L),0L},{0L,0x5AL,(-5L),(-3L),5L},{8L,0xF3L,0x2EL,6L,0L}},{{0x40L,0x0FL,1L,0x40L,0L},{(-10L),0x40L,0x88L,0L,0x48L},{(-10L),0x78L,1L,0x78L,(-10L)}},{{0x40L,6L,1L,5L,0x0FL},{8L,1L,0x40L,(-1L),1L},{0L,0x78L,(-8L),6L,0x0FL}},{{0x88L,(-1L),6L,0L,(-10L)},{0x0FL,1L,0x40L,0L,0x48L},{0x78L,0xF3L,0x1FL,0L,0L}},{{(-5L),0x07L,(-5L),0L,0L},{8L,0x48L,0x88L,6L,5L},{(-1L),0x0FL,0x66L,(-1L),0L}},{{6L,(-1L),0x88L,5L,0xF3L},{(-10L),0x88L,(-5L),0x78L,6L},{(-1L),6L,0x1FL,0L,0x0FL}},{{1L,6L,0x40L,0x40L,6L},{0L,0x88L,6L,6L,1L},{0x78L,(-1L),(-8L),(-3L),(-10L)}}};
                int i, j, k;
                if (((((((safe_rshift_func_int8_t_s_u(((*p_24) = (safe_rshift_func_uint8_t_u_s(l_2001[5][1][0], (safe_sub_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_u(0x22E7L, (safe_lshift_func_int8_t_s_u(((*l_1953) = (safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((void*)0 == l_2020) || (((safe_rshift_func_uint8_t_u_s(((*l_2020) != (0xA04EL == 1L)), (*p_24))) == (*l_2020)) <= 0xA1714E68L)), g_103)), l_2001[2][0][1]))), l_2001[4][1][3])))) || g_662) & 0xF6L) == 0x6B59L) ^ 0UL), (*l_2020)))))), (*l_2020))) , 4294967295UL) || (*l_1961)) , (**l_1788)) , (*l_1953)) | 0x50694827L))
                { 
                    struct S0 l_2023 = {-1L,0x8B2FB158L};
                    int64_t *l_2033 = &g_111[0];
                    uint16_t *l_2040 = (void*)0;
                    uint16_t *l_2041 = &g_628.f3.f1;
                    uint16_t *l_2042 = &g_329.f1;
                    (*g_1238) = l_2023;
                    (*l_1959) |= (((safe_rshift_func_uint8_t_u_s(((*l_2020) = (((*p_24) ^= l_2023.f0) >= l_2001[4][1][1])), 0)) <= ((((safe_lshift_func_int16_t_s_u(((l_2029 = l_2028) != ((*g_942) = (*g_942))), ((l_2034[2] |= (((((*g_633) |= (l_2023.f1 = l_2023.f0)) , ((+((*l_2033) = (l_2032 == (*l_1961)))) ^ l_2023.f0)) & l_2002) || l_2001[4][1][3])) == 0x0EL))) <= 9UL) , l_2023.f0) <= l_2001[4][1][3])) <= l_2001[5][1][0]);
                    (*l_1953) = (safe_sub_func_int64_t_s_s((l_2037 , 0xF10BE231A8C0AFE2LL), ((*l_2033) = (safe_div_func_uint64_t_u_u(l_2023.f1, 0x33DAF417F9AFDA44LL)))));
                    (*l_1961) &= ((*l_2020) < (--(*l_2042)));
                }
                else
                { 
lbl_2099:
                    (*l_1953) = (l_2001[1][0][1] < (safe_rshift_func_int16_t_s_u(((*l_2020) = (safe_mod_func_uint16_t_u_u(0x5DA1L, 0x8169L))), (*l_1953))));
                    return (*l_1959);
                }
                l_2020 = &l_2034[1];
                if ((((((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(1UL)), ((*g_943) , (*l_2020)))) & (l_2052 == (void*)0)) > (safe_rshift_func_int8_t_s_s((((*l_1948) = (((l_2060 = (safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((*g_1238) , ((*l_1950) = 255UL)), (*l_2020))) & (*g_291)), 0x1FL))) >= 0L) & l_2002)) ^ g_1384), (*l_1953)))) >= (*l_2020)) == 0x28L))
                { 
                    uint8_t l_2061[4];
                    struct S1 l_2064[6][5] = {{{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}}},{{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}}},{{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}}},{{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}}},{{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}}},{{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}},{1L,65533UL,-1L,0L,0xBEABL,{0L,0x56C37FC0L}}}};
                    uint8_t *****l_2082 = (void*)0;
                    uint8_t *****l_2083 = (void*)0;
                    uint8_t *****l_2084 = &g_1516;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_2061[i] = 0x31L;
                    l_2061[0]++;
                    (*l_2084) = (((l_2064[3][3] , (safe_sub_func_uint8_t_u_u(((((((l_2060 = (l_2069 , (*g_509))) == (safe_div_func_int16_t_s_s(((-1L) <= (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(0L, (((((l_2077[0] = l_2076) == ((safe_rshift_func_int8_t_s_s(((*l_2053) &= (l_2080 ^ 255UL)), 7)) , l_2081[0])) >= l_2034[6]) >= (*l_1953)) && (*l_1961)))), l_2001[4][1][3]))), (*l_2020)))) ^ 0x6DE11D69C043CA38LL) < 0L) != 0x9653L) , (*l_1960)), (*l_1961)))) ^ 0xA0L) , &g_1517);
                    return (*p_23);
                }
                else
                { 
                    struct S0 ***l_2085 = &l_1788;
                    int32_t l_2086 = 0x4DD9CEC6L;
                    int64_t *l_2089[3];
                    int32_t l_2096[6] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2089[i] = &g_111[0];
                    (*l_1953) ^= (*l_2020);
                    (*l_2085) = l_1788;
                    if (g_1588.f4)
                        goto lbl_2097;
                    (*l_1959) = ((l_2086 == l_2086) | ((*l_1814) , ((1L & ((safe_sub_func_int64_t_s_s((*l_1953), l_2086)) ^ ((*l_1960) , (*l_2020)))) | 7UL)));
lbl_2097:
                    l_2096[5] |= ((((l_2086 ^= ((*p_23) & ((&g_1516 == &g_1516) & (*l_1953)))) && ((((safe_mul_func_int16_t_s_s(((void*)0 == (*g_691)), ((*l_2076) = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((*l_1953), (*l_2020))), (*l_1960)))))) | 0L) || 0x03458E53ADD1EB10LL) , g_248[2])) <= 0x14DAL) != (*l_1961));
                    (*l_1959) = (safe_unary_minus_func_uint64_t_u(((*l_1948) = ((l_2096[5] = 255UL) || (*l_2020)))));
                }
                if (l_1653)
                    goto lbl_2099;
                if ((*l_2020))
                { 
                    uint16_t l_2101 = 0x2781L;
                    l_2101--;
                }
                else
                { 
                    int8_t l_2104 = 0x86L;
                    uint32_t **l_2109[1][3];
                    uint32_t ***l_2110 = &l_2109[0][2];
                    int32_t * const l_2112 = &l_1647;
                    int32_t **l_2113 = &l_1960;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_2109[i][j] = &g_694;
                    }
                    (*l_1960) ^= (((l_2104 < ((safe_sub_func_uint64_t_u_u((l_1751 , (!((((**g_691) = l_2108) == ((*l_2110) = l_2109[0][2])) & l_2037.f0))), ((((l_2111 , (*l_1953)) , (*l_2020)) < 0xD42F5F243A6B221CLL) , l_2104))) , (*l_2020))) <= (*l_2020)) <= 4294967295UL);
                    (*l_2113) = l_2112;
                    l_2114 &= (*l_2112);
                }
            }
            --l_2115;
            l_2002 |= (((((*l_1953) = (((void*)0 == &g_291) || ((safe_mul_func_int16_t_s_s(((safe_div_func_int64_t_s_s(((*l_1953) <= (safe_lshift_func_int16_t_s_u((-9L), 7))), (safe_sub_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s(((*l_1959) = (safe_sub_func_int64_t_s_s(((*l_2136) = (65533UL & (1L > (((*l_1961) = (safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((*p_24) = 0xDEL), 6)) > l_2115), l_2001[4][1][3]))) ^ 0x5D36L)))), g_329.f1))), (*l_1953))) >= g_620), (*g_291))))) < l_2060), l_2037.f2)) & l_2034[2]))) > (-4L)) != l_2060) <= 0UL);
        }
        else
        { 
            struct S0 l_2137 = {6L,-4L};
            l_2111 = func_33(((*g_509) , l_1959), l_2137);
            (*l_1961) &= (safe_mod_func_int16_t_s_s((((*l_1953) & (l_2140 , ((((*l_1959) , &g_727[0]) == (void*)0) != (l_2137.f1 ^ g_3[0][0])))) , 2L), l_2137.f0));
        }
    }
    return (*p_24);
}



static uint64_t  func_25(int8_t * p_26, int32_t * p_27)
{ 
    int32_t *l_42 = &g_3[0][0];
    uint64_t l_43 = 18446744073709551615UL;
    int8_t *l_54 = (void*)0;
    struct S0 l_1402 = {2L,-1L};
    struct S1 l_1614 = {0L,0x601EL,0L,1L,-10L,{0x35A0L,-1L}};
    for (g_8 = (-9); (g_8 < 13); g_8++)
    { 
        int32_t *l_32 = &g_6;
        struct S1 *l_1587 = &g_1588;
        for (g_10 = 0; (g_10 <= 1); g_10 = safe_add_func_uint16_t_u_u(g_10, 9))
        { 
            int32_t *l_36 = &g_3[2][3];
            int32_t *l_1579 = (void*)0;
            int32_t *l_1580[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int16_t * const *l_1605 = &g_339[0];
            int16_t * const **l_1604[4][5];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1604[i][j] = &l_1605;
            }
            p_27 = l_32;
        }
        p_27 = l_32;
    }
    for (g_329.f5.f1 = 0; (g_329.f5.f1 != 0); g_329.f5.f1 = safe_add_func_int8_t_s_s(g_329.f5.f1, 7))
    { 
        for (l_1402.f1 = 0; (l_1402.f1 < (-4)); l_1402.f1 = safe_sub_func_uint8_t_u_u(l_1402.f1, 5))
        { 
            struct S0 l_1618[2][1][4] = {{{{0x8A97L,1L},{0x8A97L,1L},{0x8A97L,1L},{0x8A97L,1L}}},{{{0x8A97L,1L},{0x8A97L,1L},{0x8A97L,1L},{0x8A97L,1L}}}};
            int i, j, k;
            for (g_662 = (-18); (g_662 == 19); g_662++)
            { 
                int32_t l_1613[5] = {0x2943C9AFL,0x2943C9AFL,0x2943C9AFL,0x2943C9AFL,0x2943C9AFL};
                int8_t **l_1615 = &l_54;
                int8_t *l_1617 = &g_15;
                int8_t **l_1616 = &l_1617;
                struct S0 l_1619 = {-5L,0xAB78B65CL};
                int i;
                (*g_1238) = l_1402;
                if (l_1613[0])
                    break;
                if ((*p_27))
                    break;
                if (l_1613[0])
                    break;
                l_1619 = (l_1614 , ((((*l_1615) = p_26) == ((*l_1616) = &g_243)) , ((*g_1238) = (g_329.f4 , l_1618[0][0][3]))));
            }
        }
    }
    return g_248[1];
}



static struct S0  func_33(int32_t * p_34, struct S0  p_35)
{ 
    int16_t l_1419 = (-1L);
    const struct S1 l_1420 = {0L,0xC0B1L,0xFF8FL,0xB18299A6L,0L,{0xF700L,0xA800E5CEL}};
    int32_t l_1428 = 1L;
    struct S0 l_1430 = {0x27B2L,-7L};
    int32_t l_1432 = 0xC67172A9L;
    int32_t l_1433 = 0L;
    int32_t l_1440 = 0L;
    int32_t l_1441[6] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
    union U2 l_1465 = {1L};
    int32_t l_1511 = 8L;
    int64_t l_1533 = (-9L);
    uint32_t **l_1551 = &g_694;
    int32_t **l_1568 = &g_728[4][1];
    int64_t l_1578[4][6] = {{0x8653296EB68B70F2LL,0x40D3F9E84998D12DLL,0x8653296EB68B70F2LL,0x8C8CBBA96409EA26LL,0x40D3F9E84998D12DLL,3L},{0x8653296EB68B70F2LL,0x532A5699D155EEC7LL,0x8C8CBBA96409EA26LL,0x8C8CBBA96409EA26LL,0x532A5699D155EEC7LL,0x8653296EB68B70F2LL},{0x8653296EB68B70F2LL,0x88B882D0C636A403LL,3L,0x8C8CBBA96409EA26LL,0x88B882D0C636A403LL,0x8C8CBBA96409EA26LL},{0x8653296EB68B70F2LL,0x40D3F9E84998D12DLL,0x8653296EB68B70F2LL,0x8C8CBBA96409EA26LL,0x40D3F9E84998D12DLL,3L}};
    int i, j;
    for (g_506.f0 = 1; (g_506.f0 >= 0); g_506.f0 -= 1)
    { 
        struct S0 l_1403 = {0x8242L,1L};
        return l_1403;
    }
    for (g_243 = 23; (g_243 < 21); --g_243)
    { 
        int32_t *l_1412 = &g_103;
        struct S1 *l_1414 = (void*)0;
        int32_t l_1427 = 1L;
        int32_t l_1437 = 0x2AA9F138L;
        int32_t l_1438 = 0xD7F984D1L;
        int32_t l_1442 = 0x63C2CF48L;
        int32_t l_1443 = 0x7F027269L;
        int32_t l_1444 = 7L;
        int32_t l_1446 = 0xA9CA9D5DL;
        int32_t l_1447 = 0x1CBA4DB9L;
        int32_t l_1448 = 1L;
        uint64_t l_1486 = 0xB8B86A91E7376865LL;
        int32_t l_1503 = 0L;
        int32_t l_1509[3][1];
        uint8_t *l_1536 = &g_506.f2;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1509[i][j] = 0x25B6BA3AL;
        }
        (*l_1412) |= (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0xBE1BL, 12)), 3)) , p_35.f0), 0x737DL));
        for (g_332 = 0; (g_332 <= 0); g_332 += 1)
        { 
            struct S1 *l_1413 = (void*)0;
            int32_t l_1434 = 0x127AC23CL;
            int32_t l_1435 = 7L;
            int32_t l_1436 = 0L;
            int32_t l_1439[5][2][5] = {{{0x4EC780BCL,0x6F349D6CL,0x4EC780BCL,0x8EF0353AL,1L},{(-1L),0x317E6878L,0x4EC780BCL,1L,0x8EF0353AL}},{{(-1L),0x6F349D6CL,0L,1L,1L},{0x4EC780BCL,0x6F349D6CL,0x4EC780BCL,0x8EF0353AL,1L}},{{(-1L),0x317E6878L,0x4EC780BCL,1L,0x8EF0353AL},{(-1L),0x6F349D6CL,0L,1L,1L}},{{0x4EC780BCL,0x6F349D6CL,0x4EC780BCL,0x8EF0353AL,1L},{(-1L),0x317E6878L,0x4EC780BCL,1L,0x8EF0353AL}},{{(-1L),0x6F349D6CL,0L,1L,1L},{0x4EC780BCL,0x6F349D6CL,0x4EC780BCL,0x8EF0353AL,1L}}};
            uint64_t l_1449[2][2];
            union U2 **l_1475 = (void*)0;
            struct S0 l_1487 = {0x72E9L,0x9733B42AL};
            int16_t l_1506[5][7] = {{0xC52AL,0xD899L,0xC52AL,1L,1L,0xC52AL,0xD899L},{1L,0xD899L,1L,1L,0xD899L,1L,0xD899L},{0xC52AL,1L,1L,0xC52AL,0xD899L,0xC52AL,1L},{0x2995L,0x2995L,1L,1L,1L,0x2995L,0x2995L},{0x2995L,1L,1L,1L,0x2995L,0x2995L,1L}};
            int8_t l_1507 = 0L;
            uint8_t ** const **l_1515 = (void*)0;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1449[i][j] = 0x66C481CD3D524578LL;
            }
            for (g_127.f0 = 0; (g_127.f0 <= 0); g_127.f0 += 1)
            { 
                if (((p_35.f0 || (l_1413 == (l_1414 = l_1414))) == (**g_290)))
                { 
                    return (*g_1238);
                }
                else
                { 
                    int i;
                    p_35.f1 |= 0L;
                    return p_35;
                }
            }
        }
        if (((--(*l_1536)) ^ 1UL))
        { 
            (*l_1412) &= (*p_34);
            if ((*p_34))
                break;
            return (*g_1238);
        }
        else
        { 
            uint16_t l_1548 = 0x47C3L;
            uint32_t **l_1552 = &g_694;
            uint32_t ***l_1553 = &l_1552;
            uint8_t l_1562[3];
            uint16_t **l_1566 = (void*)0;
            int32_t l_1570 = 0L;
            int32_t l_1571[5][7][1] = {{{0x8AE11719L},{(-1L)},{1L},{(-1L)},{0x8AE11719L},{1L},{(-1L)}},{{(-1L)},{1L},{0x8AE11719L},{(-1L)},{1L},{(-1L)},{0x8AE11719L}},{{1L},{(-1L)},{(-1L)},{1L},{0x8AE11719L},{(-1L)},{1L}},{{(-1L)},{0x8AE11719L},{1L},{(-1L)},{(-1L)},{1L},{0x8AE11719L}},{{(-1L)},{1L},{(-1L)},{0x8AE11719L},{1L},{(-1L)},{(-1L)}}};
            uint8_t l_1575 = 0x1FL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1562[i] = 0xBBL;
            for (p_35.f1 = 0; (p_35.f1 <= 27); p_35.f1++)
            { 
                union U2 *l_1543 = &g_628;
                int32_t *l_1545 = &l_1441[1];
                int32_t *l_1546 = &l_1427;
                int32_t *l_1547[4][3] = {{&l_1447,&l_1441[5],&l_1447},{&g_105,&l_1442,&g_105},{&l_1447,&l_1441[5],&l_1447},{&g_105,&l_1442,&g_105}};
                int i, j;
                (*g_1238) = p_35;
                for (g_506.f3 = 14; (g_506.f3 < 6); g_506.f3 = safe_sub_func_int16_t_s_s(g_506.f3, 8))
                { 
                    int32_t **l_1544[6] = {&g_728[4][1],&g_728[4][1],&g_728[4][1],&g_728[4][1],&g_728[4][1],&g_728[4][1]};
                    int i;
                    (*g_942) = l_1543;
                    l_1412 = &l_1503;
                    (*g_942) = (*g_942);
                }
                ++l_1548;
                (*g_1238) = (*g_1238);
            }
            if (((((**g_691) = l_1551) == ((*l_1553) = l_1552)) && (safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((p_35.f0 , (((*l_1412) & ((((((p_35.f0 > (-1L)) , (((((((safe_sub_func_uint16_t_u_u(l_1548, p_35.f1)) , 1L) <= p_35.f0) != 0x934A5115763B967ALL) ^ p_35.f1) , l_1562[1]) < p_35.f0)) , p_35.f0) | l_1420.f1) < g_329.f0) ^ 0x97L)) && 1UL)), 1)), 0x349CL)), g_111[0]))))
            { 
                for (g_445.f2 = 0; (g_445.f2 == 26); g_445.f2 = safe_add_func_uint16_t_u_u(g_445.f2, 1))
                { 
                    return p_35;
                }
                return p_35;
            }
            else
            { 
                int32_t l_1567 = (-8L);
                int32_t l_1569 = 1L;
                int32_t l_1572 = (-1L);
                int32_t l_1573 = (-1L);
                int32_t l_1574 = 0xA983AECAL;
                for (g_101 = 0; (g_101 <= 1); g_101 += 1)
                { 
                    int32_t ***l_1565[4][5] = {{&g_727[0],&g_727[0],&g_727[0],&g_727[0],&g_727[0]},{&g_727[0],&g_727[0],&g_727[0],&g_727[0],&g_727[0]},{&g_727[0],&g_727[0],&g_727[0],&g_727[0],&g_727[0]},{&g_727[0],&g_727[0],&g_727[0],&g_727[0],&g_727[0]}};
                    int i, j;
                    l_1569 = ((*l_1412) = ((g_727[0] = &p_34) == ((l_1567 ^= (l_1566 == ((*g_1298) = (*g_1298)))) , l_1568)));
                    ++l_1575;
                }
            }
        }
    }
    (*l_1568) = p_34;
    (*l_1568) = (l_1420 , (l_1578[3][4] , &l_1432));
    return l_1420.f5;
}



static uint32_t  func_46(uint64_t  p_47, int32_t * p_48, int32_t  p_49)
{ 
    int32_t *l_1013 = (void*)0;
    int64_t *l_1055[4][4][1] = {{{&g_329.f0},{&g_211.f0},{&g_211.f0},{&g_329.f0}},{{&g_111[0]},{&g_329.f0},{&g_211.f0},{&g_211.f0}},{{&g_329.f0},{&g_111[0]},{&g_329.f0},{&g_211.f0}},{{&g_211.f0},{&g_329.f0},{&g_111[0]},{&g_329.f0}}};
    int64_t **l_1054 = &l_1055[3][2][0];
    int16_t ****l_1082 = &g_1037[0][2][3];
    int32_t l_1100 = 0x5965C780L;
    int32_t l_1107 = 0x2BC91E46L;
    uint64_t l_1115 = 8UL;
    int32_t l_1133 = 0x25C0B524L;
    int32_t l_1156 = 1L;
    int32_t l_1159 = 0x47237C55L;
    uint16_t l_1161 = 0x8F3DL;
    uint16_t *l_1188 = &g_278;
    uint16_t ** const l_1187 = &l_1188;
    uint8_t ***l_1228 = &g_719;
    int32_t ***l_1251 = &g_727[0];
    struct S1 * const l_1330[3] = {&g_445,&g_445,&g_445};
    int32_t l_1343 = 1L;
    int32_t l_1344 = 0x67EB61BEL;
    union U2 l_1391 = {1L};
    int i, j, k;
    for (g_244 = 1; (g_244 >= 0); g_244 -= 1)
    { 
        uint32_t * const **l_1027 = &g_632;
        int16_t ****l_1041 = &g_1037[0][4][3];
        int32_t l_1050 = 0xAE069D45L;
        uint16_t *l_1070 = &g_10;
        uint16_t **l_1069 = &l_1070;
        int32_t l_1073[6][2][7];
        int32_t l_1087[6][1] = {{(-1L)},{8L},{8L},{(-1L)},{8L},{8L}};
        uint64_t l_1088 = 0x149AA85819860080LL;
        int32_t l_1123 = 0x584D6448L;
        int64_t l_1127 = 7L;
        int16_t l_1140 = (-3L);
        union U3 l_1173 = {2L};
        uint8_t ***l_1229 = &g_719;
        const uint32_t l_1257 = 0UL;
        struct S1 l_1275 = {-1L,1UL,0xD8ACL,0x26F01D0FL,-6L,{0xE18EL,0xA64CA0A5L}};
        struct S1 **l_1329[1];
        int32_t l_1383 = (-1L);
        int32_t l_1385 = 0xD4EFB6E5L;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 7; k++)
                    l_1073[i][j][k] = 1L;
            }
        }
        for (i = 0; i < 1; i++)
            l_1329[i] = &g_444;
        l_1013 = l_1013;
    }
    return g_329.f2;
}



static int32_t  func_50(int32_t * p_51, int8_t * p_52, int8_t * p_53)
{ 
    uint32_t l_61 = 0xBD85DD72L;
    const int32_t *l_65[6] = {(void*)0,&g_4,(void*)0,(void*)0,&g_4,(void*)0};
    int16_t l_838 = 0L;
    int32_t *l_839[4];
    int64_t l_840 = (-7L);
    const uint8_t l_841[2] = {0xBBL,0xBBL};
    const struct S0 l_842 = {0x6F8FL,0xC78CD19DL};
    struct S0 *l_843 = (void*)0;
    struct S0 *l_844[4];
    struct S0 l_845[1] = {{-1L,8L}};
    uint16_t l_846 = 0xB255L;
    int32_t l_852 = 3L;
    const int32_t l_862 = 0L;
    uint8_t *l_869 = &g_566[3];
    uint8_t **l_868[6];
    uint16_t l_882 = 0x4EF5L;
    uint16_t *l_906 = &l_846;
    uint16_t **l_905 = &l_906;
    uint16_t l_951 = 0UL;
    int16_t ***l_954 = (void*)0;
    int64_t *l_973 = &g_211.f0;
    int64_t **l_972 = &l_973;
    const int32_t **l_1012 = &g_509;
    int i;
    for (i = 0; i < 4; i++)
        l_839[i] = &g_628.f3.f5.f1;
    for (i = 0; i < 4; i++)
        l_844[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_868[i] = &l_869;
    l_840 &= ((func_55(l_61, &g_15, (((g_3[2][5] != l_61) & (g_64 = ((safe_mod_func_int64_t_s_s(g_8, l_61)) == ((l_61 <= 0xDEL) | l_61)))) < l_61), &g_3[0][0], l_65[5]) != 0xFDL) < l_838);
    l_845[0] = (l_841[0] , l_842);
    if (l_846)
    { 
        uint32_t l_849 = 1UL;
        uint16_t *l_855 = &g_445.f1;
        union U3 l_860 = {0L};
        uint16_t *l_861 = &g_211.f3.f1;
        int32_t l_863 = 0x7E8C1D81L;
        int32_t l_864 = (-1L);
        uint8_t **l_871[3];
        int8_t l_888 = (-1L);
        struct S1 *l_925 = &g_445;
        int32_t l_931 = (-1L);
        uint32_t l_952 = 0x0A989E7FL;
        int i;
        for (i = 0; i < 3; i++)
            l_871[i] = &l_869;
        l_864 = (safe_add_func_int16_t_s_s(l_849, ((((*p_52) = (safe_div_func_int64_t_s_s((((l_849 <= 0x12L) != l_849) >= 0x235BA34DL), l_852))) == ((l_863 &= ((safe_lshift_func_uint16_t_u_s(((*l_855)--), ((safe_rshift_func_uint16_t_u_u(((*l_861) = (l_860 , g_105)), 3)) == l_862))) != (*p_51))) , l_863)) == 0x2BC9L)));
        for (g_107 = (-13); (g_107 >= 11); g_107++)
        { 
            int8_t l_870 = 0x00L;
            int64_t *l_895 = &g_628.f0;
            int32_t * const l_903[6][3][1] = {{{&g_103},{&g_329.f5.f1},{&g_103}},{{&g_329.f5.f1},{&g_103},{&g_329.f5.f1}},{{&g_103},{&g_329.f5.f1},{&g_103}},{{&g_329.f5.f1},{&g_103},{&g_329.f5.f1}},{{&g_103},{&g_329.f5.f1},{&g_103}},{{&g_329.f5.f1},{&g_103},{&g_329.f5.f1}}};
            uint8_t l_932[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_932[i] = 0xF6L;
            if ((*p_51))
            { 
                int8_t l_867 = 0x8EL;
                int16_t *l_875 = &g_628.f3.f5.f0;
                int32_t l_876 = 0x0F230A83L;
                if (l_867)
                    break;
                l_876 = ((l_860 , (l_868[1] != (l_870 , l_871[1]))) < (safe_div_func_int16_t_s_s((((((~0xCFL) > ((*l_875) = (l_860.f2 ^ l_867))) , (*g_291)) | (*g_291)) ^ l_867), l_867)));
            }
            else
            { 
                int32_t l_877 = 0xFC0FED8DL;
                if (l_877)
                    break;
                l_864 = (l_870 != l_870);
                l_877 |= l_864;
                for (g_329.f5.f1 = 0; (g_329.f5.f1 <= 3); g_329.f5.f1 += 1)
                { 
                    uint8_t l_883[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_883[i] = 247UL;
                    l_888 &= (safe_mul_func_uint8_t_u_u((g_506 , (((safe_sub_func_int8_t_s_s((*p_52), (9UL != (l_882 >= (l_883[0] & (((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(l_883[0], (-7L))), l_883[0])) ^ 0xBF44933AL) <= 0UL)))))) , l_844[g_329.f5.f1]) != (void*)0)), (*p_52)));
                    if ((*p_51))
                        continue;
                }
            }
            if ((*p_51))
                continue;
            for (g_329.f1 = 0; (g_329.f1 <= 2); g_329.f1 += 1)
            { 
                int64_t *l_894 = &g_329.f0;
                int64_t **l_893 = &l_894;
                int16_t *** const l_899[3] = {&g_338[5][0][0],&g_338[5][0][0],&g_338[5][0][0]};
                int32_t l_900[1];
                int32_t l_901[5][6][7] = {{{(-5L),0x13F00FB3L,(-1L),0xE518CEE3L,0xA57374D1L,0x9C0296E3L,0x715E185AL},{0x354CFBD4L,1L,7L,0xCC180A4FL,0xCC180A4FL,7L,1L},{0x4D16CA57L,0xEED80D64L,(-1L),0x9785A84BL,0L,0x9C0296E3L,0L},{0x2F85340DL,1L,0L,0x53FE31D1L,0xCC180A4FL,0L,0x3F907280L},{0x4D16CA57L,0x13F00FB3L,9L,0x9785A84BL,0xA57374D1L,(-10L),0L},{0x354CFBD4L,0x3F907280L,0L,0xCC180A4FL,0x53FE31D1L,0L,1L}},{{(-5L),0x13F00FB3L,(-1L),0xE518CEE3L,0xA57374D1L,0x9C0296E3L,0x715E185AL},{0x354CFBD4L,1L,7L,0xCC180A4FL,0xCC180A4FL,7L,1L},{0x4D16CA57L,0xEED80D64L,(-1L),0x9785A84BL,0L,0x9C0296E3L,0L},{0x2F85340DL,1L,0L,0x53FE31D1L,0xCC180A4FL,0L,0x3F907280L},{0x4D16CA57L,0x13F00FB3L,9L,0x9785A84BL,0xA57374D1L,(-10L),0L},{0x354CFBD4L,0x3F907280L,0L,0xCC180A4FL,0x53FE31D1L,0L,1L}},{{(-5L),0x13F00FB3L,(-1L),0xE518CEE3L,0xA57374D1L,0x9C0296E3L,0x715E185AL},{0x354CFBD4L,1L,7L,0xCC180A4FL,0xCC180A4FL,7L,1L},{0x4D16CA57L,0xEED80D64L,(-1L),0x9785A84BL,0L,0x9C0296E3L,0L},{0x2F85340DL,1L,0L,0x53FE31D1L,0xCC180A4FL,0L,0x3F907280L},{0x4D16CA57L,0x13F00FB3L,9L,0x9785A84BL,0xA57374D1L,(-10L),0L},{0x354CFBD4L,0x3F907280L,1L,0x2F85340DL,1L,1L,0xD3B7FB94L}},{{(-7L),0x460A08D8L,0x3150BED2L,1L,(-5L),(-1L),(-1L)},{0x01D4DB0FL,0xD3B7FB94L,0xCC180A4FL,0x2F85340DL,0x2F85340DL,0xCC180A4FL,0xD3B7FB94L},{0x5BA14761L,0L,0x3150BED2L,0xE2EA8ED6L,8L,(-1L),(-1L)},{0x21137411L,0xD3B7FB94L,1L,1L,0x2F85340DL,1L,0x1D42669CL},{0x5BA14761L,0x460A08D8L,0xA57374D1L,0xE2EA8ED6L,(-5L),0x9785A84BL,(-1L)},{0x01D4DB0FL,0x1D42669CL,1L,0x2F85340DL,1L,1L,0xD3B7FB94L}},{{(-7L),0x460A08D8L,0x3150BED2L,1L,(-5L),(-1L),(-1L)},{0x01D4DB0FL,0xD3B7FB94L,0xCC180A4FL,0x2F85340DL,0x2F85340DL,0xCC180A4FL,0xD3B7FB94L},{0x5BA14761L,0L,0x3150BED2L,0xE2EA8ED6L,8L,(-1L),(-1L)},{0x21137411L,0xD3B7FB94L,1L,1L,0x2F85340DL,1L,0x1D42669CL},{0x5BA14761L,0x460A08D8L,0xA57374D1L,0xE2EA8ED6L,(-5L),0x9785A84BL,(-1L)},{0x01D4DB0FL,0x1D42669CL,1L,0x2F85340DL,1L,1L,0xD3B7FB94L}}};
                int32_t l_930 = 0x3F793F9CL;
                union U2 ***l_944 = (void*)0;
                union U2 **l_946[2];
                union U2 ***l_945 = &l_946[0];
                union U3 l_949 = {0xEFL};
                uint32_t l_950 = 18446744073709551614UL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_900[i] = 1L;
                for (i = 0; i < 2; i++)
                    l_946[i] = &g_943;
                if ((safe_add_func_int32_t_s_s((0xEC856D8FL & (l_900[0] = (255UL | (safe_mod_func_int16_t_s_s((((*l_893) = (void*)0) != l_895), (+(safe_add_func_int8_t_s_s(((0UL | 0x4EL) == (l_899[1] == (void*)0)), 0xCAL)))))))), 4294967295UL)))
                { 
                    int32_t **l_902 = &l_839[1];
                    int32_t **l_904 = &l_839[1];
                    uint16_t ***l_907 = (void*)0;
                    uint16_t ***l_908 = &l_905;
                    const union U2 l_917 = {0x5C7AAD98492C1B65LL};
                    struct S1 **l_926 = &g_444;
                    int i, j;
                    l_901[2][4][0] ^= g_683[(g_329.f1 + 1)][g_329.f1];
                    (*l_902) = (g_683[(g_329.f1 + 1)][g_329.f1] , p_51);
                    (*l_904) = l_903[3][0][0];
                    (*l_908) = l_905;
                    (*l_926) = ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((l_864 = (safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(((l_917 , (4294967295UL & (safe_mod_func_int8_t_s_s(((g_920 = g_920) != (void*)0), (safe_sub_func_int16_t_s_s(0L, (0x9D7D6C50A9B8FCB4LL | ((((*l_895) &= ((safe_rshift_func_int8_t_s_s(0xD6L, 5)) , l_900[0])) | g_211.f0) | l_900[0])))))))) == g_109), l_900[0])) != 65535UL), l_863))) , (void*)0) != p_53), 1)), l_888)) , l_925);
                }
                else
                { 
                    struct S0 l_927 = {0xA797L,0xF96647E5L};
                    int32_t l_928[4] = {(-4L),(-4L),(-4L),(-4L)};
                    int32_t l_929 = 0L;
                    int i;
                    g_329.f5 = l_927;
                    l_932[0]--;
                }
                l_931 &= ((+(safe_add_func_int32_t_s_s(l_900[0], (((safe_mul_func_uint32_t_u_u((*g_633), ((((l_860 , (safe_add_func_uint16_t_u_u((g_942 != ((*l_945) = &g_943)), (((safe_mul_func_int8_t_s_s(((*g_444) , (l_949 , l_901[4][2][4])), l_950)) , &g_127) == (void*)0)))) , (*l_925)) , (*p_51)) != 1UL))) , l_849) ^ l_900[0])))) > (**g_290));
                for (g_127.f1 = 0; (g_127.f1 <= 2); g_127.f1 += 1)
                { 
                    l_951 |= (*p_51);
                    return g_10;
                }
            }
        }
        return l_952;
    }
    else
    { 
        int64_t l_953 = (-3L);
        int16_t ****l_955 = &l_954;
        int32_t l_961 = (-2L);
        struct S1 l_1003 = {0x5FC3BFF80EE6DD29LL,0UL,0x2E40L,1L,0xF8A9L,{0x97C2L,0L}};
        uint8_t **l_1005 = &l_869;
        l_961 = (l_953 ^ ((&g_338[6][1][0] == ((*l_955) = l_954)) ^ (+((*g_444) , (safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(((*p_52) = (0x7E12L >= (l_953 == (l_953 > 0L)))), l_953)) < 1UL), l_953))))));
        p_51 = p_51;
        for (g_445.f4 = 2; (g_445.f4 >= 0); g_445.f4 -= 1)
        { 
            uint32_t ** const *l_968 = &g_693;
            uint32_t l_969 = 18446744073709551615UL;
            int32_t l_970 = 0xCDB52DE6L;
            int32_t l_971 = 4L;
            uint8_t *l_974 = &g_566[1];
            uint64_t l_998 = 0UL;
            int16_t **l_1004 = (void*)0;
            uint32_t l_1006 = 0x9CC141CBL;
            l_961 = g_962;
            l_961 = ((((*l_906) = (0x5F631C38L != (!(l_971 = (l_970 = (((safe_div_func_int32_t_s_s((safe_mul_func_int64_t_s_s(9L, (p_53 != &g_566[1]))), 0x66ADE1D2L)) , (l_968 != (*g_691))) >= l_969)))))) , l_972) == &l_973);
            for (g_506.f3 = 0; (g_506.f3 <= 2); g_506.f3 += 1)
            { 
                uint64_t l_979[2][3][1] = {{{0x90C36443D8F79787LL},{18446744073709551610UL},{0x90C36443D8F79787LL}},{{18446744073709551610UL},{0x90C36443D8F79787LL},{18446744073709551610UL}}};
                int32_t l_1008 = 8L;
                uint32_t ****l_1010 = &g_692[0];
                uint32_t *****l_1011 = &l_1010;
                int i, j, k;
                if (((0UL && (((l_974 != p_53) != (safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s((((l_979[0][2][0] >= l_970) != (l_979[0][2][0] != (safe_add_func_uint8_t_u_u((((l_979[1][2][0] || (*g_509)) || l_961) != l_969), l_970)))) || 3UL), (*p_51))), g_506.f2))) <= l_970)) ^ l_971))
                { 
                    int32_t *l_982[7][7][4] = {{{&g_127.f1,(void*)0,&g_105,&g_3[2][3]},{&g_3[0][1],&g_3[0][0],&g_3[0][2],&g_107},{(void*)0,&g_329.f5.f1,&g_103,&g_5},{&l_971,&g_3[2][3],&g_103,&g_3[2][4]},{&g_103,&l_961,&l_970,&l_845[0].f1},{(void*)0,&g_8,&g_445.f5.f1,&l_961},{&g_3[0][5],&l_845[0].f1,&g_445.f5.f1,&g_3[0][1]}},{{&g_329.f5.f1,&g_3[0][2],&l_970,&g_5},{&g_107,&g_445.f5.f1,&g_107,&g_107},{&l_971,&l_971,&g_107,&g_103},{&g_5,&l_970,&g_3[0][2],&g_329.f5.f1},{(void*)0,&l_845[0].f1,&g_6,&g_3[0][2]},{&g_127.f1,&l_845[0].f1,(void*)0,&g_329.f5.f1},{&l_845[0].f1,&l_970,&l_961,&g_103}},{{&g_127.f1,&l_971,(void*)0,&g_107},{(void*)0,&g_445.f5.f1,&g_4,&g_5},{&g_107,&g_3[0][2],&g_3[0][0],&g_3[0][1]},{(void*)0,&l_845[0].f1,&g_3[0][0],&l_961},{&g_3[2][3],&g_8,(void*)0,&l_845[0].f1},{&g_107,&l_961,(void*)0,&g_3[2][4]},{&g_5,&g_3[2][3],(void*)0,&g_5}},{{&g_3[2][4],&g_329.f5.f1,&l_970,&g_107},{&l_845[0].f1,&g_3[0][0],&g_103,&g_3[2][3]},{(void*)0,(void*)0,&g_107,&g_3[2][1]},{&g_107,&g_445.f5.f1,&g_6,&l_961},{&g_3[0][0],&l_970,&g_107,&l_970},{&l_971,&l_852,&l_971,&l_970},{&g_107,&g_127.f1,&l_845[0].f1,&g_6}},{{(void*)0,&g_6,&g_329.f5.f1,&g_127.f1},{&l_852,&g_103,&g_329.f5.f1,(void*)0},{(void*)0,&l_970,&l_845[0].f1,&g_3[0][0]},{&g_107,&g_107,&l_971,&l_971},{&l_971,&l_971,&g_107,&g_103},{&g_3[0][0],&g_6,&g_6,(void*)0},{&g_107,&g_329.f5.f1,&g_107,&l_970}},{{(void*)0,&g_6,&g_6,&l_970},{&g_6,&g_6,&g_3[2][4],&g_107},{&g_3[0][2],&l_971,&g_3[2][1],&l_971},{&g_107,&g_3[0][0],&l_970,(void*)0},{&l_961,&l_970,&l_845[0].f1,&g_107},{&l_852,&g_107,&l_961,&g_127.f1},{&g_3[2][1],&g_107,&g_445.f5.f1,&g_329.f5.f1}},{{&l_961,&g_127.f1,&g_3[2][3],&g_3[0][2]},{&l_970,&g_3[2][1],&g_3[2][1],&l_970},{&l_970,(void*)0,(void*)0,&l_970},{&g_6,&g_445.f5.f1,&g_103,&l_852},{&g_127.f1,&l_961,&g_107,&l_852},{(void*)0,&g_445.f5.f1,&l_852,&l_970},{&g_3[0][0],(void*)0,(void*)0,&l_970}}};
                    uint64_t *l_997[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_997[i] = (void*)0;
                    g_728[(g_445.f4 + 3)][g_506.f3] = l_982[6][1][2];
                    if ((*p_51))
                        continue;
                    l_1006 = (safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_div_func_int64_t_s_s(((((safe_rshift_func_uint16_t_u_s(l_971, 9)) , (safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(0x7FL, 5)) | (((safe_mod_func_int64_t_s_s((((((*l_906) = (18446744073709551609UL | ((((**l_972) = (**g_290)) <= ((((**g_632) = l_953) | ((l_998--) >= (0x9B791CC2L != ((safe_rshift_func_uint16_t_u_s(g_445.f3, 0)) , (*p_51))))) ^ 2L)) || 0xDE24E046ACCABF2CLL))) , l_1003) , (void*)0) != (void*)0), (*g_291))) , &g_339[0]) == l_1004)), g_445.f1))) , g_719) != l_1005), l_1003.f0)) <= 0xE8023543L), (-5L))) ^ (*p_51)), (*p_52)));
                    if ((*g_509))
                        break;
                }
                else
                { 
                    int8_t l_1007 = (-1L);
                    if ((*g_509))
                        break;
                    l_1003.f5.f1 = l_1007;
                }
                l_1008 = l_1003.f1;
                l_1003.f5 = g_329.f5;
                (**g_691) = (((((*g_633) = (l_969 > (~(((*l_1011) = l_1010) == (void*)0)))) >= l_1006) | (l_971 != 0UL)) , (**g_691));
            }
        }
    }
    (*l_1012) = &l_862;
    return g_111[0];
}



static int8_t  func_55(int8_t  p_56, int8_t * const  p_57, uint32_t  p_58, int32_t * const  p_59, const int32_t * p_60)
{ 
    int8_t l_66 = 0x86L;
    int32_t *l_74 = (void*)0;
    uint32_t *l_140 = &g_119;
    uint32_t **l_139 = &l_140;
    struct S0 *l_161 = &g_127;
    int32_t l_180[5] = {0x9C151EC7L,0x9C151EC7L,0x9C151EC7L,0x9C151EC7L,0x9C151EC7L};
    uint64_t l_182[6][2][6] = {{{18446744073709551606UL,0UL,18446744073709551615UL,6UL,0UL,0UL},{18446744073709551606UL,6UL,6UL,18446744073709551606UL,1UL,0x9440195C60AA6FE1LL}},{{1UL,0UL,6UL,0x558CCBDE43701647LL,18446744073709551606UL,0UL},{0UL,0x558CCBDE43701647LL,18446744073709551615UL,18446744073709551606UL,18446744073709551606UL,18446744073709551615UL}},{{0UL,0UL,0x9440195C60AA6FE1LL,6UL,1UL,0UL},{0UL,6UL,0x558CCBDE43701647LL,18446744073709551606UL,0UL,0x9440195C60AA6FE1LL}},{{0UL,0UL,0x558CCBDE43701647LL,0x558CCBDE43701647LL,0UL,0UL},{1UL,0x558CCBDE43701647LL,0x9440195C60AA6FE1LL,18446744073709551606UL,0UL,18446744073709551615UL}},{{18446744073709551606UL,0UL,18446744073709551615UL,6UL,0UL,0UL},{18446744073709551606UL,6UL,6UL,18446744073709551606UL,1UL,0x9440195C60AA6FE1LL}},{{1UL,0UL,6UL,0x558CCBDE43701647LL,18446744073709551606UL,0UL},{0UL,0x558CCBDE43701647LL,18446744073709551615UL,18446744073709551606UL,18446744073709551606UL,18446744073709551615UL}}};
    uint32_t ***l_210 = &l_139;
    uint32_t l_213 = 4294967289UL;
    int32_t l_265 = 0xD79F0176L;
    union U2 l_398 = {0x81C1450880342780LL};
    int16_t * const * const l_582[3] = {&g_339[3],&g_339[3],&g_339[3]};
    int64_t *l_590[3][2][5] = {{{(void*)0,&g_329.f0,&l_398.f0,(void*)0,&g_253},{(void*)0,&g_329.f0,(void*)0,(void*)0,&g_211.f0}},{{&g_329.f0,(void*)0,(void*)0,&g_329.f0,&l_398.f0},{&g_329.f0,(void*)0,(void*)0,&g_329.f0,&g_211.f0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_211.f0},{&g_329.f0,(void*)0,(void*)0,&g_329.f0,&l_398.f0}}};
    int64_t *l_595 = (void*)0;
    int64_t **l_594 = &l_595;
    int32_t l_615 = 0x2901C6B9L;
    struct S1 **l_716 = &g_444;
    int32_t **l_729 = &g_728[4][1];
    struct S0 l_740 = {0xB807L,3L};
    uint16_t l_785 = 65527UL;
    int8_t l_825 = 0x3AL;
    int i, j, k;
    if (l_66)
    { 
        uint8_t l_75 = 247UL;
        struct S1 l_78 = {-8L,0UL,1L,0x9E1B0F05L,-6L,{0x5DB3L,-1L}};
        uint32_t l_136 = 0x17488B34L;
        int32_t *l_137 = &g_127.f1;
        int32_t l_138 = 0x15D644C5L;
        uint32_t ***l_141 = &l_139;
        (*l_137) = ((safe_lshift_func_uint8_t_u_s(((p_56 >= (func_69(l_74, l_75, (safe_mul_func_int8_t_s_s((*p_57), g_3[0][0])), l_78) < l_136)) & p_56), (*p_57))) > l_78.f5.f0);
        l_138 &= g_10;
        (*l_141) = l_139;
        g_103 = (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_105 , g_3[0][0]), (*p_59))), 3));
    }
    else
    { 
        int32_t **l_146 = &l_74;
        int32_t l_151 = 0x60AE4559L;
        struct S0 *l_159 = (void*)0;
        int32_t l_181 = (-10L);
        int32_t l_240 = 1L;
        int32_t l_241 = 0x0CB9E47EL;
        int32_t l_242 = 0xD464BD90L;
        int32_t l_246 = 0xF6F84D04L;
        int16_t l_247[1];
        int i;
        for (i = 0; i < 1; i++)
            l_247[i] = (-10L);
        (*l_146) = &g_3[1][4];
        if (g_10)
        { 
            return g_3[0][0];
        }
        else
        { 
            uint32_t l_152 = 18446744073709551615UL;
            int32_t l_155[1][2][5] = {{{0x5279336FL,0x5279336FL,1L,0x5279336FL,0x5279336FL},{1L,0x5279336FL,1L,1L,0x5279336FL}}};
            uint8_t l_224 = 0x1EL;
            int i, j, k;
            for (p_58 = 0; (p_58 <= 1); p_58 += 1)
            { 
                int32_t *l_147 = &g_103;
                int32_t *l_148 = &g_105;
                int32_t *l_149 = &g_127.f1;
                int32_t *l_150[4];
                struct S0 **l_162[2][1];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_150[i] = &g_107;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_162[i][j] = &l_159;
                }
                l_152++;
                for (g_127.f1 = 0; (g_127.f1 <= 1); g_127.f1 += 1)
                { 
                    uint32_t l_156 = 4294967287UL;
                    struct S0 **l_160 = &l_159;
                    l_156--;
                    (*l_146) = (*l_146);
                    (*l_160) = l_159;
                }
                l_159 = l_161;
            }
            if ((**l_146))
            { 
                union U2 l_173 = {0xF84D8DA128F76137LL};
                int32_t l_174 = 0x6FA74B5DL;
                int32_t *l_175 = &g_107;
                int32_t *l_176 = &g_103;
                int32_t *l_177 = &l_174;
                int32_t *l_178 = &l_155[0][0][3];
                int32_t *l_179[6][4][7] = {{{&g_107,&l_155[0][1][1],&l_151,&l_155[0][1][1],&g_107,&g_5,&g_3[0][0]},{&g_103,&g_5,&g_6,&g_5,&g_127.f1,&g_3[0][0],(void*)0},{&l_155[0][1][1],&g_127.f1,&g_105,(void*)0,&l_151,&l_151,(void*)0},{&g_103,&g_5,&g_103,&l_151,&g_3[2][0],&g_3[0][0],&l_174}},{{&g_107,&l_155[0][0][4],(void*)0,&g_5,(void*)0,&g_3[0][0],&g_6},{&g_107,&g_103,&g_3[0][0],&g_6,&g_6,&g_3[0][0],&g_103},{&g_6,&g_107,&g_127.f1,(void*)0,&l_155[0][0][4],&l_151,&l_155[0][0][2]},{&g_5,(void*)0,&l_174,&g_6,&l_174,&g_3[0][0],(void*)0}},{{&g_5,&l_155[0][0][4],(void*)0,(void*)0,&l_155[0][0][4],&g_5,&l_151},{&l_174,(void*)0,&g_107,&g_6,&l_151,&l_174,&g_3[2][0]},{&l_155[0][0][2],(void*)0,&g_107,&g_5,&g_105,&l_155[0][0][4],&g_105},{&l_151,(void*)0,(void*)0,&l_151,(void*)0,&g_6,&g_3[0][0]}},{{&l_151,&l_155[0][0][4],&g_127.f1,(void*)0,&g_6,(void*)0,(void*)0},{&l_174,(void*)0,&g_3[0][0],&g_5,&l_174,&g_5,&g_3[0][0]},{&g_107,&g_107,&g_3[0][0],&l_155[0][1][1],(void*)0,&l_151,&g_105},{&l_151,&g_103,&g_127.f1,(void*)0,&l_174,&g_6,&g_3[2][0]}},{{&l_151,&l_155[0][0][4],(void*)0,&g_105,(void*)0,&l_155[0][0][4],&l_151},{(void*)0,&g_5,&l_151,&g_127.f1,&l_174,&g_3[2][0],(void*)0},{(void*)0,&g_127.f1,&g_107,&g_127.f1,&g_6,&l_155[0][0][2],&l_155[0][0][2]},{(void*)0,&g_5,&l_151,&g_5,(void*)0,&l_151,&g_103}},{{&g_3[0][0],&l_155[0][1][1],(void*)0,&l_151,&g_105,(void*)0,&g_6},{&g_5,&g_3[0][0],&g_127.f1,&l_174,&l_151,&l_151,&l_174},{&g_3[0][0],&l_151,&g_3[0][0],&g_3[0][0],(void*)0,&g_5,(void*)0},{&g_5,&g_6,&g_5,&g_127.f1,&g_3[0][0],(void*)0,&g_6}}};
                int i, j, k;
                (*l_161) = (*l_161);
                (*l_175) ^= (l_174 &= (safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((p_58 != ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((((l_155[0][0][3] | 0x37DBL) != (*l_74)) && 0x41BBL), (safe_lshift_func_uint16_t_u_u(((0x33AEL <= (((g_15 | l_155[0][0][3]) , l_173) , g_105)) > p_58), g_15)))), l_173.f0)) , g_103)), p_58)), (**l_146))));
                ++l_182[3][0][4];
            }
            else
            { 
                uint16_t l_192[3][2][4] = {{{0x78E0L,1UL,0x616CL,0x616CL},{0xE54DL,0xE54DL,0x78E0L,0x616CL}},{{0xB9B3L,1UL,0xB9B3L,0x78E0L},{0xB9B3L,0x78E0L,0x78E0L,0xB9B3L}},{{0xE54DL,0x78E0L,0x616CL,0x78E0L},{0x78E0L,1UL,0x616CL,0x616CL}}};
                int32_t *l_216 = &g_103;
                int32_t *l_217 = &g_105;
                int32_t *l_218 = &g_211.f3.f5.f1;
                int32_t *l_219 = &l_180[4];
                int32_t *l_220 = &l_181;
                int32_t l_221[7][4] = {{(-1L),0L,0x2D855E7EL,0L},{0xFA762904L,0L,0L,0xFA762904L},{0L,0xFA762904L,(-1L),4L},{0L,(-1L),0L,0x2D855E7EL},{0xFA762904L,4L,0x2D855E7EL,0x2D855E7EL},{(-1L),(-1L),0L,4L},{4L,0xFA762904L,0L,0xFA762904L}};
                int32_t *l_222 = &l_155[0][0][3];
                int32_t *l_223[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_223[i] = &l_151;
                for (l_66 = 0; (l_66 != 0); l_66 = safe_add_func_int8_t_s_s(l_66, 4))
                { 
                    struct S0 **l_187[7][2][6] = {{{(void*)0,(void*)0,&l_159,&l_161,&l_161,&l_159},{(void*)0,(void*)0,&l_161,&l_161,&l_161,&l_161}},{{(void*)0,(void*)0,(void*)0,&l_159,&l_161,&l_161},{&l_161,(void*)0,(void*)0,&l_161,(void*)0,&l_161}},{{&l_161,&l_161,&l_161,&l_161,&l_161,&l_159},{&l_161,&l_161,&l_159,&l_159,&l_161,&l_161}},{{(void*)0,&l_161,(void*)0,&l_161,(void*)0,&l_161},{(void*)0,(void*)0,&l_159,&l_161,&l_161,&l_159}},{{(void*)0,(void*)0,&l_161,&l_161,&l_161,&l_161},{(void*)0,(void*)0,(void*)0,&l_159,&l_161,&l_161}},{{&l_161,(void*)0,(void*)0,&l_161,(void*)0,&l_161},{&l_161,&l_161,&l_161,&l_161,&l_161,&l_159}},{{&l_161,&l_161,&l_159,&l_159,&l_161,&l_161},{(void*)0,&l_161,(void*)0,&l_161,(void*)0,&l_161}}};
                    int64_t *l_191 = &g_111[0];
                    int16_t *l_199[7][4][6] = {{{&g_64,(void*)0,&g_64,&g_127.f0,&g_127.f0,&g_64},{&g_127.f0,&g_127.f0,&g_64,&g_64,&g_64,&g_64},{&g_64,&g_127.f0,&g_64,&g_64,&g_127.f0,&g_64},{&g_127.f0,&g_127.f0,&g_127.f0,&g_127.f0,(void*)0,&g_127.f0}},{{&g_64,&g_64,&g_127.f0,&g_127.f0,&g_64,&g_127.f0},{&g_127.f0,(void*)0,&g_64,&g_64,&g_127.f0,&g_127.f0},{&g_64,&g_64,&g_64,&g_127.f0,&g_64,&g_64},{&g_127.f0,(void*)0,&g_127.f0,&g_64,&g_64,&g_64}},{{&g_64,&g_127.f0,&g_64,&g_127.f0,&g_64,&g_64},{&g_127.f0,&g_127.f0,&g_127.f0,&g_127.f0,&g_127.f0,(void*)0},{(void*)0,&g_64,&g_64,&g_127.f0,&g_64,&g_127.f0},{&g_64,&g_127.f0,&g_127.f0,&g_64,&g_127.f0,&g_127.f0}},{{&g_127.f0,&g_64,&g_64,(void*)0,&g_64,(void*)0},{&g_127.f0,&g_64,&g_127.f0,&g_64,&g_127.f0,&g_64},{&g_64,&g_64,&g_64,&g_64,&g_127.f0,&g_64},{&g_127.f0,&g_64,&g_127.f0,&g_127.f0,&g_64,(void*)0}},{{&g_64,&g_127.f0,&g_64,&g_64,&g_127.f0,&g_127.f0},{(void*)0,&g_64,&g_64,&g_127.f0,(void*)0,&g_127.f0},{&g_64,&g_64,&g_64,&g_127.f0,(void*)0,&g_64},{&g_127.f0,(void*)0,(void*)0,&g_127.f0,&g_64,&g_64}},{{(void*)0,&g_64,&g_127.f0,&g_64,&g_127.f0,&g_127.f0},{&g_64,&g_64,&g_127.f0,&g_64,(void*)0,&g_64},{&g_127.f0,(void*)0,&g_127.f0,&g_127.f0,(void*)0,&g_127.f0},{&g_64,&g_127.f0,&g_127.f0,&g_64,&g_127.f0,&g_127.f0}},{{&g_127.f0,(void*)0,&g_64,(void*)0,(void*)0,(void*)0},{&g_127.f0,&g_127.f0,(void*)0,&g_64,&g_127.f0,&g_127.f0},{&g_64,&g_127.f0,(void*)0,&g_127.f0,&g_127.f0,&g_64},{&g_127.f0,&g_64,&g_64,&g_64,&g_127.f0,&g_64}}};
                    int32_t l_200 = (-3L);
                    uint64_t *l_203[4];
                    uint32_t ***l_208 = &l_139;
                    uint32_t ****l_209 = (void*)0;
                    int64_t *l_212 = &g_109;
                    int32_t *l_214 = (void*)0;
                    int32_t *l_215 = &g_107;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_203[i] = (void*)0;
                    l_161 = l_161;
                    l_192[1][0][1] |= (((*l_191) = (~(safe_lshift_func_int8_t_s_s(0L, 5)))) == p_56);
                    (*l_215) = ((safe_sub_func_int64_t_s_s(((*l_212) = ((*l_191) = (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((l_200 ^= (*l_74)) >= 0x79D9L), 3)), ((g_103 && (((safe_div_func_uint32_t_u_u(((g_101--) , p_58), ((safe_sub_func_uint64_t_u_u(p_58, ((l_210 = l_208) != (g_211 , (void*)0)))) , 0x29619C65L))) , 1L) , l_192[1][0][1])) == (*l_74)))))), 6L)) | l_213);
                }
                l_224--;
                p_60 = (void*)0;
            }
            for (g_109 = 0; (g_109 <= (-15)); g_109 = safe_sub_func_uint16_t_u_u(g_109, 5))
            { 
                uint8_t l_231 = 255UL;
                int32_t *l_233 = &g_211.f3.f5.f1;
                int32_t *l_234 = &l_180[4];
                int32_t *l_235 = &l_151;
                int32_t *l_236 = &g_211.f3.f5.f1;
                int32_t *l_237 = &g_127.f1;
                int32_t *l_238 = &g_107;
                int32_t *l_239[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_239[i] = (void*)0;
                for (l_181 = 25; (l_181 < (-28)); l_181--)
                { 
                    int32_t *l_232 = &g_103;
                    l_231 = 0xFB77FFA9L;
                    (*l_232) = (**l_146);
                    if (g_64)
                        continue;
                    (*l_232) &= 0x868C946FL;
                }
                g_248[2]--;
                for (g_244 = 0; (g_244 >= (-21)); g_244 = safe_sub_func_uint32_t_u_u(g_244, 7))
                { 
                    uint8_t l_254 = 0UL;
                    l_254--;
                    (*l_235) &= (-1L);
                }
                for (l_246 = 0; (l_246 > (-11)); l_246--)
                { 
                    int32_t **l_259 = &l_236;
                    (*l_235) ^= g_107;
                    (*l_259) = p_59;
                    (*l_259) = (*l_259);
                    (*l_238) |= g_111[1];
                }
                (*l_146) = (*l_146);
            }
        }
        for (p_56 = 0; (p_56 < 22); p_56 = safe_add_func_uint64_t_u_u(p_56, 5))
        { 
            uint64_t l_264[7][3];
            int16_t *l_274 = &g_211.f3.f4;
            uint16_t *l_277 = &g_278;
            int32_t *l_279 = &g_103;
            int32_t ***l_280 = &l_146;
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 3; j++)
                    l_264[i][j] = 0xA8CA2ACE5422AEDDLL;
            }
        }
    }
    return (**l_729);
}



static uint16_t  func_69(int32_t * p_70, uint16_t  p_71, uint8_t  p_72, struct S1  p_73)
{ 
    int8_t * const l_99 = &g_15;
    int32_t l_125 = 0xDC864E9EL;
    int32_t *l_135 = &g_105;
    for (p_71 = 11; (p_71 != 2); p_71--)
    { 
        const union U3 l_83 = {8L};
        for (p_73.f4 = 0; (p_73.f4 > (-18)); p_73.f4 = safe_sub_func_uint16_t_u_u(p_73.f4, 2))
        { 
            int8_t *l_98[3][2][4] = {{{(void*)0,(void*)0,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15}},{{&g_15,&g_15,&g_15,&g_15},{(void*)0,&g_15,&g_15,&g_15}},{{&g_15,&g_15,&g_15,&g_15},{(void*)0,(void*)0,&g_15,&g_15}}};
            uint64_t *l_100 = &g_101;
            int32_t *l_102 = &g_103;
            int32_t *l_104 = &g_105;
            int32_t *l_106 = &g_107;
            int64_t *l_108 = &g_109;
            int64_t *l_110 = &g_111[0];
            const struct S1 l_124[4] = {{0xE04930E3A4418BAELL,3UL,0x2664L,0L,0xD0E3L,{0x97F9L,0xF023CA64L}},{0xE04930E3A4418BAELL,3UL,0x2664L,0L,0xD0E3L,{0x97F9L,0xF023CA64L}},{0xE04930E3A4418BAELL,3UL,0x2664L,0L,0xD0E3L,{0x97F9L,0xF023CA64L}},{0xE04930E3A4418BAELL,3UL,0x2664L,0L,0xD0E3L,{0x97F9L,0xF023CA64L}}};
            uint64_t l_134 = 0x4236FC2CA393CC16LL;
            int i, j, k;
            if (((l_83 , (safe_add_func_int64_t_s_s(((*l_110) &= ((((*l_108) |= (g_5 == ((*l_106) = (((g_3[1][3] & ((*l_104) = ((safe_sub_func_int64_t_s_s((((*l_102) &= ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s(((l_83.f0 | ((*l_100) = (safe_add_func_uint16_t_u_u(((l_98[0][0][1] != (((l_99 != l_98[2][1][0]) > p_73.f4) , (void*)0)) | 65530UL), g_3[0][0])))) & 0L), 9UL)) != p_73.f4) & g_10), g_3[2][5])), 7)), 7)) ^ 4294967295UL)) || 0x977D3265L), l_83.f0)) || p_72))) > p_73.f0) <= g_3[2][3])))) && 5L) || l_83.f2)), 0x440D3F7D50A455C5LL))) > 0xAB99L))
            { 
                return p_73.f0;
            }
            else
            { 
                int64_t *l_116 = (void*)0;
                union U2 l_129 = {0xB42E23460C9FB339LL};
                int8_t *l_130 = &g_15;
                uint32_t *l_131 = (void*)0;
                uint32_t *l_132 = &g_119;
                struct S0 *l_133 = &g_127;
                for (g_107 = 0; (g_107 == 6); ++g_107)
                { 
                    int64_t **l_117 = &l_110;
                    uint32_t *l_118 = &g_119;
                    int32_t l_126 = (-5L);
                    struct S0 *l_128[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_128[i] = &g_127;
                    (*l_104) ^= (safe_rshift_func_uint16_t_u_s((((&g_111[0] != ((*l_117) = l_116)) >= (*l_106)) ^ ((((*l_118) = (*l_102)) , (safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((l_124[2] , (g_119 ^= (((0x065A8C8944EAF9A5LL < 2L) != 1L) , l_125))) ^ (*l_102)), l_126)), 0))) == 0xAE80B3DF57287C4FLL)), 0));
                    p_73.f5 = g_127;
                }
                l_134 ^= ((g_103 > ((((l_129 , l_130) != l_130) < (g_107 == (((*l_132) |= 0x0DEA165FL) || (&g_127 == l_133)))) >= l_125)) > l_125);
                return l_129.f1;
            }
        }
    }
    (*l_135) ^= (l_125 = g_3[2][6]);
    return (*l_135);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_111[i], "g_111[i]", print_hash_value);

    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_248[i], "g_248[i]", print_hash_value);

    }
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_329.f0, "g_329.f0", print_hash_value);
    transparent_crc(g_329.f1, "g_329.f1", print_hash_value);
    transparent_crc(g_329.f2, "g_329.f2", print_hash_value);
    transparent_crc(g_329.f3, "g_329.f3", print_hash_value);
    transparent_crc(g_329.f4, "g_329.f4", print_hash_value);
    transparent_crc(g_329.f5.f0, "g_329.f5.f0", print_hash_value);
    transparent_crc(g_329.f5.f1, "g_329.f5.f1", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_445.f0, "g_445.f0", print_hash_value);
    transparent_crc(g_445.f1, "g_445.f1", print_hash_value);
    transparent_crc(g_445.f2, "g_445.f2", print_hash_value);
    transparent_crc(g_445.f3, "g_445.f3", print_hash_value);
    transparent_crc(g_445.f4, "g_445.f4", print_hash_value);
    transparent_crc(g_445.f5.f0, "g_445.f5.f0", print_hash_value);
    transparent_crc(g_445.f5.f1, "g_445.f5.f1", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_506.f0, "g_506.f0", print_hash_value);
    transparent_crc(g_506.f2, "g_506.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_566[i], "g_566[i]", print_hash_value);

    }
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_683[i][j], "g_683[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_709[i][j], "g_709[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1099[i], "g_1099[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1112[i][j], "g_1112[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1327, "g_1327", print_hash_value);
    transparent_crc(g_1384, "g_1384", print_hash_value);
    transparent_crc(g_1477, "g_1477", print_hash_value);
    transparent_crc(g_1512, "g_1512", print_hash_value);
    transparent_crc(g_1581, "g_1581", print_hash_value);
    transparent_crc(g_1588.f0, "g_1588.f0", print_hash_value);
    transparent_crc(g_1588.f1, "g_1588.f1", print_hash_value);
    transparent_crc(g_1588.f2, "g_1588.f2", print_hash_value);
    transparent_crc(g_1588.f3, "g_1588.f3", print_hash_value);
    transparent_crc(g_1588.f4, "g_1588.f4", print_hash_value);
    transparent_crc(g_1588.f5.f0, "g_1588.f5.f0", print_hash_value);
    transparent_crc(g_1588.f5.f1, "g_1588.f5.f1", print_hash_value);
    transparent_crc(g_1595, "g_1595", print_hash_value);
    transparent_crc(g_1842, "g_1842", print_hash_value);
    transparent_crc(g_1885, "g_1885", print_hash_value);
    transparent_crc(g_1912, "g_1912", print_hash_value);
    transparent_crc(g_1920, "g_1920", print_hash_value);
    transparent_crc(g_2030.f0, "g_2030.f0", print_hash_value);
    transparent_crc(g_2030.f1, "g_2030.f1", print_hash_value);
    transparent_crc(g_2232, "g_2232", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
