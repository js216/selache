// SPDX-License-Identifier: MIT
// cctest_csmith_82c4a693.c --- cctest case csmith_82c4a693 (csmith seed 2193925779)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xecb8703a */

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

// Options:   -s 2193925779 -o /tmp/csmith_gen_z7psooi7/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int16_t  f1;
   int32_t  f2;
   int64_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   struct S0  f1;
   int64_t  f2;
   int16_t  f3;
};


static uint32_t g_15 = 1UL;
static union U1 g_33 = {0x8DCFD8F2L};
static int64_t g_43 = 0x9CC0F90B8A442F2ALL;
static uint8_t g_72 = 7UL;
static int8_t g_73 = 0x2DL;
static int32_t g_80 = 0xF696D9C5L;
static uint8_t g_93 = 1UL;
static struct S0 g_119 = {65533UL,-1L,-1L,-4L,0x4474F446L};
static int16_t g_138 = 5L;
static int8_t g_139[2][5] = {{0x1BL,0x1BL,0x1BL,0x1BL,0x1BL},{(-2L),0x47L,(-2L),0x47L,(-2L)}};
static int16_t g_140 = 1L;
static uint32_t g_141 = 0x5977F738L;
static uint16_t g_165 = 0x7317L;
static uint32_t g_167[2] = {4294967295UL,4294967295UL};
static uint8_t g_175 = 0xB7L;
static int32_t g_209 = (-1L);
static int64_t g_210[2] = {0x7511D3A89534532CLL,0x7511D3A89534532CLL};
static int16_t g_211 = 8L;
static int32_t g_212 = 0x08AF08D7L;
static int32_t g_213 = 0x90293144L;
static int32_t g_215 = (-1L);
static uint32_t g_217 = 1UL;
static uint32_t g_254 = 0UL;
static uint8_t g_307 = 0xDBL;
static int16_t g_331 = 0xD6BFL;



static uint32_t  func_1(void);
static const int32_t  func_8(int32_t  p_9, int64_t  p_10, uint8_t  p_11);
static const uint32_t  func_18(int32_t  p_19, const uint32_t  p_20, uint16_t  p_21);
static int32_t  func_30(uint32_t  p_31, union U1  p_32);




static uint32_t  func_1(void)
{ 
    int64_t l_14 = 0x66C619A80BFB3A4DLL;
    uint32_t l_96 = 0UL;
    int8_t l_314 = (-6L);
    int32_t l_317 = 0xAB25E7EEL;
    const int16_t l_333 = 0x58CBL;
    int32_t l_344 = 0xA8D11B0EL;
    g_119 = ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((func_8(((safe_mul_func_uint16_t_u_u(l_14, g_15)) , (safe_add_func_uint32_t_u_u(func_18(((safe_mul_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(((((safe_div_func_int8_t_s_s(((((func_30(l_14, g_33) < g_15) | 252UL) == g_15) > g_15), l_14)) , 0UL) <= g_15) & 1UL), g_15)) < g_15), g_15)) | 0xCF04A32A0C022AD6LL), l_14)) || g_33.f0), g_15, g_15), g_72))), l_14, l_96) != l_96) != 0xC6D6AA7CL), 1)) ^ l_314), g_213)) | g_139[1][4]), l_14)) , g_119);
    for (g_33.f1.f1 = 0; (g_33.f1.f1 <= 1); g_33.f1.f1 += 1)
    { 
        int32_t l_318 = 0x9842C5C3L;
        int i;
        if (g_165)
            break;
        g_215 ^= ((safe_rshift_func_uint8_t_u_u((g_307 = (g_119.f0 > 0x3EL)), ((0xD8DC904894F32EFBLL >= g_213) & 4L))) && l_317);
        g_119.f4 = (l_318 = 0xB5D319B2L);
        for (g_119.f3 = 1; (g_119.f3 >= 0); g_119.f3 -= 1)
        { 
            uint64_t l_319[4];
            int32_t l_332 = 0xAB68208CL;
            uint32_t l_335 = 0x6C9CD8ABL;
            int i;
            for (i = 0; i < 4; i++)
                l_319[i] = 0UL;
            if (g_33.f0)
                break;
            g_119.f2 &= (l_319[1] ^ (((safe_mod_func_int8_t_s_s((!1L), g_119.f0)) > (l_317 && g_165)) , l_14));
            for (g_119.f0 = 0; (g_119.f0 <= 1); g_119.f0 += 1)
            { 
                int32_t l_334 = 0L;
                l_318 = (((((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(l_317, (((safe_div_func_uint16_t_u_u(0UL, (safe_mul_func_int16_t_s_s(((g_307 = (((((l_332 = (l_14 <= g_331)) , 0UL) || l_333) | g_72) <= 0xA17CL)) == g_210[1]), g_141)))) && l_334) > l_318))) , l_335), g_139[0][2])) > 0xF8F4L) > 0x22L) == g_331) , l_334);
                if (l_14)
                    continue;
                l_332 &= l_333;
            }
        }
    }
    g_119.f2 = (safe_add_func_int8_t_s_s(1L, (((g_72 , (++g_167[1])) ^ (safe_mod_func_uint32_t_u_u((l_344 &= (safe_add_func_int8_t_s_s(((0x3AL < l_96) > g_73), g_80))), g_138))) >= l_14)));
    return g_213;
}



