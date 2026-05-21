// SPDX-License-Identifier: MIT
// cctest_csmith_d94c5903.c --- cctest case csmith_d94c5903 (csmith seed 3645659395)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x199543a4 */

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

// Options:   -s 3645659395 -o /tmp/csmith_gen_407ndl2a/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint64_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint64_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   int8_t  f3;
   int32_t  f4;
   uint64_t  f5;
};
#pragma pack(pop)

union U3 {
   uint8_t  f0;
   struct S0  f1;
   int8_t  f2;
   struct S2  f3;
};


static int32_t g_3 = 0x221E9C96L;
static uint32_t g_11[2] = {4294967295UL,4294967295UL};
static uint32_t g_21[1][2][1] = {{{0x08AF066BL},{0x08AF066BL}}};
static uint32_t g_46 = 9UL;
static uint32_t g_51[2] = {1UL,1UL};
static uint32_t g_66 = 0xD128B415L;
static uint16_t g_71 = 0x6282L;
static int64_t g_72[2][2] = {{0x83F7A53718D27381LL,0x83F7A53718D27381LL},{0x83F7A53718D27381LL,0x83F7A53718D27381LL}};
static uint8_t g_83[1][4][2] = {{{0x01L,0x01L},{0x19L,0x01L},{0x01L,0x19L},{0x01L,0x01L}}};
static uint32_t g_84[3][3] = {{0UL,0UL,0UL},{1UL,1UL,1UL},{0UL,0UL,0UL}};
static int64_t g_91 = 0x88BB409C3C7D9ACCLL;
static uint64_t g_100[3] = {0x734B0E876F31F8A0LL,0x734B0E876F31F8A0LL,0x734B0E876F31F8A0LL};
static struct S1 g_103 = {0x8D07L};
static struct S2 g_145 = {4UL,0xF6034A10L,0x73A0L,0x8EL,0xDFD65E78L,0xBFB6AB9C1A6072D4LL};
static uint16_t g_191 = 0UL;
static uint64_t g_192[3] = {0x04E333C0195D4EB7LL,0x04E333C0195D4EB7LL,0x04E333C0195D4EB7LL};
static int64_t g_215 = 0xBE725120B4C8DAE2LL;
static uint64_t g_219 = 0xD05E8D5C61AD10CDLL;
static int32_t g_224 = 0xBCDBA4BFL;
static union U3 g_225 = {255UL};
static uint8_t g_342 = 0x71L;
static uint32_t g_345 = 0xF1DC4950L;



static struct S2  func_1(void);
static const uint16_t  func_5(int8_t  p_6, const int8_t  p_7, union U3  p_8, uint32_t  p_9, struct S1  p_10);
static union U3  func_12(union U3  p_13, const uint64_t  p_14, uint64_t  p_15);
static union U3  func_16(uint16_t  p_17, const int32_t  p_18, const uint32_t  p_19);




static struct S2  func_1(void)
{ 
    int64_t l_2[1][3];
    int32_t l_4 = (-3L);
    struct S1 l_333 = {-4L};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_2[i][j] = 0L;
    }
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        const int64_t l_20 = (-10L);
        int32_t l_356 = 2L;
        l_4 &= 0L;
        for (l_4 = 0; (l_4 >= 0); l_4 -= 1)
        { 
            int i, j;
            l_356 &= (func_5((g_11[1] = l_2[l_4][(g_3 + 1)]), l_2[l_4][(l_4 + 1)], func_12(func_16(l_2[l_4][l_4], l_20, g_3), l_2[l_4][(l_4 + 1)], g_3), g_21[0][1][0], l_333) & g_145.f5);
        }
    }
    return g_145;
}



