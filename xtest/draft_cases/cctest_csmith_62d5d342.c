// SPDX-License-Identifier: MIT
// cctest_csmith_62d5d342.c --- cctest case csmith_62d5d342 (csmith seed 1658180418)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x925dcb2e */

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

// Options:   -s 1658180418 -o /tmp/csmith_gen_qy48vfic/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 15;
   unsigned f1 : 8;
   signed f2 : 10;
   const unsigned f3 : 14;
   signed f4 : 5;
   signed f5 : 8;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint8_t  f0;
   uint16_t  f1;
   const int16_t  f2;
   struct S0  f3;
};
#pragma pack(pop)

struct S2 {
   uint32_t  f0;
   int32_t  f1;
   int64_t  f2;
   signed f3 : 24;
};

union U3 {
   const int64_t  f0;
   uint8_t  f1;
   int16_t  f2;
};

union U5 {
   int64_t  f0;
   const int32_t  f1;
   int16_t  f2;
   const int8_t  f3;
};


static int32_t g_2 = 3L;
static struct S1 g_30[1] = {{0UL,0xAD14L,0xA72CL,{180,5,6,14,-3,-11}}};
static union U3 g_34 = {8L};
static int32_t g_42 = 0xBD42F903L;
static int32_t g_43 = 0x8F300406L;
static uint64_t g_44 = 0x8456A9E5FAF1BECDLL;
static struct S2 g_53 = {0x6C42336FL,0xEBA052C4L,6L,-3758};
static int8_t g_95 = 0x7AL;
static uint16_t g_96[1] = {0x3A0DL};
static union U5 g_120 = {6L};
static uint8_t g_124[1][3][1] = {{{0xF1L},{0xF1L},{0xF1L}}};
static uint16_t g_152[5][5][5] = {{{0x6B98L,0x1782L,1UL,0x18D2L,65532UL},{0x6CDDL,0x34F8L,0xDAB0L,0xDAB0L,0x34F8L},{0x6B98L,0x1782L,1UL,0x18D2L,65532UL},{0x6CDDL,0x34F8L,0xDAB0L,0xDAB0L,0x34F8L},{0x6B98L,0x1782L,1UL,0x18D2L,65532UL}},{{0x6CDDL,0x34F8L,0xDAB0L,0xDAB0L,0x34F8L},{0x6B98L,0x1782L,1UL,0x18D2L,65532UL},{0x6CDDL,0x34F8L,0xDAB0L,0xDAB0L,0x34F8L},{0x6B98L,0x796EL,65532UL,0x1782L,0xED1DL},{65535UL,1UL,0x34F8L,0x34F8L,1UL}},{{65535UL,0x796EL,65532UL,0x1782L,0xED1DL},{65535UL,1UL,0x34F8L,0x34F8L,1UL},{65535UL,0x796EL,65532UL,0x1782L,0xED1DL},{65535UL,1UL,0x34F8L,0x34F8L,1UL},{65535UL,0x796EL,65532UL,0x1782L,0xED1DL}},{{65535UL,1UL,0x34F8L,0x34F8L,1UL},{65535UL,0x796EL,65532UL,0x1782L,0xED1DL},{65535UL,1UL,0x34F8L,0x34F8L,1UL},{65535UL,0x796EL,65532UL,0x1782L,0xED1DL},{65535UL,1UL,0x34F8L,0x34F8L,1UL}},{{65535UL,0x796EL,65532UL,0x1782L,0xED1DL},{65535UL,1UL,0x34F8L,0x34F8L,1UL},{65535UL,0x796EL,65532UL,0x1782L,0xED1DL},{65535UL,1UL,0x34F8L,0x34F8L,1UL},{65535UL,0x796EL,65532UL,0x1782L,0xED1DL}}};
static uint16_t g_172 = 0x959AL;



static int64_t  func_1(void);
static int8_t  func_12(union U5  p_13, uint64_t  p_14);
static union U5  func_15(const int32_t  p_16, const int32_t  p_17, struct S0  p_18, struct S1  p_19);
static struct S2  func_31(union U3  p_32, uint8_t  p_33);