static const int32_t  func_8(int32_t  p_9, int64_t  p_10, uint8_t  p_11)
{ 
    uint8_t l_106 = 255UL;
    int32_t l_116 = 0x111D03F4L;
    int32_t l_117 = 0xE9FA02E7L;
    int64_t l_118 = 0x114A321833FEF3BFLL;
    struct S0 l_120 = {0UL,0xB28EL,-1L,-9L,-4L};
    int16_t l_199[2];
    int32_t l_205 = 0x250EA038L;
    int i;
    for (i = 0; i < 2; i++)
        l_199[i] = 2L;
    if ((safe_div_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int32_t_s((safe_mod_func_int8_t_s_s(((((((g_33.f1.f0 = l_106) ^ (safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint8_t_u_u((g_72 = g_72), (safe_add_func_int64_t_s_s((((p_9 , ((safe_unary_minus_func_int32_t_s(((safe_add_func_uint64_t_u_u((l_116 = g_93), g_73)) , p_11))) == l_106)) && p_11) && 1L), g_73)))) , p_11) ^ g_93), g_15))) , 6L) ^ g_73) != g_93) & l_117), p_9)))) == p_10), 6)) || l_106), 0x908F88A645C98B20LL)) <= l_118), g_93)))
    { 
        const int64_t l_121 = 0xAE76681864D21BD3LL;
        int8_t l_132 = 0x56L;
        int32_t l_133 = 0x34A4F5E2L;
        l_120 = g_119;
        if (g_93)
        { 
            return l_121;
        }
        else
        { 
            uint8_t l_122[5][2][4] = {{{1UL,253UL,253UL,1UL},{253UL,1UL,253UL,253UL}},{{1UL,1UL,0x8FL,1UL},{1UL,253UL,253UL,1UL}},{{253UL,1UL,253UL,253UL},{1UL,1UL,0x8FL,1UL}},{{1UL,253UL,253UL,1UL},{253UL,1UL,253UL,253UL}},{{253UL,253UL,1UL,253UL},{253UL,0x8FL,0x8FL,253UL}}};
            int32_t l_123[4];
            uint16_t l_145 = 65529UL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_123[i] = (-1L);
            for (p_10 = 1; (p_10 >= 0); p_10 -= 1)
            { 
                l_123[0] = 7L;
                return g_72;
            }
            l_145 = (0UL < ((safe_div_func_uint8_t_u_u((safe_div_func_int64_t_s_s((g_33 , (safe_lshift_func_int16_t_s_s((((g_93 < (g_119.f3 |= ((safe_mul_func_uint16_t_u_u((--g_119.f0), (safe_add_func_uint32_t_u_u(((g_141++) == (!((p_10 , l_117) != 0xA3FBL))), g_140)))) == 0x650DF9A6L))) >= 0x8641BEBD96B05D7DLL) && g_72), 9))), g_15)), g_138)) > l_133));
        }
        for (l_132 = 20; (l_132 != 11); l_132 = safe_sub_func_uint64_t_u_u(l_132, 3))
        { 
            int32_t l_166 = 0L;
            int32_t l_174 = 0x7AE31396L;
            for (l_133 = 0; (l_133 <= 1); l_133 += 1)
            { 
                struct S0 l_150 = {65535UL,4L,0xA84B1F90L,3L,6L};
                int i, j;
                l_166 = (safe_lshift_func_uint16_t_u_s(((l_150 , (safe_div_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(0x690506A2L, (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((g_139[l_133][(l_133 + 1)] , (safe_lshift_func_int16_t_s_u((((g_165 ^= 0x0452890DC26B4E49LL) | g_43) , 0L), 11))) && p_10), p_10)), p_11)), l_150.f0)), 15)))) | 0xB9F5DD3F592D9886LL), g_80))) > p_10), g_141));
            }
            for (l_120.f0 = 0; (l_120.f0 <= 1); l_120.f0 += 1)
            { 
                uint32_t l_176 = 0UL;
                g_119.f4 &= ((++g_167[1]) <= ((0x5887L < ((((safe_rshift_func_uint8_t_u_s(p_11, 0)) ^ (g_175 = (safe_rshift_func_uint8_t_u_u(p_11, (((l_174 = 0x91D5C63FL) != g_43) || p_11))))) > l_176) > 0x2FL)) , l_166));
            }
            for (g_33.f1.f0 = 0; (g_33.f1.f0 != 60); ++g_33.f1.f0)
            { 
                if (g_73)
                    break;
            }
        }
    }
    else
    { 
        uint32_t l_188[4][3][2] = {{{4294967295UL,0x9171A507L},{0UL,4294967292UL},{0UL,0x9171A507L}},{{4294967295UL,0UL},{0x9171A507L,4294967292UL},{0xBF0741CDL,0xBF0741CDL}},{{4294967295UL,0xBF0741CDL},{0xBF0741CDL,4294967292UL},{0x9171A507L,0UL}},{{4294967295UL,0x9171A507L},{0UL,4294967292UL},{0UL,0x9171A507L}}};
        int i, j, k;
        l_188[2][0][0] |= (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(3L)), p_10)), p_11)), (safe_mul_func_int16_t_s_s(p_9, 0xBBEEL))));
    }
    if ((((safe_mul_func_int16_t_s_s(1L, g_43)) ^ ((safe_div_func_uint64_t_u_u((g_165 <= (1L ^ g_165)), g_80)) <= g_138)) & g_119.f3))
    { 
        return l_106;
    }
    else
    { 
        uint32_t l_200 = 0xB1905C5DL;
        int32_t l_206 = (-1L);
        int32_t l_207 = (-1L);
        int32_t l_208 = 0x13E252BFL;
        int32_t l_214 = 0xAACCC2DFL;
        int32_t l_216 = (-1L);
        int64_t l_232 = 0x3DF663D83FAE531CLL;
        int32_t l_233 = 1L;
        for (p_11 = 0; (p_11 == 6); ++p_11)
        { 
            if (g_141)
                break;
            if ((safe_rshift_func_uint16_t_u_s((l_200 |= (l_199[0] = 0xEDECL)), 9)))
            { 
                return p_10;
            }
            else
            { 
                l_206 = ((g_165--) | (g_140 >= ((safe_mod_func_int8_t_s_s((((l_120.f4 = l_120.f3) && g_72) & (-1L)), l_205)) > 253UL)));
            }
            for (l_200 = 0; (l_200 <= 1); l_200 += 1)
            { 
                int i;
                g_217--;
                l_205 &= ((safe_sub_func_int8_t_s_s(g_167[l_200], (((((safe_mul_func_uint16_t_u_u(((1L | 0xA745DD4CL) < (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((((((safe_div_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(255UL, g_139[1][0])) <= l_216), l_120.f2)) & 4294967294UL) , 65532UL) , 0x775FD7C9B70E134CLL) < l_116), 0x5209L)), l_232))), l_233)) ^ p_11) , p_10) , 18446744073709551606UL) , 0xB1L))) <= g_139[1][0]);
                if (p_10)
                    continue;
            }
        }
        l_214 ^= p_11;
    }
    for (g_73 = 3; (g_73 <= 20); g_73 = safe_add_func_int8_t_s_s(g_73, 2))
    { 
        int32_t l_244 = 0xC3F4754FL;
        int32_t l_259 = 0xDE73A24DL;
        int32_t l_296 = 0xFD385860L;
        if (g_213)
        { 
            if (p_9)
                break;
        }
        else
        { 
            uint16_t l_245 = 0x77C5L;
            for (l_120.f2 = 0; (l_120.f2 >= 8); l_120.f2++)
            { 
                g_119.f2 ^= (((l_199[1] == p_9) && (safe_div_func_int32_t_s_s((l_245 = (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((g_165 |= (((((g_209 &= g_139[1][0]) & l_244) > 65535UL) , 0x4DL) & g_15)) , 0xFFL), 0x38L)), l_120.f4))), p_10))) >= l_244);
            }
            l_120.f2 ^= (-1L);
        }
        g_119.f4 = (l_259 = (g_33.f1.f2 = (l_244 = (((safe_add_func_int32_t_s_s(0x4D8C579BL, (safe_sub_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u((l_116 = p_9), 3L)) >= (safe_div_func_uint64_t_u_u((--g_254), (safe_rshift_func_uint16_t_u_u(0x45A5L, 4))))), p_10)))) && 0UL) >= p_9))));
        for (l_205 = 0; (l_205 == 15); l_205 = safe_add_func_int16_t_s_s(l_205, 1))
        { 
            uint16_t l_272 = 0x31CCL;
            int32_t l_297[5] = {0x5DBDD885L,0x5DBDD885L,0x5DBDD885L,0x5DBDD885L,0x5DBDD885L};
            int i;
            g_209 = (safe_unary_minus_func_int64_t_s((safe_add_func_int32_t_s_s((((((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((safe_div_func_uint8_t_u_u(0UL, (safe_add_func_uint32_t_u_u((((0xC9C7L || p_10) < l_272) >= l_272), g_209)))))), p_10)) >= p_11) >= p_10) > l_272) || g_211), 0xEA5A7A90L))));
            if (g_43)
                continue;
        }
    }
    return l_205;
}



