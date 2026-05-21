// SPDX-License-Identifier: MIT
// cctest_csmith_48531cd4.c --- cctest case csmith_48531cd4 (csmith seed 1213406420)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x280e2a8c */

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

// Options:   -s 1213406420 -o /tmp/csmith_gen_5bpw_avn/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint64_t  f0;
   uint8_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int8_t  f0;
   int32_t  f1;
   int64_t  f2;
   const struct S0  f3;
   uint32_t  f4;
   const uint16_t  f5;
   int32_t  f6;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   const int64_t  f1;
   int8_t  f2;
   uint32_t  f3;
   int8_t  f4;
   int32_t  f5;
   int32_t  f6;
   const uint32_t  f7;
};
#pragma pack(pop)

struct S3 {
   const uint8_t  f0;
};

struct S4 {
   const int64_t  f0;
   const struct S1  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S5 {
   int8_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   int16_t  f3;
   const int32_t  f4;
   int8_t  f5;
   int32_t  f6;
   struct S2  f7;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S6 {
   const int64_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S7 {
   uint32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S8 {
   struct S2  f0;
   struct S3  f1;
   struct S0  f2;
   int32_t  f3;
   int8_t  f4;
};
#pragma pack(pop)

union U9 {
   uint8_t  f0;
};

union U10 {
   uint64_t  f0;
   int16_t  f1;
   struct S1  f2;
};


static uint32_t g_18[5][4] = {{0x8EB0BADCL,0x8EB0BADCL,0x8EB0BADCL,0x8EB0BADCL},{0x8EB0BADCL,0x8EB0BADCL,0x8EB0BADCL,0x8EB0BADCL},{0x8EB0BADCL,0x8EB0BADCL,0x8EB0BADCL,0x8EB0BADCL},{0x8EB0BADCL,0x8EB0BADCL,0x8EB0BADCL,0x8EB0BADCL},{0x8EB0BADCL,0x8EB0BADCL,0x8EB0BADCL,0x8EB0BADCL}};
static struct S3 g_19[3] = {{251UL},{251UL},{251UL}};
static uint8_t g_23 = 1UL;
static struct S7 g_31[4][1] = {{{0xBABA27FAL}},{{0xBABA27FAL}},{{0xBABA27FAL}},{{0xBABA27FAL}}};
static int32_t g_32 = 0x9CC5119BL;
static uint8_t g_36 = 0UL;
static uint16_t g_40[5] = {0xEDFDL,0xEDFDL,0xEDFDL,0xEDFDL,0xEDFDL};
static union U10 g_41 = {0x8DCCB67721BC9AF0LL};
static struct S0 g_49 = {1UL,0xA7L,-1L};
static uint8_t *g_62[3][3][5] = {{{&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,(void*)0,&g_49.f1},{&g_23,&g_23,&g_23,(void*)0,&g_23}},{{&g_23,(void*)0,(void*)0,&g_23,(void*)0},{&g_23,&g_23,&g_23,&g_23,(void*)0},{&g_23,&g_23,(void*)0,&g_23,&g_23}},{{&g_23,&g_23,&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23,&g_23,(void*)0}}};
static uint8_t **g_61 = &g_62[0][0][0];
static uint64_t g_77 = 0x1C57EA6FF285608BLL;
static uint64_t *g_81 = &g_77;
static uint64_t **g_80 = &g_81;
static uint8_t g_89 = 0x2CL;
static uint32_t g_95 = 0xEFAF6FF1L;
static int16_t g_109 = 0x97AEL;
static uint64_t g_110[4][4] = {{2UL,0xF9DEAA75BC96B2B8LL,0xF9DEAA75BC96B2B8LL,2UL},{0xF9DEAA75BC96B2B8LL,2UL,0xF9DEAA75BC96B2B8LL,0xF9DEAA75BC96B2B8LL},{2UL,2UL,0x3C5DB116D794BBECLL,2UL},{2UL,0xF9DEAA75BC96B2B8LL,0xF9DEAA75BC96B2B8LL,2UL}};
static int64_t g_122 = 0x9817D95232D534F4LL;
static int16_t g_128 = 0xB883L;
static uint16_t g_130 = 1UL;
static uint64_t ***g_181 = &g_80;
static uint64_t ****g_180 = &g_181;
static struct S4 g_192 = {-2L,{0x49L,0L,0xB2EAF8C538581BCBLL,{18446744073709551614UL,0x7CL,8L},0x11C631CBL,65535UL,0L}};
static int32_t g_195 = 0xD0F614CBL;
static int64_t g_196 = 0L;
static int32_t g_197 = 0L;
static int16_t g_198 = 0x2D1EL;
static uint32_t g_199 = 18446744073709551606UL;
static uint32_t g_222 = 4294967295UL;
static struct S8 g_223 = {{8UL,0L,1L,4294967295UL,-8L,-3L,-1L,0xBE1485A5L},{0xB8L},{18446744073709551611UL,0x69L,0L},0x26B199A5L,0xFFL};
static union U9 g_232 = {252UL};
static const union U9 *g_231 = &g_232;
static int64_t g_309[7] = {0xC1E190E94755083ALL,0L,0xC1E190E94755083ALL,0xC1E190E94755083ALL,0L,0xC1E190E94755083ALL,0xC1E190E94755083ALL};
static int32_t g_310 = (-1L);
static int64_t g_312 = 0x1B7B4221DD11894ELL;
static uint64_t g_339[5] = {0UL,0UL,0UL,0UL,0UL};
static struct S2 *g_354 = &g_223.f0;
static struct S2 **g_353 = &g_354;
static uint8_t g_368 = 250UL;
static struct S8 g_384 = {{4294967289UL,6L,1L,0x25983EC2L,0xF6L,0L,0x35667D9DL,0xA1685C75L},{0xAFL},{0x22766F41D7D2CB30LL,0xA1L,-1L},1L,1L};
static const struct S3 g_388 = {255UL};
static int16_t g_389 = 0xA16CL;
static int16_t g_390 = 6L;
static uint32_t g_392 = 1UL;
static uint64_t g_407 = 18446744073709551611UL;
static int32_t g_421[2][1] = {{0L},{0L}};
static struct S3 * const g_428 = &g_19[1];
static struct S3 * const *g_427 = &g_428;
static union U10 *g_442 = &g_41;
static union U10 **g_441[7][6][4] = {{{&g_442,&g_442,&g_442,&g_442},{&g_442,&g_442,(void*)0,&g_442},{&g_442,(void*)0,(void*)0,&g_442},{&g_442,&g_442,&g_442,&g_442},{&g_442,(void*)0,&g_442,&g_442},{&g_442,&g_442,&g_442,&g_442}},{{&g_442,&g_442,(void*)0,&g_442},{&g_442,(void*)0,(void*)0,&g_442},{&g_442,&g_442,&g_442,&g_442},{&g_442,(void*)0,&g_442,&g_442},{&g_442,&g_442,&g_442,&g_442},{&g_442,&g_442,(void*)0,&g_442}},{{&g_442,(void*)0,(void*)0,&g_442},{&g_442,&g_442,&g_442,&g_442},{&g_442,(void*)0,&g_442,&g_442},{&g_442,&g_442,&g_442,&g_442},{&g_442,&g_442,(void*)0,&g_442},{&g_442,(void*)0,(void*)0,&g_442}},{{&g_442,&g_442,&g_442,&g_442},{&g_442,(void*)0,&g_442,&g_442},{&g_442,&g_442,&g_442,&g_442},{&g_442,&g_442,(void*)0,&g_442},{&g_442,(void*)0,(void*)0,&g_442},{&g_442,&g_442,&g_442,&g_442}},{{&g_442,(void*)0,&g_442,&g_442},{&g_442,&g_442,&g_442,&g_442},{&g_442,&g_442,(void*)0,&g_442},{&g_442,(void*)0,(void*)0,&g_442},{&g_442,&g_442,&g_442,&g_442},{&g_442,(void*)0,&g_442,&g_442}},{{&g_442,&g_442,&g_442,&g_442},{&g_442,&g_442,(void*)0,&g_442},{&g_442,(void*)0,&g_442,(void*)0},{&g_442,&g_442,&g_442,(void*)0},{(void*)0,&g_442,(void*)0,&g_442},{(void*)0,&g_442,&g_442,&g_442}},{{&g_442,&g_442,&g_442,&g_442},{&g_442,&g_442,&g_442,(void*)0},{&g_442,&g_442,&g_442,(void*)0},{(void*)0,&g_442,(void*)0,&g_442},{(void*)0,&g_442,&g_442,&g_442},{&g_442,&g_442,&g_442,&g_442}}};
static uint8_t g_516[6] = {0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL};
static struct S1 g_549 = {0L,0xDBF1EBFCL,0L,{18446744073709551610UL,0x8BL,0xF9128E30L},0x9EFD261EL,1UL,0xCCE772B2L};
static int32_t *g_598 = &g_384.f0.f5;
static struct S3 g_606 = {0xC5L};
static int16_t *g_638[1][7] = {{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198,&g_198}};
static int16_t **g_637 = &g_638[0][4];
static union U9 *g_668 = &g_232;
static union U9 **g_667[6] = {&g_668,&g_668,&g_668,&g_668,&g_668,&g_668};
static union U9 ***g_666 = &g_667[3];
static union U10 g_702 = {0x8200F602FFD29014LL};
static uint8_t **g_823 = &g_62[0][0][0];
static int16_t g_827 = 1L;
static struct S6 g_873 = {0xAAD53F177008DC2CLL};
static int64_t *g_969 = (void*)0;
static int64_t **g_968 = &g_969;
static int64_t ***g_967 = &g_968;
static struct S4 g_1024 = {0x0567A9B589106529LL,{0L,0x866D40EEL,0x1D8FBBC04F957F73LL,{0x6771348DE5805382LL,0x2BL,-1L},5UL,1UL,0x77B387F0L}};
static int32_t ***g_1030 = (void*)0;
static uint16_t g_1040 = 1UL;
static int8_t *g_1121 = (void*)0;
static struct S7 *g_1167 = &g_31[0][0];
static struct S7 **g_1166 = &g_1167;
static struct S7 ***g_1165 = &g_1166;
static struct S7 ****g_1164 = &g_1165;
static struct S1 *g_1177 = &g_549;
static struct S1 * const *g_1176 = &g_1177;
static struct S1 * const **g_1175 = &g_1176;
static const uint16_t g_1188 = 0UL;
static struct S5 g_1192 = {0xC0L,0xD4DE5D89L,6UL,1L,-3L,-4L,0x5F49B6F5L,{0xD6B80DDFL,1L,0x65L,4294967292UL,0x55L,0x8B0B7885L,0x67D8E55CL,0UL}};
static uint16_t g_1212 = 0UL;
static int64_t g_1239 = (-1L);
static struct S3 g_1259 = {7UL};
static uint16_t g_1317 = 65535UL;
static uint16_t g_1354 = 0x912EL;
static struct S0 *g_1385[1] = {(void*)0};
static union U10 ***g_1421 = &g_441[6][2][1];
static union U10 ****g_1420 = &g_1421;
static struct S8 g_1500[6] = {{{0x7E4AEF2BL,-1L,0xFDL,0x7CABDCD8L,-1L,-2L,0x26735461L,18446744073709551611UL},{0xB4L},{0x803EA00D3A685FEDLL,0x28L,0xB8409E00L},0xAE25A057L,0L},{{0x7E4AEF2BL,-1L,0xFDL,0x7CABDCD8L,-1L,-2L,0x26735461L,18446744073709551611UL},{0xB4L},{0x803EA00D3A685FEDLL,0x28L,0xB8409E00L},0xAE25A057L,0L},{{0x7E4AEF2BL,-1L,0xFDL,0x7CABDCD8L,-1L,-2L,0x26735461L,18446744073709551611UL},{0xB4L},{0x803EA00D3A685FEDLL,0x28L,0xB8409E00L},0xAE25A057L,0L},{{0x7E4AEF2BL,-1L,0xFDL,0x7CABDCD8L,-1L,-2L,0x26735461L,18446744073709551611UL},{0xB4L},{0x803EA00D3A685FEDLL,0x28L,0xB8409E00L},0xAE25A057L,0L},{{0x7E4AEF2BL,-1L,0xFDL,0x7CABDCD8L,-1L,-2L,0x26735461L,18446744073709551611UL},{0xB4L},{0x803EA00D3A685FEDLL,0x28L,0xB8409E00L},0xAE25A057L,0L},{{0x7E4AEF2BL,-1L,0xFDL,0x7CABDCD8L,-1L,-2L,0x26735461L,18446744073709551611UL},{0xB4L},{0x803EA00D3A685FEDLL,0x28L,0xB8409E00L},0xAE25A057L,0L}};
static struct S8 *g_1499 = &g_1500[5];
static int8_t g_1526 = 0L;
static int8_t g_1583 = (-3L);
static uint64_t g_1589 = 18446744073709551615UL;
static uint16_t *g_1603 = &g_130;
static uint16_t **g_1602 = &g_1603;
static struct S5 *g_1630 = &g_1192;
static struct S5 ** const g_1629 = &g_1630;
static struct S4 g_1636 = {0x23CAF71E07B4648CLL,{-2L,1L,0x49ECC7477321A125LL,{1UL,5UL,0xF787E4E1L},0UL,65526UL,-1L}};
static struct S1 ** const **g_1639 = (void*)0;
static struct S3 *g_1652 = (void*)0;
static struct S7 g_1664 = {1UL};
static uint32_t g_1756 = 0xC86883B5L;
static union U9 ****g_1824 = (void*)0;
static struct S2 * const **g_1866 = (void*)0;
static union U9 g_1892 = {1UL};
static const struct S3 *g_1914 = &g_1259;
static const struct S3 ** const g_1913 = &g_1914;
static const struct S3 ** const *g_1912 = &g_1913;
static const struct S3 ** const **g_1911 = &g_1912;
static struct S3 ***g_1916 = (void*)0;
static struct S3 ****g_1915 = &g_1916;
static int64_t g_1923 = 0xCD4942D81DF02EAELL;
static struct S0 g_1957 = {18446744073709551615UL,0xEBL,0x18804051L};
static const struct S5 *g_2046[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static const struct S5 * const *g_2045 = &g_2046[0][0];
static const struct S5 * const **g_2044 = &g_2045;



static union U10  func_1(void);
static uint32_t  func_6(const struct S3  p_7, struct S2  p_8, uint16_t  p_9, struct S5  p_10, int32_t  p_11);
static struct S2  func_13(int32_t  p_14, struct S3  p_15, union U10  p_16, int16_t  p_17);
static union U10  func_20(uint8_t  p_21);
static int32_t * func_42(int32_t * p_43, struct S7  p_44, struct S0  p_45, int32_t * p_46);
static int32_t * func_47(struct S0  p_48);
static uint8_t ** func_52(uint8_t * p_53, int32_t * p_54, struct S8  p_55, struct S3  p_56, uint8_t * p_57);
static struct S8  func_59(uint8_t ** p_60);




static union U10  func_1(void)
{ 
    const struct S3 l_12[2][5] = {{{0xFAL},{0xFAL},{0xFAL},{0xFAL},{0xFAL}},{{0xFAL},{0xFAL},{0xFAL},{0xFAL},{0xFAL}}};
    uint8_t *l_22[5][5][7] = {{{(void*)0,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23}},{{&g_23,&g_23,(void*)0,&g_23,&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23,&g_23,(void*)0,&g_23,&g_23},{&g_23,(void*)0,&g_23,&g_23,&g_23,&g_23,&g_23}},{{&g_23,(void*)0,(void*)0,&g_23,&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23,&g_23,(void*)0,&g_23,(void*)0},{&g_23,(void*)0,(void*)0,&g_23,(void*)0,&g_23,&g_23},{(void*)0,(void*)0,&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,(void*)0,(void*)0,&g_23,&g_23,&g_23,&g_23}},{{&g_23,&g_23,(void*)0,&g_23,&g_23,(void*)0,(void*)0},{&g_23,&g_23,(void*)0,&g_23,&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0,&g_23,&g_23,(void*)0,(void*)0},{&g_23,(void*)0,&g_23,&g_23,&g_23,&g_23,(void*)0}},{{&g_23,&g_23,&g_23,&g_23,(void*)0,&g_23,(void*)0},{&g_23,&g_23,&g_23,&g_23,&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,(void*)0},{&g_23,&g_23,(void*)0,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23,(void*)0,&g_23}}};
    int32_t l_24 = (-7L);
    int32_t l_25 = 0x6B4C01F9L;
    int32_t l_26[4] = {0xC9060546L,0xC9060546L,0xC9060546L,0xC9060546L};
    uint64_t *** const l_1314 = (void*)0;
    const int16_t l_1315 = 0x9A53L;
    uint16_t l_1316 = 0UL;
    struct S5 l_1469 = {-2L,1UL,0xDCADL,0x4191L,0x228974E4L,1L,0x6CB3E713L,{4294967295UL,3L,-8L,4294967295UL,0x8FL,0xE483FBCBL,0xCB40D0BAL,0xC25E2058L}};
    int64_t l_1523 = 0x0FDAFE34EBA7DB04LL;
    int32_t *l_1524 = (void*)0;
    int32_t *l_1525[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    uint16_t l_1542 = 65535UL;
    struct S0 l_1563 = {18446744073709551615UL,0x2DL,0xCF8F065EL};
    int16_t l_1577 = (-8L);
    uint16_t l_1584 = 0x7376L;
    uint16_t *l_1600 = &g_1040;
    uint16_t * const *l_1599[4] = {&l_1600,&l_1600,&l_1600,&l_1600};
    union U10 l_1606 = {1UL};
    struct S8 *l_1611 = &g_384;
    struct S5 **l_1631 = &g_1630;
    const struct S4 *l_1635[7][6] = {{(void*)0,&g_192,&g_192,&g_1636,&g_1636,&g_192},{(void*)0,(void*)0,&g_1636,&g_1636,&g_192,&g_1636},{&g_192,(void*)0,&g_192,&g_192,&g_1636,&g_1636},{&g_1636,&g_192,&g_192,&g_1636,(void*)0,&g_1636},{&g_1636,&g_1636,&g_1636,&g_1636,&g_1636,&g_192},{&g_1636,&g_1636,&g_192,&g_192,&g_1636,&g_1636},{&g_192,&g_1636,(void*)0,&g_1636,(void*)0,&g_1636}};
    uint64_t *****l_1657 = &g_180;
    struct S7 l_1660[5][3] = {{{0x370A405DL},{0x370A405DL},{0x783B6E13L}},{{0x370A405DL},{0x370A405DL},{0x783B6E13L}},{{0x370A405DL},{0x370A405DL},{0x783B6E13L}},{{0x370A405DL},{0x370A405DL},{0x783B6E13L}},{{0x370A405DL},{0x370A405DL},{0x783B6E13L}}};
    int32_t *l_1666 = &g_41.f2.f6;
    struct S1 l_1700 = {0xCEL,0x72B82FC4L,-8L,{18446744073709551614UL,255UL,0L},0x6EE4BF08L,0x659AL,0x6F31AF74L};
    int32_t l_1705 = (-10L);
    struct S1 *l_1723 = &l_1700;
    uint64_t l_1733 = 0x04285D10F123191ELL;
    int8_t l_1736[2];
    int32_t l_1763 = 0x3394D4BBL;
    uint32_t l_1773 = 0x238A6D74L;
    uint32_t l_1865 = 0xD25E4250L;
    uint8_t ** const *l_1893 = &g_823;
    struct S3 **l_1898[7] = {&g_1652,&g_1652,&g_1652,&g_1652,&g_1652,&g_1652,&g_1652};
    int8_t l_1931 = 0L;
    uint16_t l_1933 = 65530UL;
    struct S0 *l_1956 = &g_1957;
    int16_t **l_1982 = &g_638[0][1];
    uint8_t **l_2002 = &l_22[1][2][2];
    uint64_t l_2005 = 1UL;
    int32_t l_2035 = 0x81A19C31L;
    int16_t l_2047 = 8L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1736[i] = 0x42L;
    return l_1606;
}



static uint32_t  func_6(const struct S3  p_7, struct S2  p_8, uint16_t  p_9, struct S5  p_10, int32_t  p_11)
{ 
    uint64_t l_1470 = 9UL;
    int32_t l_1484 = 0xFDA168DAL;
    int32_t **l_1506 = &g_598;
    uint8_t **l_1509 = (void*)0;
    struct S5 *l_1522 = (void*)0;
    struct S5 **l_1521 = &l_1522;
    for (p_10.f7.f6 = 5; (p_10.f7.f6 >= 0); p_10.f7.f6 -= 1)
    { 
        struct S3 *****l_1471 = (void*)0;
        const struct S7 l_1502 = {4UL};
        uint16_t *l_1504[6];
        uint16_t **l_1503 = &l_1504[4];
        uint16_t ***l_1505 = &l_1503;
        int i;
        for (i = 0; i < 6; i++)
            l_1504[i] = &g_130;
        l_1470 = (((*g_81) = 18446744073709551615UL) , g_309[(p_10.f7.f6 + 1)]);
        for (p_10.f3 = 6; (p_10.f3 >= 0); p_10.f3 -= 1)
        { 
            const struct S6 l_1474 = {0x2842C718E1F2B609LL};
            l_1471 = l_1471;
            if (((g_309[(p_10.f7.f6 + 1)] & ((l_1474 , ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_int64_t_s((((*g_442) , (g_384 , ((***g_181) = 5UL))) != p_10.f2))) || (l_1484 = (((safe_mul_func_int8_t_s_s(p_10.f5, 4UL)) != l_1470) > 0xFB82L))), (**g_637))) | p_8.f6) || l_1474.f0), 0x4DL)), p_8.f5)) != p_10.f5)) != l_1474.f0)) && p_8.f3))
            { 
                uint64_t ***l_1491 = &g_80;
                int8_t *l_1495[5][4] = {{&g_1192.f7.f4,&g_1192.f7.f4,&g_1192.f7.f4,&g_1192.f7.f4},{&g_1192.f7.f4,&g_1192.f7.f4,&g_1192.f7.f4,&g_1192.f7.f4},{&g_1192.f7.f4,&g_1192.f7.f4,&g_1192.f7.f4,&g_1192.f7.f4},{&g_1192.f7.f4,&g_1192.f7.f4,&g_1192.f7.f4,&g_1192.f7.f4},{&g_1192.f7.f4,&g_1192.f7.f4,&g_1192.f7.f4,&g_1192.f7.f4}};
                int i, j;
                if (p_8.f2)
                    break;
                if ((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(g_195, 65526UL)) <= ((**g_80) = ((((*g_180) = l_1491) == (void*)0) ^ ((safe_lshift_func_int8_t_s_s((g_1192.f5 &= ((~g_309[(p_10.f7.f6 + 1)]) >= (**g_637))), 6)) & p_11)))), g_1354)), l_1484)))
                { 
                    return g_388.f0;
                }
                else
                { 
                    int32_t *l_1496 = &g_384.f0.f5;
                    struct S4 *l_1498 = &g_1024;
                    struct S4 **l_1497 = &l_1498;
                    (*l_1496) |= p_10.f7.f1;
                    (*l_1497) = &g_1024;
                    return p_10.f7.f2;
                }
            }
            else
            { 
                int32_t l_1501 = 0L;
                for (g_197 = 6; (g_197 >= 0); g_197 -= 1)
                { 
                    g_1499 = &g_223;
                    l_1501 = 0x9E8A366DL;
                    if (l_1501)
                        break;
                    (****g_1164) = l_1502;
                }
                return p_8.f7;
            }
        }
        for (g_223.f0.f4 = 5; (g_223.f0.f4 >= 1); g_223.f0.f4 -= 1)
        { 
            int i;
            return g_516[p_10.f7.f6];
        }
        (*l_1505) = l_1503;
    }
    (*l_1506) = &p_11;
    (**l_1506) = ((safe_add_func_int16_t_s_s((func_59(l_1509) , 0xED3DL), ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(251UL, 1)) != (p_10.f5 , (safe_sub_func_int64_t_s_s((~((0xBF26C0E549F78CC5LL <= (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_8.f0, 0x8B94L)), p_10.f7.f7))) & (**l_1506))), (**g_80))))), 11)) ^ (**l_1506)))) && (**l_1506));
    (*l_1521) = &g_1192;
    return p_10.f2;
}