static int64_t  func_1(void)
{ 
    uint16_t l_9 = 0x5B8BL;
    uint32_t l_28 = 0xBEDFA90EL;
    int32_t l_133 = 0x0B0AC707L;
    const struct S2 l_138 = {0x48A18BD6L,7L,0x0ACF185629ED7CD5LL,2305};
    int32_t l_168 = 0xDA593D3CL;
    int32_t l_170 = 0x3D472E08L;
    for (g_2 = 0; (g_2 <= (-2)); --g_2)
    { 
        struct S0 l_29 = {80,5,-6,46,4,11};
    }
lbl_181:
    g_30[0].f3.f2 |= (safe_div_func_int8_t_s_s(g_53.f0, g_152[4][1][4]));
    for (l_28 = 0; (l_28 >= 53); l_28++)
    { 
        int32_t l_164[5] = {0x7E331B44L,0x7E331B44L,0x7E331B44L,0x7E331B44L,0x7E331B44L};
        int32_t l_179[4] = {0L,0L,0L,0L};
        int8_t l_180 = 8L;
        struct S2 l_182[3] = {{4294967293UL,0x0C340CA8L,0x4FCCDB8902181283LL,386},{4294967293UL,0x0C340CA8L,0x4FCCDB8902181283LL,386},{4294967293UL,0x0C340CA8L,0x4FCCDB8902181283LL,386}};
        int i;
        if (((~((0x30C423CDDDF83816LL & g_43) || (g_53.f3 , (safe_mul_func_uint8_t_u_u((l_164[0] = (((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u(l_164[2], 0x2246E6AAL)) | 0xE15430F9L) != g_53.f0), 4)), l_164[2])) && l_164[2]) , g_120.f2)), (-1L)))))) <= g_34.f1))
        { 
            int16_t l_169 = 0x72FCL;
            int32_t l_171 = 0x255A9511L;
            if ((safe_div_func_uint32_t_u_u(1UL, g_30[0].f3.f0)))
            { 
                int16_t l_167 = 0x70C5L;
                g_53 = g_53;
                if (l_167)
                    break;
            }
            else
            { 
                if (g_30[0].f2)
                    break;
                if (g_96[0])
                    continue;
            }
            g_172++;
            g_53 = l_138;
        }
        else
        { 
            l_180 = (safe_rshift_func_uint8_t_u_u((((g_53.f3 <= l_164[2]) >= ((g_95 ^= ((((((safe_rshift_func_int16_t_s_u((g_120.f2 ^= g_53.f0), 7)) ^ (0x96L == l_164[4])) || 0xBE3B9620L) || g_43) & l_164[2]) <= l_179[3])) & 0x7FL)) < g_53.f0), g_96[0]));
        }
        if (g_53.f0)
            goto lbl_181;
        l_182[2] = l_138;
    }
    return g_30[0].f3.f5;
}



static int8_t  func_12(union U5  p_13, uint64_t  p_14)
{ 
    struct S2 l_123 = {0x2CA422C1L,0x72BC2165L,0x139573E0F90C5DD0LL,2336};
    g_53 = l_123;
    return l_123.f3;
}



static union U5  func_15(const int32_t  p_16, const int32_t  p_17, struct S0  p_18, struct S1  p_19)
{ 
    struct S2 l_78 = {0x035E3094L,-3L,0x55566EC8B7CF170CLL,3780};
    int32_t l_109 = (-1L);
    union U5 l_122 = {0L};
lbl_121:
    l_78 = func_31(g_34, g_34.f2);
    if ((p_18.f2 &= ((-4L) < (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((p_18.f0 = ((safe_div_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((l_78.f3 ^= (safe_mod_func_int16_t_s_s((g_30[0].f1 & (g_96[0] = (g_95 &= (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0L, 252UL)), 0xF5L)) && (-1L)), l_78.f0))))), l_78.f0))) || p_18.f5), (-5L))) , 6L), 1L)) <= 0L)), 4294967295UL)), l_78.f0)))))
    { 
        uint64_t l_106 = 8UL;
        int32_t l_119 = 0xC1F71C78L;
lbl_114:
        g_30[0].f3.f5 = (safe_div_func_uint32_t_u_u((~(l_109 ^= (0x28L > (safe_lshift_func_int16_t_s_s(l_78.f2, (((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((l_106 = p_16), (safe_sub_func_uint16_t_u_u(g_30[0].f3.f3, p_18.f3)))), p_19.f3.f3)) == g_34.f0) & l_78.f3)))))), 0x09D1F70EL));
        for (l_78.f2 = 18; (l_78.f2 < 18); ++l_78.f2)
        { 
            for (g_53.f1 = 0; (g_53.f1 < 20); g_53.f1 = safe_add_func_int8_t_s_s(g_53.f1, 4))
            { 
                const uint8_t l_115[1][2][3] = {{{1UL,1UL,0xC0L},{1UL,1UL,0xC0L}}};
                int i, j, k;
                if (l_78.f0)
                    goto lbl_114;
                l_119 = (l_115[0][1][2] != (~(safe_rshift_func_uint8_t_u_u((g_34.f2 == g_30[0].f1), 0))));
            }
            return g_120;
        }
    }
    else
    { 
        if (g_120.f0)
            goto lbl_121;
    }
    return l_122;
}