static const uint32_t  func_18(int32_t  p_19, const uint32_t  p_20, uint16_t  p_21)
{ 
    int8_t l_70[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_70[i][j] = 3L;
    }
    for (g_15 = 0; (g_15 < 55); g_15 = safe_add_func_uint64_t_u_u(g_15, 7))
    { 
        uint64_t l_67 = 0x0A54AE8BCD06DB25LL;
        int32_t l_90 = (-1L);
        l_67--;
        for (g_33.f1.f3 = 2; (g_33.f1.f3 >= 0); g_33.f1.f3 -= 1)
        { 
            uint32_t l_71 = 0x419813DAL;
            int i, j;
            l_71 &= 1L;
            if (g_72)
                break;
            g_73 |= (p_19 = l_70[2][1]);
        }
        for (l_67 = 0; (l_67 <= 2); l_67 += 1)
        { 
            uint64_t l_81 = 18446744073709551606UL;
            uint32_t l_91 = 0x5526C9E8L;
            int32_t l_92 = (-1L);
            int i, j;
            for (p_21 = 0; (p_21 <= 2); p_21 += 1)
            { 
                int i, j;
                p_19 = l_70[p_21][l_67];
            }
            p_19 = (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((l_81++), (-1L))), (((l_92 = (((safe_add_func_int64_t_s_s((((l_70[l_67][l_67] | g_73) || (l_91 = (safe_mul_func_uint16_t_u_u((l_90 &= ((safe_lshift_func_int8_t_s_u(((g_33.f1.f1 = g_43) , 0x1EL), 3)) < 0x107AL)), g_43)))) == 1UL), 1L)) ^ p_19) != l_70[l_67][l_67])) != l_67) == g_80))) > g_72), p_21));
            g_93++;
        }
    }
    return l_70[2][1];
}