static struct S2  func_13(int32_t  p_14, struct S3  p_15, union U10  p_16, int16_t  p_17)
{ 
    int32_t l_1326 = 2L;
    uint8_t *l_1327 = &g_36;
    struct S1 *l_1328 = &g_549;
    int32_t l_1346[2];
    int16_t l_1351 = (-1L);
    int16_t l_1352 = 0x7F06L;
    int64_t l_1353 = 0x1DC517ED5B433910LL;
    int8_t l_1362 = 0x98L;
    struct S6 l_1363 = {1L};
    struct S8 l_1379 = {{0UL,0xD83BA4A41B521186LL,0L,1UL,5L,1L,0xA29FD39BL,0x0B677D3BL},{6UL},{0xA3965234BA25A4F8LL,255UL,0x9CEA5C77L},0x6E8DFC83L,-7L};
    struct S7 l_1414 = {0x4CCABBC2L};
    struct S0 l_1445 = {1UL,255UL,0xCE213E51L};
    int i;
    for (i = 0; i < 2; i++)
        l_1346[i] = 0xCFB9890AL;
lbl_1331:
    l_1328 = (((**g_637) ^ (safe_rshift_func_int8_t_s_s((0x73CAL >= (((*l_1327) = (((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((0L != ((((p_17 , g_384.f2.f2) < (p_16.f1 , ((((((safe_div_func_uint8_t_u_u((func_59(&g_62[0][0][0]) , l_1326), l_1326)) || 0x3F4EL) < p_16.f1) <= p_17) > p_14) >= 0x4CA2L))) >= l_1326) < p_17)), 0xA637A6E17B616F35LL)), l_1326)) , l_1326) >= 0xE79BL)) | l_1326)), 4))) , l_1328);
    for (g_23 = 10; (g_23 >= 11); g_23 = safe_add_func_int32_t_s_s(g_23, 4))
    { 
        if (g_384.f0.f5)
            goto lbl_1331;
    }
    for (g_1192.f7.f3 = 0; (g_1192.f7.f3 <= 4); g_1192.f7.f3 += 1)
    { 
        if (p_16.f1)
            goto lbl_1331;
        (*g_598) |= p_17;
        for (g_384.f4 = 0; g_384.f4 < 4; g_384.f4 += 1)
        {
            for (g_109 = 0; g_109 < 1; g_109 += 1)
            {
                struct S7 tmp = {0x333155AFL};
                g_31[g_384.f4][g_109] = tmp;
            }
        }
    }