static const uint16_t  func_5(int8_t  p_6, const int8_t  p_7, union U3  p_8, uint32_t  p_9, struct S1  p_10)
{ 
    int32_t l_340 = 0x88396192L;
    struct S0 l_348 = {0UL};
    for (g_225.f3.f5 = 0; (g_225.f3.f5 <= 1); g_225.f3.f5 += 1)
    { 
        int64_t l_336 = 1L;
        int32_t l_341 = 1L;
        if ((((safe_mod_func_int64_t_s_s(((0x20L != g_84[2][2]) ^ 0x6137L), l_336)) , 0x19FE53B4L) != 0xB349EF4AL))
        { 
            int32_t l_337 = (-10L);
            if (l_337)
            { 
                p_8.f3.f4 = (g_215 | (p_9 & p_10.f0));
                g_145.f4 = p_8.f2;
                g_145.f4 &= ((g_103.f0 = (safe_sub_func_int8_t_s_s(l_340, l_337))) > ((l_336 < (l_340 || l_336)) || g_192[0]));
            }
            else
            { 
                --g_342;
                --g_345;
            }
            if (l_341)
                break;
        }
        else
        { 
            g_145.f4 |= ((g_72[1][1] = (l_348 , (((l_341 = l_336) && p_9) | ((p_6 == 0xF235149BL) == g_225.f2)))) == p_6);
            for (g_103.f0 = 1; (g_103.f0 >= 0); g_103.f0 -= 1)
            { 
                int32_t l_355 = 0x93D30D6FL;
                int i, j;
                l_341 = (((l_355 |= (g_72[g_103.f0][g_103.f0] < (((g_225 , (p_8.f3.f1 = (((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((-1L), ((safe_mul_func_int16_t_s_s(0xA65DL, 0xEDC5L)) > 0x9ED2L))), 1)) > 0x20CDL) >= 0L) & l_341) && 8UL))) , l_341) ^ l_348.f0))) && l_340) && g_342);
            }
            p_8.f3.f4 = g_192[1];
        }
    }
    return l_340;
}