static struct S2  func_31(union U3  p_32, uint8_t  p_33)
{ 
    int32_t l_38 = 0x18431BB5L;
    int32_t l_40 = 0x357240E6L;
    int32_t l_41[1];
    struct S2 l_54 = {1UL,0x36AA1284L,0x9D7FF73186757AC1LL,-2610};
    int32_t l_56 = 0x4657E6FFL;
    const int16_t l_59 = 0xDFCAL;
    int i;
    for (i = 0; i < 1; i++)
        l_41[i] = 8L;
    for (p_33 = (-10); (p_33 == 31); p_33 = safe_add_func_uint16_t_u_u(p_33, 6))
    { 
        uint32_t l_37 = 4294967295UL;
        int32_t l_39[3];
        struct S2 l_52 = {4294967295UL,0xD947E9E5L,0x2D056B0C4F586FD7LL,644};
        int i;
        for (i = 0; i < 3; i++)
            l_39[i] = 0x097E410FL;
        l_37 = (0x2EFAL > 0xAD2DL);
        g_44--;
        for (l_40 = (-22); (l_40 >= 29); l_40++)
        { 
            const int32_t l_49 = 0x68021436L;
            l_41[0] ^= (l_39[1] != (l_38 |= (((0x59B3460EE42AC96ALL | ((l_39[2] && l_49) , 0x19D44E4153CDCE3FLL)) , p_33) < g_34.f0)));
            if ((safe_rshift_func_int16_t_s_u(g_34.f1, 15)))
            { 
                l_54 = (g_53 = l_52);
            }
            else
            { 
                int8_t l_55 = (-1L);
                l_55 = p_33;
            }
        }
    }
    l_41[0] |= l_56;
    for (g_53.f1 = 0; (g_53.f1 <= (-1)); --g_53.f1)
    { 
        int16_t l_60[3];
        int32_t l_76 = 9L;
        int32_t l_77 = 0x1C653C2AL;
        int i;
        for (i = 0; i < 3; i++)
            l_60[i] = 0xF38EL;
        l_60[0] = l_59;
        for (g_42 = 0; (g_42 < 24); g_42 = safe_add_func_uint8_t_u_u(g_42, 3))
        { 
            l_54.f3 |= (g_53.f3 &= (safe_div_func_int8_t_s_s(0xE7L, (safe_rshift_func_int16_t_s_s((+(~(safe_add_func_uint64_t_u_u((g_44 |= ((((safe_add_func_int16_t_s_s((l_77 = (~(safe_sub_func_int64_t_s_s((l_76 = (g_30[0].f3 , g_30[0].f3.f2)), ((-1L) >= g_43))))), (-1L))) <= g_42) || l_60[0]) != l_56)), 0xFFCBC420B167AC4CLL)))), 5)))));
        }
    }
    return l_54;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_30[i].f0, "g_30[i].f0", print_hash_value);
        transparent_crc(g_30[i].f1, "g_30[i].f1", print_hash_value);
        transparent_crc(g_30[i].f2, "g_30[i].f2", print_hash_value);
        transparent_crc(g_30[i].f3.f0, "g_30[i].f3.f0", print_hash_value);
        transparent_crc(g_30[i].f3.f1, "g_30[i].f3.f1", print_hash_value);
        transparent_crc(g_30[i].f3.f2, "g_30[i].f3.f2", print_hash_value);
        transparent_crc(g_30[i].f3.f3, "g_30[i].f3.f3", print_hash_value);
        transparent_crc(g_30[i].f3.f4, "g_30[i].f3.f4", print_hash_value);
        transparent_crc(g_30[i].f3.f5, "g_30[i].f3.f5", print_hash_value);

    }
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_34.f2, "g_34.f2", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_53.f1, "g_53.f1", print_hash_value);
    transparent_crc(g_53.f2, "g_53.f2", print_hash_value);
    transparent_crc(g_53.f3, "g_53.f3", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);

    }
    transparent_crc(g_120.f2, "g_120.f2", print_hash_value);
    transparent_crc(g_120.f3, "g_120.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_124[i][j][k], "g_124[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_152[i][j][k], "g_152[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_172, "g_172", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