lbl_1464:
    for (g_702.f2.f4 = 29; (g_702.f2.f4 >= 16); --g_702.f2.f4)
    { 
        int32_t *l_1334 = &g_384.f0.f5;
        int32_t *l_1335[3][6][4] = {{{&g_421[0][0],&l_1326,&g_421[0][0],&g_384.f0.f5},{&g_223.f0.f5,&g_421[1][0],&l_1326,&g_1192.f7.f5},{&g_421[1][0],(void*)0,&g_421[1][0],&g_421[1][0]},{(void*)0,(void*)0,&g_421[1][0],&g_421[0][0]},{&g_421[1][0],&g_421[1][0],&l_1326,(void*)0},{&g_421[1][0],&l_1326,(void*)0,&l_1326}},{{(void*)0,&l_1326,&g_421[1][0],&g_421[1][0]},{&l_1326,&g_223.f0.f5,&g_421[0][0],(void*)0},{(void*)0,&g_384.f0.f5,&g_384.f0.f5,(void*)0},{(void*)0,&g_421[1][0],&g_421[0][0],&g_421[1][0]},{&l_1326,(void*)0,&g_421[1][0],&l_1326},{(void*)0,&g_1192.f7.f5,(void*)0,&l_1326}},{{&g_421[1][0],(void*)0,&l_1326,&g_421[1][0]},{&g_421[0][0],&g_421[1][0],(void*)0,(void*)0},{&g_384.f0.f5,&g_384.f0.f5,(void*)0,(void*)0},{&g_421[0][0],&g_223.f0.f5,&l_1326,&g_421[1][0]},{&g_421[1][0],&l_1326,(void*)0,&l_1326},{(void*)0,&l_1326,&g_421[1][0],&g_421[1][0]}}};
        uint8_t l_1336 = 0x09L;
        int32_t l_1344 = (-10L);
        int i, j, k;
        l_1336--;
        for (g_41.f2.f6 = 0; (g_41.f2.f6 == 17); g_41.f2.f6 = safe_add_func_int32_t_s_s(g_41.f2.f6, 1))
        { 
            int32_t l_1341 = 3L;
            int32_t l_1342 = 2L;
            int32_t l_1343 = 1L;
            int32_t l_1345[3][5];
            uint32_t l_1347 = 0x16191C66L;
            int32_t **l_1350 = &l_1335[1][4][3];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1345[i][j] = 1L;
            }
            l_1347++;
            (*l_1350) = l_1335[0][3][2];
            return (*g_354);
        }
        g_1354--;
    }
    for (g_223.f3 = 0; (g_223.f3 >= 13); g_223.f3++)
    { 
        int32_t **l_1359 = &g_598;
        int16_t ***l_1364 = &g_637;
        int32_t l_1368[1][4] = {{0x33B2FDC7L,0x33B2FDC7L,0x33B2FDC7L,0x33B2FDC7L}};
        struct S7 **l_1380 = &g_1167;
        uint32_t l_1409 = 18446744073709551613UL;
        union U10 ***l_1418 = &g_441[0][3][3];
        union U10 ****l_1417 = &l_1418;
        int16_t l_1440 = 0xA820L;
        struct S3 l_1457 = {6UL};
        int32_t l_1460 = 0xF2E44AC7L;
        int32_t *l_1465[3];
        uint64_t l_1466 = 1UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1465[i] = &l_1368[0][1];
        (*l_1359) = (void*)0;
        if ((p_16.f0 ^ (safe_add_func_int8_t_s_s((0xC671L | l_1362), ((l_1363 , ((*l_1364) = &g_638[0][4])) != (void*)0)))))
        { 
            struct S7 l_1365 = {0xD89FB637L};
            (*g_1167) = l_1365;
            if (l_1352)
            { 
                (*l_1359) = (void*)0;
            }
            else
            { 
                uint64_t l_1369 = 0x2F696DEE1025F8A6LL;
                for (g_407 = 0; (g_407 <= 3); g_407 += 1)
                { 
                    int32_t *l_1366 = (void*)0;
                    int32_t *l_1367[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1367[i] = &g_1192.f7.f6;
                    l_1369--;
                }
            }
        }
        else
        { 
            struct S0 *l_1384 = &g_223.f2;
            int32_t l_1402 = 0xB956E4F9L;
            int64_t l_1403[1];
            int32_t l_1404 = 0xC7564822L;
            int32_t l_1406 = 0xA84D47CDL;
            int32_t l_1407 = (-7L);
            int32_t l_1408 = 0xCE447FFCL;
            union U10 *****l_1419[4];
            struct S2 l_1426 = {0x64AEC20CL,0xEE93571EBCDC525CLL,-1L,3UL,0x29L,0L,0x5CB91441L,0x959F509AL};
            int i;
            for (i = 0; i < 1; i++)
                l_1403[i] = (-9L);
            for (i = 0; i < 4; i++)
                l_1419[i] = &l_1417;
            for (l_1326 = 0; (l_1326 < (-13)); l_1326--)
            { 
                uint8_t ***l_1375[6][2][4] = {{{(void*)0,&g_61,&g_61,(void*)0},{&g_823,&g_61,&g_61,(void*)0}},{{(void*)0,(void*)0,&g_823,(void*)0},{(void*)0,&g_61,&g_823,(void*)0}},{{&g_823,(void*)0,(void*)0,(void*)0},{&g_61,&g_61,&g_823,(void*)0}},{{&g_61,&g_61,(void*)0,&g_61},{&g_823,(void*)0,&g_823,(void*)0}},{{(void*)0,(void*)0,&g_823,&g_61},{(void*)0,&g_61,&g_61,(void*)0}},{{&g_823,&g_61,&g_61,(void*)0},{(void*)0,(void*)0,&g_823,(void*)0}}};
                uint8_t ****l_1374 = &l_1375[5][0][1];
                int32_t l_1399 = 0L;
                int64_t l_1400 = 0x4EFC54203B087A92LL;
                int32_t l_1401 = 0x78323485L;
                int32_t l_1405[4][6][5];
                struct S7 l_1416 = {0x904C5AA2L};
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 6; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_1405[i][j][k] = 1L;
                    }
                }
                if ((((*l_1374) = (void*)0) == &g_823))
                { 
                    struct S8 **l_1376 = (void*)0;
                    struct S8 *l_1378 = &g_384;
                    struct S8 **l_1377 = &l_1378;
                    p_16.f2.f6 = p_17;
                    (*l_1377) = (void*)0;
                }
                else
                { 
                    int32_t *l_1381 = &l_1346[1];
                    (*l_1381) = ((l_1379 , l_1380) == ((*g_1165) = (**g_1164)));
                }
                for (g_23 = 27; (g_23 > 37); g_23 = safe_add_func_uint32_t_u_u(g_23, 6))
                { 
                    struct S0 **l_1386 = &l_1384;
                    int32_t *l_1387 = &g_421[1][0];
                    int32_t *l_1388 = (void*)0;
                    int32_t *l_1389 = (void*)0;
                    int32_t *l_1390 = &l_1368[0][1];
                    int32_t *l_1391 = &g_384.f0.f5;
                    int32_t *l_1392 = &g_421[0][0];
                    int32_t *l_1393 = (void*)0;
                    int32_t *l_1394 = &g_549.f6;
                    int32_t *l_1395 = &g_549.f6;
                    int32_t *l_1396 = &g_41.f2.f6;
                    int32_t *l_1397 = &l_1379.f0.f6;
                    int32_t *l_1398[6][6][1] = {{{&g_32},{&g_421[1][0]},{&g_421[1][0]},{&g_32},{&g_421[1][0]},{&g_421[1][0]}},{{&g_32},{(void*)0},{&g_384.f0.f6},{(void*)0},{&g_32},{&g_421[1][0]}},{{&g_421[1][0]},{&g_32},{&g_421[1][0]},{&g_421[1][0]},{&g_32},{(void*)0}},{{&g_384.f0.f6},{(void*)0},{&g_32},{&g_421[1][0]},{&g_421[1][0]},{&g_32}},{{&g_421[1][0]},{&g_421[1][0]},{&g_32},{(void*)0},{&g_384.f0.f6},{(void*)0}},{{&g_32},{&g_421[1][0]},{&g_421[1][0]},{&g_32},{&g_421[1][0]},{&g_421[1][0]}}};
                    int i, j, k;
                    (*l_1386) = (g_1385[0] = l_1384);
                    if (p_16.f0)
                        continue;
                    ++l_1409;
                    return (*g_354);
                }
                for (g_407 = 0; (g_407 <= 59); g_407 = safe_add_func_int64_t_s_s(g_407, 9))
                { 
                    int32_t *l_1415 = &l_1368[0][3];
                    if (p_15.f0)
                        break;
                    (****g_1164) = l_1414;
                    (*l_1415) |= p_16.f1;
                    l_1416 = (**g_1166);
                }
            }
            g_1420 = (l_1417 = l_1417);
            for (l_1409 = 9; (l_1409 <= 30); ++l_1409)
            { 
                uint32_t l_1441 = 0x3349FFBCL;
                int32_t l_1442 = 0x41DE260DL;
                struct S7 l_1444 = {0x626DB590L};
                uint16_t *l_1449 = &g_1317;
                int16_t l_1458 = 1L;
                uint32_t *l_1459 = &l_1379.f0.f0;
                for (p_14 = 0; (p_14 > (-28)); p_14 = safe_sub_func_uint16_t_u_u(p_14, 2))
                { 
                    return (**g_353);
                }
                for (g_223.f2.f1 = 0; (g_223.f2.f1 <= 3); g_223.f2.f1 += 1)
                { 
                    int32_t *l_1443 = &g_223.f0.f5;
                    int i, j;
                    (*l_1443) ^= (l_1426 , (((((l_1441 = ((((safe_add_func_uint64_t_u_u(((((l_1414 , &g_1176) == &g_1176) ^ (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u(g_18[g_223.f2.f1][g_223.f2.f1])), p_14)) & (safe_div_func_uint8_t_u_u(0xC6L, 1UL))), 0L)) < l_1406), 1)), 0x2BL))) , g_18[g_223.f2.f1][g_223.f2.f1]), l_1440)) < 0x667FL) <= l_1368[0][0]) & p_16.f1)) <= l_1442) && p_15.f0) | l_1442) | (-9L)));
                }
                (*l_1359) = func_42(&g_421[1][0], l_1444, l_1445, (*l_1359));
                if ((((!(safe_rshift_func_uint16_t_u_u(((*l_1449) = ((void*)0 == (*g_1421))), ((safe_sub_func_uint8_t_u_u(((p_17 >= 0x4463L) || l_1426.f0), (((*l_1459) = (safe_unary_minus_func_int32_t_s((p_16.f2.f6 = (safe_div_func_int16_t_s_s((((**g_637) ^= (((((*g_598) || (safe_lshift_func_uint16_t_u_s(((l_1457 , (**l_1359)) > 0xAAL), l_1458))) != 0x42L) && 0x7AA7L) <= 65526UL)) < p_17), p_16.f0)))))) ^ p_15.f0))) >= l_1444.f0)))) <= l_1460) | g_388.f0))
                { 
                    struct S7 l_1461 = {0UL};
                    (****g_1164) = (l_1461 = l_1444);
                }
                else
                { 
                    struct S8 *l_1463 = &g_384;
                    struct S8 **l_1462 = &l_1463;
                    (*l_1462) = &g_384;
                }
            }
        }
        if (p_14)
            goto lbl_1464;
        --l_1466;
    }
    return l_1379.f0;
}