static union U3  func_12(union U3  p_13, const uint64_t  p_14, uint64_t  p_15)
{ 
    struct S1 l_226 = {0xE518L};
    int32_t l_230 = 0xCD55C4C9L;
    uint32_t l_332[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
    int i, j;
    if ((l_226 , (l_226.f0 > (+((safe_rshift_func_uint8_t_u_s((l_226.f0 & ((((l_230 ^= ((p_13.f3.f4 = (4294967287UL > l_226.f0)) | 9UL)) > l_226.f0) || l_230) < p_14)), g_46)) < p_14)))))
    { 
        struct S1 l_232[1] = {{0x741CL}};
        int i;
        if ((g_225.f3.f4 = ((p_13.f0 = g_215) , g_84[2][2])))
        { 
            struct S1 l_231 = {0xBF42L};
            l_232[0] = (l_231 = l_226);
            l_226 = ((g_225.f2 != p_15) , l_232[0]);
            g_225.f3.f4 = g_72[1][1];
        }
        else
        { 
            uint32_t l_246[3];
            int i;
            for (i = 0; i < 3; i++)
                l_246[i] = 0UL;
            l_230 = (p_13.f3.f4 = ((g_103 , (safe_sub_func_int16_t_s_s((((+((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((l_226.f0 & (safe_mul_func_int8_t_s_s(g_215, (safe_rshift_func_int16_t_s_u((((l_246[0] ^ l_246[0]) && l_246[0]) <= g_145.f4), 7))))), l_232[0].f0)), p_15)), 0xE0L)) != 0xD445L)) != p_13.f0) || 0x96BE51E0L), l_246[0]))) == 1L));
            for (g_224 = 0; (g_224 <= 2); g_224 += 1)
            { 
                uint64_t l_253 = 0UL;
                g_225.f3.f4 = (((safe_mod_func_uint64_t_u_u((((g_21[0][1][0] < (safe_lshift_func_uint16_t_u_s((((g_3 == ((safe_lshift_func_uint16_t_u_s((l_253 , ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((l_246[0] , p_15), p_15)) ^ g_72[1][1]), 6)) == p_13.f2)), 13)) || g_3)) == g_145.f2) > p_14), 6))) > g_91) > g_103.f0), l_232[0].f0)) <= g_145.f1) & g_145.f5);
            }
            l_230 = (+0xA532686C91CCB833LL);
        }
    }
    else
    { 
        uint8_t l_259 = 9UL;
        int32_t l_262 = 0xBC2D7498L;
        int8_t l_330 = 1L;
        if (g_21[0][1][0])
        { 
            int16_t l_265 = 1L;
            int32_t l_272[1];
            int i;
            for (i = 0; i < 1; i++)
                l_272[i] = 2L;
            l_259 |= (-1L);
            for (g_225.f3.f5 = 29; (g_225.f3.f5 > 39); g_225.f3.f5 = safe_add_func_uint32_t_u_u(g_225.f3.f5, 4))
            { 
                g_145.f4 = ((-1L) >= p_13.f0);
            }
            if ((((l_262 = 255UL) | (((safe_lshift_func_uint8_t_u_s((g_83[0][0][1]++), (safe_mul_func_int16_t_s_s((l_272[0] = (g_72[1][1] , (l_230 = ((safe_add_func_int64_t_s_s(l_265, 0x402012965F41A635LL)) && 0x3B51E3D7954E52F0LL)))), 0L)))) , g_51[0]) , g_224)) == 0x3EL))
            { 
                const int16_t l_289[4] = {(-10L),(-10L),(-10L),(-10L)};
                int32_t l_302 = 0x02DE7C2BL;
                int i;
                g_145.f4 = (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((0xB41AC932F8380B90LL | ((safe_mul_func_int16_t_s_s(g_3, (((++p_13.f0) <= (g_145.f3 = (p_15 && (safe_mul_func_uint8_t_u_u(p_15, 0L))))) >= p_15))) == 0L)) < l_262), l_289[2])), g_66)) != 1L) >= g_100[2]), 11)), l_230));
                p_13.f3.f4 = ((0x2DCAB98AL != (l_302 = (((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s(((g_225.f3.f4 = ((safe_div_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((0UL ^ 0x3DL), (safe_rshift_func_uint16_t_u_u(p_13.f0, l_272[0])))), 13)) > g_72[1][1]) > g_145.f1), p_13.f0)) >= g_224)) <= l_262), p_13.f2)) <= p_13.f2), g_91)) && g_100[2]) | g_21[0][1][0]))) & g_51[0]);
            }
            else
            { 
                int16_t l_307 = 1L;
                int32_t l_308 = 0x3F3E8A5AL;
                l_262 = (p_14 | ((safe_mod_func_int32_t_s_s((((l_307 = ((safe_mul_func_int8_t_s_s((l_230 = (p_13.f0 | p_14)), l_226.f0)) ^ 3L)) >= l_308) || l_262), p_13.f2)) && 0x50L));
            }
        }
        else
        { 
            struct S2 l_309 = {18446744073709551615UL,0xF86C571FL,0x4CEAL,0x32L,1L,1UL};
            uint32_t l_331 = 2UL;
            if ((l_309 , (safe_div_func_uint32_t_u_u((l_262 = 0x56754FE3L), (safe_lshift_func_uint16_t_u_s((l_259 ^ (p_15 < p_15)), 13))))))
            { 
                union U3 l_314 = {0x90L};
                struct S1 l_321 = {0xF34FL};
                g_145.f4 = ((l_314 , (g_103.f0 | (safe_mod_func_int64_t_s_s((safe_div_func_int32_t_s_s(((((safe_sub_func_int64_t_s_s((p_14 , (l_321 , 0L)), 0x36F7DA083C917601LL)) >= g_192[0]) && g_91) == 0x5EL), p_14)), 0xCFAC040352F117B5LL)))) != 0x79BEL);
            }
            else
            { 
                uint32_t l_329 = 0xAD3B1945L;
                g_145.f4 ^= (safe_add_func_int32_t_s_s(1L, (safe_mod_func_uint32_t_u_u(((+g_100[2]) ^ 1UL), (safe_lshift_func_int8_t_s_u((g_71 && p_13.f0), l_329))))));
                l_230 &= l_330;
            }
            for (l_309.f5 = 0; (l_309.f5 <= 0); l_309.f5 += 1)
            { 
                l_331 = l_259;
                g_145.f4 = p_13.f2;
            }
        }
        g_225.f3.f4 = l_330;
    }
    l_332[2][0] ^= (g_100[2] , (p_13.f0 != 4UL));
    return g_225;
}