static int32_t  func_30(uint32_t  p_31, union U1  p_32)
{ 
    int32_t l_41 = 0xD41BD43DL;
    struct S0 l_60[2] = {{0xECDEL,-10L,1L,0x5C6A8B5F6E56995ELL,0L},{0xECDEL,-10L,1L,0x5C6A8B5F6E56995ELL,0L}};
    int32_t l_61[1][3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_61[i][j] = (-1L);
    }
    for (p_32.f1.f3 = (-27); (p_32.f1.f3 > (-4)); ++p_32.f1.f3)
    { 
        uint8_t l_40 = 255UL;
        uint64_t l_42 = 1UL;
        int32_t l_44 = 0x29BA1F1CL;
        g_43 &= ((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(((l_40 , ((6L >= (((l_40 ^ ((l_41 | l_40) , l_42)) > 0x52275DD3610CB4E3LL) <= 0x68F25CE5L)) , 1UL)) >= p_32.f0), 1L)), 1)) , g_33.f3);
        l_44 = 0xFA2E85C6L;
    }
    for (g_33.f1.f2 = (-18); (g_33.f1.f2 < (-12)); g_33.f1.f2 = safe_add_func_uint64_t_u_u(g_33.f1.f2, 9))
    { 
        uint64_t l_53 = 1UL;
        int32_t l_64 = 0xC332E49DL;
        for (l_41 = 0; (l_41 != 25); l_41 = safe_add_func_int16_t_s_s(l_41, 5))
        { 
            int8_t l_62 = 0x68L;
            int32_t l_63 = 0L;
            if (p_31)
                break;
            l_64 ^= ((l_63 = (safe_mod_func_int32_t_s_s((((++p_32.f0) , l_53) && (((0x2BL >= ((safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((p_32.f1.f2 = (l_61[0][1] ^= (((g_43 > (l_60[1] , 4L)) , g_43) != l_53))), 0x64E94140L)), l_53)), 0x4B5077743AFF46A2LL)) , p_32.f0)) , 0x82L) ^ l_53)), l_62))) >= 1UL);
        }
    }
    return g_33.f0;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f3, "g_33.f3", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_119.f2, "g_119.f2", print_hash_value);
    transparent_crc(g_119.f3, "g_119.f3", print_hash_value);
    transparent_crc(g_119.f4, "g_119.f4", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_139[i][j], "g_139[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_167[i], "g_167[i]", print_hash_value);

    }
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_210[i], "g_210[i]", print_hash_value);

    }
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