static union U10  func_20(uint8_t  p_21)
{ 
    struct S5 l_33[1] = {{0x66L,0x6A86E60EL,65535UL,-3L,0x6CCC853DL,-2L,0x55F075F9L,{4294967292UL,-1L,8L,4294967286UL,7L,-1L,0x31A33FFEL,0x361F882DL}}};
    uint32_t l_37 = 0x19EC1828L;
    union U10 l_1161 = {18446744073709551615UL};
    struct S0 l_1163 = {1UL,255UL,7L};
    const int64_t *l_1189[3][3][5] = {{{(void*)0,&g_1024.f1.f2,(void*)0,&g_1024.f1.f2,(void*)0},{&l_33[0].f7.f1,&g_192.f0,&g_192.f0,&l_33[0].f7.f1,&l_33[0].f7.f1},{(void*)0,&g_1024.f1.f2,(void*)0,&g_1024.f1.f2,(void*)0}},{{&l_33[0].f7.f1,&l_33[0].f7.f1,&g_192.f0,&g_192.f0,&l_33[0].f7.f1},{(void*)0,&g_1024.f1.f2,(void*)0,&g_1024.f1.f2,(void*)0},{&l_33[0].f7.f1,&g_192.f0,&g_192.f0,&l_33[0].f7.f1,&l_33[0].f7.f1}},{{(void*)0,&g_1024.f1.f2,(void*)0,&g_1024.f1.f2,(void*)0},{&l_33[0].f7.f1,&l_33[0].f7.f1,&g_192.f0,&g_192.f0,&l_33[0].f7.f1},{(void*)0,&g_1024.f1.f2,(void*)0,&g_1024.f1.f2,(void*)0}}};
    int64_t *l_1190[7] = {&g_312,(void*)0,&g_312,&g_312,(void*)0,&g_309[6],&g_309[6]};
    const struct S7 l_1193 = {0x3DE51232L};
    uint64_t ***l_1200 = &g_80;
    struct S8 l_1219 = {{0x11F2A2D1L,0x1DF5D713C702F8D9LL,8L,0x4C35C03EL,0xB2L,0xDD4BF3D4L,0xE956F82BL,0x64349E03L},{0xBAL},{18446744073709551608UL,0x39L,0x3CF3C139L},-5L,0x73L};
    int32_t *l_1251 = &g_1192.f7.f5;
    int8_t * const l_1295 = &l_33[0].f7.f4;
    int i, j, k;
    for (g_23 = 2; (g_23 == 19); g_23++)
    { 
        int32_t *l_1153[6];
        struct S7 ****l_1169 = (void*)0;
        struct S4 l_1170 = {1L,{-9L,-7L,0L,{0UL,0x81L,0xF368CE0FL},18446744073709551615UL,65530UL,-1L}};
        uint64_t ***l_1201 = &g_80;
        uint8_t l_1296 = 1UL;
        int i;
        for (i = 0; i < 6; i++)
            l_1153[i] = (void*)0;
    }
    return l_1161;
}