static union U3  func_16(uint16_t  p_17, const int32_t  p_18, const uint32_t  p_19)
{ 
    int16_t l_31 = 1L;
    struct S1 l_45 = {-6L};
    uint32_t l_65 = 0x30A04A8FL;
    int32_t l_68 = 0L;
    uint64_t l_70 = 18446744073709551611UL;
    struct S0 l_169 = {0x0BF8AE0A268B7F09LL};
    for (p_17 = 0; (p_17 <= 0); p_17 += 1)
    { 
        struct S0 l_26 = {0xED6C34F1D4B082B0LL};
        uint16_t l_32 = 0x6DAAL;
        int32_t l_48 = 0x5E26C5F5L;
        uint16_t l_67 = 0x9F72L;
        int32_t l_85[2];
        int32_t l_86 = 0x3DA88E9DL;
        const int16_t l_207 = (-3L);
        uint8_t l_214 = 0x19L;
        int i;
        for (i = 0; i < 2; i++)
            l_85[i] = 0L;
        if ((g_3 == (safe_div_func_uint16_t_u_u((g_21[0][0][0] & (safe_add_func_int8_t_s_s((((l_26 , (safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((p_19 , l_31) | 0x5CB5L), l_32)), 255UL))) && l_31) | p_19), (-3L)))), (-8L)))))
        { 
            uint8_t l_42 = 0x63L;
            int32_t l_47[4];
            int32_t l_49 = 0x3D96456CL;
            int i;
            for (i = 0; i < 4; i++)
                l_47[i] = 0xC99FFFBCL;
            l_49 ^= (((safe_add_func_int8_t_s_s((4294967295UL ^ (l_48 ^= (l_47[1] = (safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((+(safe_div_func_int8_t_s_s((65532UL & l_42), ((g_46 = (safe_rshift_func_uint16_t_u_u((l_45 , l_45.f0), 10))) || g_3)))) , 0xABL), 3)) != 0x606AB81DL), 0x4FL))))), l_42)) || g_21[0][0][0]) , g_21[0][1][0]);
        }
        else
        { 
            int32_t l_50[2];
            int32_t l_69 = 0x9F1F6A35L;
            int i;
            for (i = 0; i < 2; i++)
                l_50[i] = 0xD7E6DE11L;
            g_51[0]++;
            l_48 |= ((g_51[0] & ((0x4E41L < (safe_div_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u(((((safe_div_func_int8_t_s_s((l_68 = (safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u((l_67 = (safe_div_func_uint32_t_u_u((((g_66 = (l_65 , (((l_50[0] = g_51[1]) <= p_18) != g_3))) | 9L) != 0x0E64L), g_51[0]))))) <= 0x2B256384L), 4))), l_69)) && l_70) , 0xD8AAC4E2L) ^ g_51[1]), 13)) && g_71), g_3))) ^ l_32)) , p_18);
            g_72[1][1] &= 0x3E14DAAEL;
        }
        l_86 = (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(p_18, (l_48 ^= p_18))), (l_85[0] = ((safe_lshift_func_uint8_t_u_u(p_18, (g_84[2][2] = (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((g_83[0][1][1] = l_70), g_21[0][1][0])), 18446744073709551606UL))))) ^ p_19))));
        if (((safe_add_func_uint32_t_u_u(g_84[0][0], (~(!(g_91 &= g_21[0][1][0]))))) < (0x4E7F8FE0L && (((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(p_18, p_19)) <= p_18), 0x552485C7L)) != l_45.f0) < p_17))))
        { 
            l_68 = (safe_mul_func_uint16_t_u_u(p_18, 0xA6A3L));
        }
        else
        { 
            int8_t l_120[3];
            int32_t l_149 = 1L;
            int8_t l_168[3];
            uint8_t l_187 = 246UL;
            int16_t l_193[3];
            int i;
            for (i = 0; i < 3; i++)
                l_120[i] = 0x45L;
            for (i = 0; i < 3; i++)
                l_168[i] = 0x7BL;
            for (i = 0; i < 3; i++)
                l_193[i] = 1L;
            l_48 &= g_83[0][1][1];
            for (g_71 = 0; (g_71 <= 2); g_71 += 1)
            { 
                int i, j;
                --g_100[2];
                if (g_84[g_71][g_71])
                    break;
                g_103 = l_45;
            }
            if ((((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u((g_83[0][1][1] = 0UL), ((l_120[0] = ((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((0xEF126ED3L > 0x83F31624L), 6)), (safe_lshift_func_uint16_t_u_s(l_31, p_19)))), 3)) > l_65)) & p_19))) > 0x1C00E8DFL) >= g_100[0]), 0L)), 0xF58CCD7FL)), l_85[0])) > g_91) ^ 0xC5EDFBC0B8426172LL))
            { 
                uint32_t l_148 = 0xD0DC5042L;
                l_149 |= ((+(!(((safe_add_func_int64_t_s_s((safe_div_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u((0L == (g_100[2]--)), (safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((-1L), (safe_mod_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((g_145 , (((safe_sub_func_uint32_t_u_u((g_145.f4 , p_19), g_91)) >= 18446744073709551606UL) & 4294967295UL)), g_145.f5)) > p_18), l_120[0])))), 0)), p_17)), 4294967288UL)), g_103.f0)))) , l_148), p_17)), l_68)) != (-1L)) == 18446744073709551613UL))) >= g_46);
                l_149 ^= g_145.f1;
            }
            else
            { 
                uint8_t l_190 = 0x91L;
                int32_t l_194 = 5L;
                g_145.f4 |= (safe_mod_func_uint64_t_u_u((((l_120[0] && (safe_add_func_uint64_t_u_u(p_18, ((g_103.f0 = (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((0xC019F83A3BBF1768LL > ((g_145.f2 = (l_86 != 0xE3E8DDC7L)) < g_145.f3)), p_17)), g_3))) == l_31)))) > p_17) == l_45.f0), (-1L)));
                l_86 = (((p_17 <= (safe_add_func_int16_t_s_s((l_48 = (((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(0xB5L, (((g_145.f3 ^ ((safe_add_func_int32_t_s_s((l_85[0] == 65532UL), g_84[2][2])) ^ 0x55DCL)) ^ 0x38D5DD7BL) , 0x06L))) & l_168[1]) >= g_100[2]) > g_72[1][0]), 0x33L)), 9)) > 8UL) ^ p_17)), l_68))) , l_169) , 1L);
                l_194 &= ((+(safe_mul_func_int8_t_s_s(g_103.f0, (l_68 = g_145.f3)))) & (safe_add_func_uint32_t_u_u(((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((g_192[0] = (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((l_187 = (safe_lshift_func_uint8_t_u_s(5UL, 3))) || ((safe_mod_func_uint32_t_u_u((g_191 = (g_84[1][1] = l_190)), p_19)) & 0xE31BEAA3L)), g_21[0][1][0])), l_149))) != 8L), p_17)), l_45.f0)) && g_3), l_85[1])) <= g_100[0]) == g_145.f5) >= (-1L)), l_193[0])));
            }
        }
        for (l_31 = 0; (l_31 <= 0); l_31 += 1)
        { 
            uint8_t l_200 = 247UL;
            int32_t l_203 = 0xA19F92D8L;
            struct S1 l_216 = {7L};
            if (l_70)
            { 
                if (g_3)
                    break;
                l_203 = (g_145 , (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_17 , (+l_200)), (safe_mul_func_uint8_t_u_u(l_70, g_91)))), 0xA57AL)));
            }
            else
            { 
                g_215 = (((+((safe_mod_func_uint64_t_u_u(l_207, ((safe_rshift_func_int16_t_s_u((p_17 >= (g_145.f4 = l_65)), (l_48 = (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((p_18 < 4294967295UL) && l_214), p_19)), l_48))))) , l_65))) & l_203)) ^ l_70) > p_18);
                if (l_67)
                    continue;
            }
            for (l_48 = 0; (l_48 >= 0); l_48 -= 1)
            { 
                struct S1 l_217 = {0x31CBL};
                int32_t l_218 = 0x6F313AD8L;
                l_217 = (l_45 = l_216);
                g_219++;
            }
        }
    }
    for (l_31 = 0; (l_31 >= 2); l_31 = safe_add_func_uint32_t_u_u(l_31, 1))
    { 
        for (g_145.f4 = 2; (g_145.f4 >= 0); g_145.f4 -= 1)
        { 
            for (g_103.f0 = 0; (g_103.f0 >= 0); g_103.f0 -= 1)
            { 
                int i;
                g_224 = g_192[g_145.f4];
            }
        }
    }
    return g_225;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_21[i][j][k], "g_21[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_51[i], "g_51[i]", print_hash_value);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_72[i][j], "g_72[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_83[i][j][k], "g_83[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_84[i][j], "g_84[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_100[i], "g_100[i]", print_hash_value);

    }
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    transparent_crc(g_145.f1, "g_145.f1", print_hash_value);
    transparent_crc(g_145.f2, "g_145.f2", print_hash_value);
    transparent_crc(g_145.f3, "g_145.f3", print_hash_value);
    transparent_crc(g_145.f4, "g_145.f4", print_hash_value);
    transparent_crc(g_145.f5, "g_145.f5", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_192[i], "g_192[i]", print_hash_value);

    }
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_225.f2, "g_225.f2", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