static int32_t * func_42(int32_t * p_43, struct S7  p_44, struct S0  p_45, int32_t * p_46)
{ 
    int32_t *l_1154[1][4][7] = {{{&g_421[1][0],&g_421[1][0],&g_32,&g_223.f0.f6,(void*)0,&g_32,(void*)0},{&g_223.f0.f6,&g_702.f2.f6,&g_702.f2.f6,&g_223.f0.f6,&g_384.f0.f6,(void*)0,&g_223.f0.f6},{(void*)0,(void*)0,&g_384.f0.f6,&g_384.f0.f6,(void*)0,(void*)0,&g_702.f2.f6},{(void*)0,&g_223.f0.f6,&g_32,&g_421[1][0],&g_421[1][0],&g_32,&g_223.f0.f6}}};
    int32_t l_1155 = 0xD1B9D3FCL;
    int16_t l_1156[2];
    int64_t l_1157 = 0xF0DB6933A40125EFLL;
    uint32_t l_1158 = 0x8BDC146BL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1156[i] = 0x97B8L;
    l_1158++;
    return p_43;
}



static int32_t * func_47(struct S0  p_48)
{ 
    int32_t *l_58 = &g_32;
    struct S3 l_798[2][2][3] = {{{{0xE5L},{0xF0L},{0xF0L}},{{0x9DL},{254UL},{254UL}}},{{{0xE5L},{0xF0L},{0xF0L}},{{0x9DL},{254UL},{254UL}}}};
    int8_t * const l_1148 = &g_549.f0;
    int i, j, k;
    for (g_41.f2.f1 = 16; (g_41.f2.f1 == 8); g_41.f2.f1 = safe_sub_func_int64_t_s_s(g_41.f2.f1, 8))
    { 
        struct S0 l_1147 = {18446744073709551615UL,0xD7L,0xD46A92B7L};
        struct S5 l_1149 = {0x8AL,6UL,0x1D18L,0x691FL,2L,0L,-10L,{4294967289UL,0xF8E3058CD9B4DBAALL,0xB5L,4294967295UL,5L,0xA57FD8A5L,0x43208432L,0xB0A24D5BL}};
        int32_t *l_1150 = &l_1149.f7.f5;
        for (g_36 = 1; (g_36 <= 4); g_36 += 1)
        { 
            uint8_t ***l_1145 = (void*)0;
            uint8_t **l_1146 = &g_62[1][0][3];
            int i;
            l_1146 = func_52(&g_23, l_58, func_59(g_61), l_798[1][1][1], (*g_61));
            g_549.f6 ^= (((((((((((-10L) || ((p_48 , &g_40[g_36]) != &g_40[2])) || ((**g_637) |= (l_1147 , (p_48.f1 | ((void*)0 == l_1148))))) || p_48.f0) , l_1149) , 1UL) != p_48.f2) < (*l_58)) != (*g_598)) > 0x15L) > l_1149.f5);
        }
        return l_58;
    }
    return l_58;
}



static uint8_t ** func_52(uint8_t * p_53, int32_t * p_54, struct S8  p_55, struct S3  p_56, uint8_t * p_57)
{ 
    const int32_t l_810 = 0x8E9D0B83L;
    int32_t l_813 = (-5L);
    uint8_t **l_829 = &g_62[1][1][1];
    struct S3 **l_833 = (void*)0;
    struct S3 ***l_832 = &l_833;
    int16_t l_857 = (-1L);
    int32_t l_923 = 0xB906F901L;
    int32_t l_925[6];
    int32_t l_945[3][2] = {{0x53979C90L,0xF776E704L},{0x53979C90L,0x53979C90L},{0xF776E704L,0x53979C90L}};
    int64_t * const l_964 = &g_122;
    uint64_t * const *l_990 = &g_81;
    uint64_t * const **l_989 = &l_990;
    int32_t l_991 = 0L;
    struct S4 *l_1025 = &g_192;
    union U9 l_1036 = {255UL};
    struct S7 * const l_1037 = &g_31[0][0];
    union U9 ****l_1094 = &g_666;
    struct S7 *l_1100 = &g_31[3][0];
    struct S7 **l_1099[4][4][5] = {{{&l_1100,&l_1100,&l_1100,(void*)0,&l_1100},{&l_1100,&l_1100,&l_1100,&l_1100,&l_1100},{&l_1100,(void*)0,&l_1100,(void*)0,&l_1100},{&l_1100,&l_1100,&l_1100,&l_1100,&l_1100}},{{&l_1100,(void*)0,&l_1100,&l_1100,&l_1100},{&l_1100,&l_1100,&l_1100,&l_1100,&l_1100},{&l_1100,&l_1100,&l_1100,&l_1100,&l_1100},{&l_1100,&l_1100,&l_1100,&l_1100,&l_1100}},{{&l_1100,&l_1100,&l_1100,(void*)0,&l_1100},{&l_1100,&l_1100,&l_1100,&l_1100,&l_1100},{&l_1100,(void*)0,&l_1100,(void*)0,&l_1100},{&l_1100,&l_1100,&l_1100,&l_1100,&l_1100}},{{&l_1100,(void*)0,&l_1100,&l_1100,&l_1100},{&l_1100,&l_1100,&l_1100,&l_1100,&l_1100},{&l_1100,&l_1100,&l_1100,&l_1100,&l_1100},{&l_1100,&l_1100,&l_1100,&l_1100,&l_1100}}};
    struct S7 ***l_1098 = &l_1099[3][3][0];
    struct S6 l_1112 = {1L};
    const int64_t l_1122 = (-10L);
    struct S3 *l_1124 = (void*)0;
    struct S3 **l_1123 = &l_1124;
    uint32_t l_1129 = 0x9526E86FL;
    uint32_t *l_1130 = &g_384.f0.f3;
    uint16_t *l_1141 = &g_1040;
    struct S3 *l_1144 = &g_384.f1;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_925[i] = 0L;
    for (g_223.f0.f3 = 0; (g_223.f0.f3 < 1); ++g_223.f0.f3)
    { 
        uint64_t ** const l_803[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_804 = 0L;
        union U9 ***l_807 = &g_667[5];
        union U9 ****l_808 = &g_666;
        int64_t l_809 = 0xE966999A7F7885EALL;
        uint16_t *l_811 = &g_40[3];
        int16_t *l_812 = &g_128;
        struct S6 l_818 = {0x050829E6A663654FLL};
        struct S2 **l_819[4] = {&g_354,&g_354,&g_354,&g_354};
        uint8_t ***l_822 = &g_61;
        int32_t l_858 = 0x9DFC0C5AL;
        int32_t l_886[2][5][3] = {{{0x31D3C426L,0x31D3C426L,0x31D3C426L},{(-6L),(-6L),(-6L)},{0x31D3C426L,0x31D3C426L,0x31D3C426L},{(-6L),(-6L),(-6L)},{0x31D3C426L,0x31D3C426L,0x31D3C426L}},{{(-6L),(-6L),(-6L)},{0x31D3C426L,0x31D3C426L,0x31D3C426L},{(-6L),(-6L),(-6L)},{0x31D3C426L,0x31D3C426L,0x31D3C426L},{(-6L),(-6L),(-6L)}}};
        uint16_t l_889 = 5UL;
        int32_t **l_958 = (void*)0;
        union U10 l_987 = {0xF50E49EAE9393225LL};
        struct S4 *l_1021 = &g_192;
        struct S7 l_1055 = {0xEF3CC2ABL};
        struct S0 l_1083[1][7][7] = {{{{1UL,0x50L,0xD13C4FB9L},{0xDBD2717C592BC9A0LL,254UL,0xA30628D0L},{1UL,0x50L,0xD13C4FB9L},{5UL,255UL,0xA8F78B68L},{18446744073709551612UL,250UL,1L},{5UL,255UL,0xA8F78B68L},{1UL,0x50L,0xD13C4FB9L}},{{1UL,254UL,0x316D2C14L},{1UL,254UL,0x316D2C14L},{4UL,255UL,0x3D1BD3A4L},{1UL,254UL,0x316D2C14L},{1UL,254UL,0x316D2C14L},{4UL,255UL,0x3D1BD3A4L},{1UL,254UL,0x316D2C14L}},{{18446744073709551612UL,250UL,1L},{5UL,255UL,0xA8F78B68L},{1UL,0x50L,0xD13C4FB9L},{0xDBD2717C592BC9A0LL,254UL,0xA30628D0L},{1UL,0x50L,0xD13C4FB9L},{5UL,255UL,0xA8F78B68L},{18446744073709551612UL,250UL,1L}},{{0x79A41756E76D550FLL,0xF4L,6L},{1UL,254UL,0x316D2C14L},{0x79A41756E76D550FLL,0xF4L,6L},{0x79A41756E76D550FLL,0xF4L,6L},{0x79A41756E76D550FLL,0xF4L,6L},{4UL,255UL,0x3D1BD3A4L},{4UL,255UL,0x3D1BD3A4L}},{{1UL,0x50L,0xD13C4FB9L},{5UL,255UL,0xA8F78B68L},{18446744073709551612UL,250UL,1L},{5UL,255UL,0xA8F78B68L},{1UL,0x50L,0xD13C4FB9L},{0xDBD2717C592BC9A0LL,254UL,0xA30628D0L},{1UL,0x50L,0xD13C4FB9L}},{{0x79A41756E76D550FLL,0xF4L,6L},{4UL,255UL,0x3D1BD3A4L},{4UL,255UL,0x3D1BD3A4L},{0x79A41756E76D550FLL,0xF4L,6L},{4UL,255UL,0x3D1BD3A4L},{4UL,255UL,0x3D1BD3A4L},{0x79A41756E76D550FLL,0xF4L,6L}},{{0x87AE381C0133C76DLL,0xFCL,-1L},{5UL,255UL,0xA8F78B68L},{0x87AE381C0133C76DLL,0xFCL,-1L},{18446744073709551607UL,0x44L,0x063964CEL},{1UL,0x50L,0xD13C4FB9L},{18446744073709551607UL,0x44L,0x063964CEL},{0x87AE381C0133C76DLL,0xFCL,-1L}}}};
        uint64_t l_1104 = 2UL;
        int i, j, k;
    }
    (*l_1123) = (void*)0;
    (*g_598) = ((safe_sub_func_int32_t_s_s(((safe_add_func_int64_t_s_s(p_55.f0.f2, l_810)) || ((void*)0 != (**l_1094))), ((*l_1130) = ((p_55.f0.f7 | ((((((p_55.f2.f1 | (((*l_1025) , (void*)0) != (void*)0)) || 255UL) && l_1129) && 0L) <= (*g_598)) & 4294967295UL)) ^ l_1036.f0)))) ^ p_55.f2.f1);
    (*g_598) ^= (safe_add_func_int32_t_s_s(l_925[1], (((l_945[2][1] > l_1112.f0) >= (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((l_813 |= (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((((*l_1141) = 0xDE1AL) & p_55.f0.f7) < (safe_rshift_func_int8_t_s_u((l_1144 == (*l_1123)), 6))), g_1024.f1.f3.f2)), p_55.f0.f5))), 3)) > p_55.f2.f2), 6L))) & 0x40L)));
    return l_829;
}



static struct S8  func_59(uint8_t ** p_60)
{ 
    int16_t l_75 = 0xEA79L;
    int32_t l_90[5] = {1L,1L,1L,1L,1L};
    union U10 l_96[6][1] = {{{0UL}},{{0x4C5E4B60272E8F47LL}},{{0UL}},{{0x4C5E4B60272E8F47LL}},{{0UL}},{{0x4C5E4B60272E8F47LL}}};
    uint64_t *l_97[7];
    int32_t *l_135 = &l_96[2][0].f2.f6;
    uint32_t l_221 = 0x7F39B1B8L;
    uint16_t *l_226 = &g_130;
    const struct S3 l_227 = {0x96L};
    union U9 l_250 = {0UL};
    uint16_t l_261 = 1UL;
    struct S2 l_336[3][1][2] = {{{{0x1ABCB779L,0xEFC5F4A1B5A141CALL,1L,0UL,0xEDL,1L,0xEEABC623L,18446744073709551615UL},{0x1ABCB779L,0xEFC5F4A1B5A141CALL,1L,0UL,0xEDL,1L,0xEEABC623L,18446744073709551615UL}}},{{{0x1ABCB779L,0xEFC5F4A1B5A141CALL,1L,0UL,0xEDL,1L,0xEEABC623L,18446744073709551615UL},{0x1ABCB779L,0xEFC5F4A1B5A141CALL,1L,0UL,0xEDL,1L,0xEEABC623L,18446744073709551615UL}}},{{{0x1ABCB779L,0xEFC5F4A1B5A141CALL,1L,0UL,0xEDL,1L,0xEEABC623L,18446744073709551615UL},{0x1ABCB779L,0xEFC5F4A1B5A141CALL,1L,0UL,0xEDL,1L,0xEEABC623L,18446744073709551615UL}}}};
    const struct S2 *l_352 = &g_223.f0;
    const struct S2 ** const l_351 = &l_352;
    struct S7 l_359 = {0xD64D94ACL};
    int32_t l_391 = 0xC2C4CDDDL;
    const union U9 **l_419 = &g_231;
    const union U9 ***l_418 = &l_419;
    uint32_t l_440 = 0x26CE7FAFL;
    struct S7 *l_452 = &g_31[3][0];
    int32_t l_468 = (-1L);
    struct S8 *l_477 = &g_384;
    uint64_t *****l_502 = (void*)0;
    struct S1 l_560 = {1L,1L,0L,{0xE56962F508D402E7LL,0x6FL,-1L},0UL,0x94E4L,-5L};
    uint64_t l_586 = 0x619A4E98779B4951LL;
    struct S3 *l_607 = (void*)0;
    int64_t *l_727[3][1][3] = {{{(void*)0,&g_549.f2,(void*)0}},{{(void*)0,&g_549.f2,(void*)0}},{{(void*)0,&g_549.f2,(void*)0}}};
    int64_t **l_726 = &l_727[1][0][0];
    int64_t ***l_725 = &l_726;
    const struct S5 l_764[5] = {{-1L,0x275C7D54L,0xFD1DL,0L,-10L,0x66L,0x127539F1L,{4294967287UL,0x8D86CC52AD2CD82CLL,0x56L,1UL,0xD4L,1L,3L,0x3D0863DDL}},{-1L,0x275C7D54L,0xFD1DL,0L,-10L,0x66L,0x127539F1L,{4294967287UL,0x8D86CC52AD2CD82CLL,0x56L,1UL,0xD4L,1L,3L,0x3D0863DDL}},{-1L,0x275C7D54L,0xFD1DL,0L,-10L,0x66L,0x127539F1L,{4294967287UL,0x8D86CC52AD2CD82CLL,0x56L,1UL,0xD4L,1L,3L,0x3D0863DDL}},{-1L,0x275C7D54L,0xFD1DL,0L,-10L,0x66L,0x127539F1L,{4294967287UL,0x8D86CC52AD2CD82CLL,0x56L,1UL,0xD4L,1L,3L,0x3D0863DDL}},{-1L,0x275C7D54L,0xFD1DL,0L,-10L,0x66L,0x127539F1L,{4294967287UL,0x8D86CC52AD2CD82CLL,0x56L,1UL,0xD4L,1L,3L,0x3D0863DDL}}};
    union U10 **l_773 = &g_442;
    int32_t l_785 = 0x217F3B30L;
    uint8_t l_795[4][4][2] = {{{255UL,0xDCL},{255UL,255UL},{0xDCL,255UL},{255UL,0xDCL}},{{255UL,255UL},{0xDCL,255UL},{255UL,0xDCL},{255UL,255UL}},{{0xDCL,255UL},{255UL,0xDCL},{255UL,255UL},{0xDCL,255UL}},{{255UL,0xDCL},{255UL,255UL},{0xDCL,255UL},{255UL,0xDCL}}};
    struct S7 *l_797 = &l_359;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_97[i] = &l_96[2][0].f0;
    return (*l_477);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_18[i][j], "g_18[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_19[i].f0, "g_19[i].f0", print_hash_value);

    }
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_31[i][j].f0, "g_31[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_40[i], "g_40[i]", print_hash_value);

    }
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_49.f1, "g_49.f1", print_hash_value);
    transparent_crc(g_49.f2, "g_49.f2", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_110[i][j], "g_110[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_192.f0, "g_192.f0", print_hash_value);
    transparent_crc(g_192.f1.f0, "g_192.f1.f0", print_hash_value);
    transparent_crc(g_192.f1.f1, "g_192.f1.f1", print_hash_value);
    transparent_crc(g_192.f1.f2, "g_192.f1.f2", print_hash_value);
    transparent_crc(g_192.f1.f3.f0, "g_192.f1.f3.f0", print_hash_value);
    transparent_crc(g_192.f1.f3.f1, "g_192.f1.f3.f1", print_hash_value);
    transparent_crc(g_192.f1.f3.f2, "g_192.f1.f3.f2", print_hash_value);
    transparent_crc(g_192.f1.f4, "g_192.f1.f4", print_hash_value);
    transparent_crc(g_192.f1.f5, "g_192.f1.f5", print_hash_value);
    transparent_crc(g_192.f1.f6, "g_192.f1.f6", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_223.f0.f0, "g_223.f0.f0", print_hash_value);
    transparent_crc(g_223.f0.f1, "g_223.f0.f1", print_hash_value);
    transparent_crc(g_223.f0.f2, "g_223.f0.f2", print_hash_value);
    transparent_crc(g_223.f0.f3, "g_223.f0.f3", print_hash_value);
    transparent_crc(g_223.f0.f4, "g_223.f0.f4", print_hash_value);
    transparent_crc(g_223.f0.f5, "g_223.f0.f5", print_hash_value);
    transparent_crc(g_223.f0.f6, "g_223.f0.f6", print_hash_value);
    transparent_crc(g_223.f0.f7, "g_223.f0.f7", print_hash_value);
    transparent_crc(g_223.f1.f0, "g_223.f1.f0", print_hash_value);
    transparent_crc(g_223.f2.f0, "g_223.f2.f0", print_hash_value);
    transparent_crc(g_223.f2.f1, "g_223.f2.f1", print_hash_value);
    transparent_crc(g_223.f2.f2, "g_223.f2.f2", print_hash_value);
    transparent_crc(g_223.f3, "g_223.f3", print_hash_value);
    transparent_crc(g_223.f4, "g_223.f4", print_hash_value);
    transparent_crc(g_232.f0, "g_232.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_309[i], "g_309[i]", print_hash_value);

    }
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_339[i], "g_339[i]", print_hash_value);

    }
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_384.f0.f0, "g_384.f0.f0", print_hash_value);
    transparent_crc(g_384.f0.f1, "g_384.f0.f1", print_hash_value);
    transparent_crc(g_384.f0.f2, "g_384.f0.f2", print_hash_value);
    transparent_crc(g_384.f0.f3, "g_384.f0.f3", print_hash_value);
    transparent_crc(g_384.f0.f4, "g_384.f0.f4", print_hash_value);
    transparent_crc(g_384.f0.f5, "g_384.f0.f5", print_hash_value);
    transparent_crc(g_384.f0.f6, "g_384.f0.f6", print_hash_value);
    transparent_crc(g_384.f0.f7, "g_384.f0.f7", print_hash_value);
    transparent_crc(g_384.f1.f0, "g_384.f1.f0", print_hash_value);
    transparent_crc(g_384.f2.f0, "g_384.f2.f0", print_hash_value);
    transparent_crc(g_384.f2.f1, "g_384.f2.f1", print_hash_value);
    transparent_crc(g_384.f2.f2, "g_384.f2.f2", print_hash_value);
    transparent_crc(g_384.f3, "g_384.f3", print_hash_value);
    transparent_crc(g_384.f4, "g_384.f4", print_hash_value);
    transparent_crc(g_388.f0, "g_388.f0", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_421[i][j], "g_421[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_516[i], "g_516[i]", print_hash_value);

    }
    transparent_crc(g_549.f0, "g_549.f0", print_hash_value);
    transparent_crc(g_549.f1, "g_549.f1", print_hash_value);
    transparent_crc(g_549.f2, "g_549.f2", print_hash_value);
    transparent_crc(g_549.f3.f0, "g_549.f3.f0", print_hash_value);
    transparent_crc(g_549.f3.f1, "g_549.f3.f1", print_hash_value);
    transparent_crc(g_549.f3.f2, "g_549.f3.f2", print_hash_value);
    transparent_crc(g_549.f4, "g_549.f4", print_hash_value);
    transparent_crc(g_549.f5, "g_549.f5", print_hash_value);
    transparent_crc(g_549.f6, "g_549.f6", print_hash_value);
    transparent_crc(g_606.f0, "g_606.f0", print_hash_value);
    transparent_crc(g_702.f0, "g_702.f0", print_hash_value);
    transparent_crc(g_702.f1, "g_702.f1", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_873.f0, "g_873.f0", print_hash_value);
    transparent_crc(g_1024.f0, "g_1024.f0", print_hash_value);
    transparent_crc(g_1024.f1.f0, "g_1024.f1.f0", print_hash_value);
    transparent_crc(g_1024.f1.f1, "g_1024.f1.f1", print_hash_value);
    transparent_crc(g_1024.f1.f2, "g_1024.f1.f2", print_hash_value);
    transparent_crc(g_1024.f1.f3.f0, "g_1024.f1.f3.f0", print_hash_value);
    transparent_crc(g_1024.f1.f3.f1, "g_1024.f1.f3.f1", print_hash_value);
    transparent_crc(g_1024.f1.f3.f2, "g_1024.f1.f3.f2", print_hash_value);
    transparent_crc(g_1024.f1.f4, "g_1024.f1.f4", print_hash_value);
    transparent_crc(g_1024.f1.f5, "g_1024.f1.f5", print_hash_value);
    transparent_crc(g_1024.f1.f6, "g_1024.f1.f6", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1188, "g_1188", print_hash_value);
    transparent_crc(g_1192.f0, "g_1192.f0", print_hash_value);
    transparent_crc(g_1192.f1, "g_1192.f1", print_hash_value);
    transparent_crc(g_1192.f2, "g_1192.f2", print_hash_value);
    transparent_crc(g_1192.f3, "g_1192.f3", print_hash_value);
    transparent_crc(g_1192.f4, "g_1192.f4", print_hash_value);
    transparent_crc(g_1192.f5, "g_1192.f5", print_hash_value);
    transparent_crc(g_1192.f6, "g_1192.f6", print_hash_value);
    transparent_crc(g_1192.f7.f0, "g_1192.f7.f0", print_hash_value);
    transparent_crc(g_1192.f7.f1, "g_1192.f7.f1", print_hash_value);
    transparent_crc(g_1192.f7.f2, "g_1192.f7.f2", print_hash_value);
    transparent_crc(g_1192.f7.f3, "g_1192.f7.f3", print_hash_value);
    transparent_crc(g_1192.f7.f4, "g_1192.f7.f4", print_hash_value);
    transparent_crc(g_1192.f7.f5, "g_1192.f7.f5", print_hash_value);
    transparent_crc(g_1192.f7.f6, "g_1192.f7.f6", print_hash_value);
    transparent_crc(g_1192.f7.f7, "g_1192.f7.f7", print_hash_value);
    transparent_crc(g_1212, "g_1212", print_hash_value);
    transparent_crc(g_1239, "g_1239", print_hash_value);
    transparent_crc(g_1259.f0, "g_1259.f0", print_hash_value);
    transparent_crc(g_1317, "g_1317", print_hash_value);
    transparent_crc(g_1354, "g_1354", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1500[i].f0.f0, "g_1500[i].f0.f0", print_hash_value);
        transparent_crc(g_1500[i].f0.f1, "g_1500[i].f0.f1", print_hash_value);
        transparent_crc(g_1500[i].f0.f2, "g_1500[i].f0.f2", print_hash_value);
        transparent_crc(g_1500[i].f0.f3, "g_1500[i].f0.f3", print_hash_value);
        transparent_crc(g_1500[i].f0.f4, "g_1500[i].f0.f4", print_hash_value);
        transparent_crc(g_1500[i].f0.f5, "g_1500[i].f0.f5", print_hash_value);
        transparent_crc(g_1500[i].f0.f6, "g_1500[i].f0.f6", print_hash_value);
        transparent_crc(g_1500[i].f0.f7, "g_1500[i].f0.f7", print_hash_value);
        transparent_crc(g_1500[i].f1.f0, "g_1500[i].f1.f0", print_hash_value);
        transparent_crc(g_1500[i].f2.f0, "g_1500[i].f2.f0", print_hash_value);
        transparent_crc(g_1500[i].f2.f1, "g_1500[i].f2.f1", print_hash_value);
        transparent_crc(g_1500[i].f2.f2, "g_1500[i].f2.f2", print_hash_value);
        transparent_crc(g_1500[i].f3, "g_1500[i].f3", print_hash_value);
        transparent_crc(g_1500[i].f4, "g_1500[i].f4", print_hash_value);

    }
    transparent_crc(g_1526, "g_1526", print_hash_value);
    transparent_crc(g_1583, "g_1583", print_hash_value);
    transparent_crc(g_1589, "g_1589", print_hash_value);
    transparent_crc(g_1636.f0, "g_1636.f0", print_hash_value);
    transparent_crc(g_1636.f1.f0, "g_1636.f1.f0", print_hash_value);
    transparent_crc(g_1636.f1.f1, "g_1636.f1.f1", print_hash_value);
    transparent_crc(g_1636.f1.f2, "g_1636.f1.f2", print_hash_value);
    transparent_crc(g_1636.f1.f3.f0, "g_1636.f1.f3.f0", print_hash_value);
    transparent_crc(g_1636.f1.f3.f1, "g_1636.f1.f3.f1", print_hash_value);
    transparent_crc(g_1636.f1.f3.f2, "g_1636.f1.f3.f2", print_hash_value);
    transparent_crc(g_1636.f1.f4, "g_1636.f1.f4", print_hash_value);
    transparent_crc(g_1636.f1.f5, "g_1636.f1.f5", print_hash_value);
    transparent_crc(g_1636.f1.f6, "g_1636.f1.f6", print_hash_value);
    transparent_crc(g_1664.f0, "g_1664.f0", print_hash_value);
    transparent_crc(g_1756, "g_1756", print_hash_value);
    transparent_crc(g_1892.f0, "g_1892.f0", print_hash_value);
    transparent_crc(g_1923, "g_1923", print_hash_value);
    transparent_crc(g_1957.f0, "g_1957.f0", print_hash_value);
    transparent_crc(g_1957.f1, "g_1957.f1", print_hash_value);
    transparent_crc(g_1957.f2, "g_1957.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
