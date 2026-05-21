// SPDX-License-Identifier: MIT
// cctest_csmith_12c120e7.c --- cctest case csmith_12c120e7 (csmith seed 314646759)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5a40028d */

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

// Options:   -s 314646759 -o /tmp/csmith_gen_r_rfjet6/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint16_t  f1;
   const int32_t  f2;
};
#pragma pack(pop)

struct S1 {
   const struct S0  f0;
   int8_t  f1;
   const uint16_t  f2;
   uint8_t  f3;
};

struct S2 {
   int16_t  f0;
   uint16_t  f1;
   struct S1  f2;
};

union U3 {
   int16_t  f0;
   const struct S2  f1;
   struct S1  f2;
   int64_t  f3;
};


static int16_t g_10 = (-4L);
static uint8_t g_26 = 0x4DL;
static uint64_t g_30 = 0xCB87840EF1F3E168LL;
static uint8_t g_42 = 0x46L;
static const struct S0 g_47[3][3] = {{{3UL,4UL,1L},{3UL,4UL,1L},{3UL,4UL,1L}},{{0x0526E61AL,65527UL,4L},{4294967295UL,65534UL,0x69673C82L},{0x0526E61AL,65527UL,4L}},{{3UL,4UL,1L},{3UL,4UL,1L},{3UL,4UL,1L}}};
static uint32_t g_52 = 1UL;
static int8_t g_53 = 0x45L;
static int32_t g_54[5][5][2] = {{{(-1L),7L},{7L,0x0F783377L},{0L,0L},{1L,0xC1829B6EL},{0x110B0F3EL,1L}},{{0x9AA37C3AL,7L},{0L,(-1L)},{3L,0x5E682746L},{1L,0x5E682746L},{3L,(-1L)}},{{0L,7L},{0x9AA37C3AL,1L},{0x110B0F3EL,0xC1829B6EL},{1L,0L},{0L,0x0F783377L}},{{7L,7L},{(-1L),0xE9983536L},{(-10L),0xFC3BC345L},{1L,0L},{0xA5332CF8L,3L}},{{(-1L),1L},{(-1L),3L},{0xA5332CF8L,0L},{3L,0x9AA37C3AL},{1L,0x110B0F3EL}}};
static int32_t g_62 = 2L;
static struct S1 g_66 = {{8UL,1UL,0xA99DB6ABL},-1L,0xBB49L,246UL};
static const struct S2 g_91 = {-4L,0x53A0L,{{4294967294UL,0x02D6L,1L},0x15L,0x20A8L,0x71L}};
static uint64_t g_244 = 0UL;



static uint32_t  func_1(void);
static struct S0  func_3(int8_t  p_4);
static uint64_t  func_5(uint8_t  p_6, struct S2  p_7);
static int64_t  func_15(int32_t  p_16, int8_t  p_17, uint16_t  p_18);




static uint32_t  func_1(void)
{ 
    uint8_t l_2 = 8UL;
    struct S2 l_11 = {1L,0x8ABBL,{{4294967287UL,0x2CA3L,1L},0x2CL,0x2085L,255UL}};
    uint32_t l_136 = 0xB18042E1L;
    uint32_t l_150 = 1UL;
    int32_t l_151 = (-4L);
    int32_t l_159 = 0x950A55D3L;
    union U3 l_184 = {-5L};
    int32_t l_218 = 0L;
    int32_t l_222 = 8L;
    uint16_t l_223 = 65535UL;
    l_136 |= ((l_2 & (func_3((18446744073709551615UL < func_5((g_10 |= (safe_lshift_func_uint8_t_u_s(l_2, (l_2 & l_2)))), l_11))) , l_11.f2.f1)) > g_91.f2.f1);
    l_151 = ((safe_add_func_uint16_t_u_u((l_150 = (((safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(g_54[3][3][0], (g_47[1][1].f1 || (safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_11.f1, g_91.f2.f3)), (-5L))) >= 0xA9B584F45175A4C1LL), l_136))))) && l_11.f2.f0.f0), g_66.f0.f2)))) >= 0x9F99L) | l_11.f2.f0.f2)), g_66.f0.f1)) > g_91.f2.f0.f0);
    for (g_42 = 0; (g_42 <= 1); g_42 += 1)
    { 
        int32_t l_158 = 0L;
        int32_t l_217 = 5L;
        int32_t l_220 = 1L;
        l_159 &= ((safe_mul_func_int8_t_s_s(g_47[1][1].f2, (((8UL | (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_151 = (l_11.f2.f0.f0 == ((-3L) & 0xCC1DL))), g_47[1][1].f0)), 252UL))) , 7L) >= g_66.f2))) < l_158);
        if ((safe_sub_func_uint16_t_u_u(65533UL, (!((~((safe_div_func_uint32_t_u_u(g_52, ((safe_sub_func_int8_t_s_s((0x3BL & ((l_158 && g_47[1][1].f2) || g_47[1][1].f0)), g_26)) ^ l_158))) != 0xA71E2FDBL)) >= 1UL)))))
        { 
            return g_91.f2.f0.f1;
        }
        else
        { 
            for (g_10 = 0; (g_10 <= 1); g_10 += 1)
            { 
                const int64_t l_174 = 1L;
                int32_t l_175 = 0x0F382EBAL;
                g_54[0][1][1] = ((safe_div_func_uint16_t_u_u((l_158 = (g_91.f2.f0.f2 < (safe_mul_func_uint16_t_u_u(65535UL, l_158)))), (0x8D9C53CFL & g_66.f0.f2))) <= g_91.f2.f0.f2);
                l_175 |= (safe_mul_func_uint16_t_u_u((l_174 != g_91.f2.f0.f0), 1UL));
                if (g_66.f0.f1)
                    break;
            }
            g_62 = (((l_158 = (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u((-8L), 10)) , g_91.f2.f2), 6)), 0)) > (safe_add_func_int64_t_s_s((l_184 , (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((g_66.f1 && (-1L)), 3)), g_91.f2.f0.f0)) == g_62), g_47[1][1].f1))), 0UL))) , l_11.f2.f3)) && g_47[1][1].f0) , l_158);
        }
        if ((g_66.f2 ^ 0x0EL))
        { 
            for (l_11.f2.f1 = 0; (l_11.f2.f1 <= 1); l_11.f2.f1 += 1)
            { 
                const int32_t l_193 = 0x6CCF5C82L;
                int32_t l_196[2][4] = {{0xAA1FBC1CL,0xF163A15DL,0xF163A15DL,0xAA1FBC1CL},{0xF163A15DL,0xAA1FBC1CL,0xF163A15DL,0xF163A15DL}};
                int i, j;
                g_54[4][3][1] &= (l_151 = ((g_26 >= (safe_rshift_func_uint16_t_u_s(((l_193 , l_193) > (safe_sub_func_uint16_t_u_u((l_193 <= g_91.f2.f1), 0x447BL))), 13))) != 0x7FB0264D0DC1B115LL));
                g_62 |= (g_47[1][1].f0 & (l_196[0][3] |= 1UL));
            }
        }
        else
        { 
            uint32_t l_199 = 4294967294UL;
            int32_t l_200 = 0x81C9F17BL;
            l_200 ^= ((safe_rshift_func_int8_t_s_u((0x316536C7F4103FC8LL < 0xBF05D6A4A3CB0796LL), 4)) ^ (g_47[1][1].f2 <= ((l_199 = (g_26 | (-4L))) >= l_136)));
            if ((~((g_54[0][4][1] = ((((0L <= ((((l_11.f2 , (safe_div_func_uint16_t_u_u(((l_11.f2 , ((0x2E75L || l_158) | g_91.f2.f2)) || 0xAAFDL), l_11.f2.f3))) || g_66.f3) | (-9L)) , 0x741CL)) ^ g_30) ^ g_47[1][1].f0) || g_53)) || g_66.f1)))
            { 
                g_54[2][0][1] &= (safe_rshift_func_int8_t_s_u(l_200, ((g_91.f2.f1 > g_91.f0) < (safe_div_func_uint8_t_u_u(((g_62 = g_66.f0.f1) != l_199), 0x7DL)))));
            }
            else
            { 
                if (g_91.f1)
                    break;
            }
            for (l_150 = 0; (l_150 <= 1); l_150 += 1)
            { 
                l_159 = l_158;
            }
        }
        for (l_184.f2.f1 = 0; (l_184.f2.f1 <= 1); l_184.f2.f1 += 1)
        { 
            int64_t l_208 = (-10L);
            int32_t l_209 = 0x95F825B9L;
            int32_t l_210 = 0xC907DCE9L;
            int32_t l_211 = 2L;
            uint32_t l_212 = 4294967290UL;
            ++l_212;
            if (((safe_lshift_func_uint8_t_u_s((l_158 > 0x96D331418DA4701ELL), l_211)) ^ g_54[4][4][0]))
            { 
                int16_t l_219[3];
                int32_t l_221[3];
                const uint16_t l_226 = 0x84E1L;
                int i;
                for (i = 0; i < 3; i++)
                    l_219[i] = 1L;
                for (i = 0; i < 3; i++)
                    l_221[i] = 1L;
                g_54[0][2][1] = g_91.f2.f0.f1;
                l_223++;
                l_221[0] |= l_226;
            }
            else
            { 
                uint64_t l_241 = 0x4017778F09F02BEELL;
                int8_t l_245 = (-1L);
                g_54[2][2][0] = (l_208 , ((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_2, (safe_div_func_uint64_t_u_u((g_30 || ((g_91.f2 , 3UL) > 0xC812790765E25151LL)), l_220)))), g_66.f0.f1)) , g_66.f0.f1), 0x743FL)) != g_91.f2.f3));
                if (g_53)
                    continue;
                g_54[4][3][1] = ((safe_div_func_uint16_t_u_u(l_2, ((l_245 ^= (safe_rshift_func_int8_t_s_s((l_210 &= (safe_div_func_int16_t_s_s((g_10 == (l_241 <= ((safe_mod_func_int64_t_s_s((g_244 = l_220), (-1L))) != l_217))), l_209))), 7))) && g_47[1][1].f0))) < g_91.f2.f0.f0);
            }
            return g_91.f2.f1;
        }
    }
    return g_10;
}



static struct S0  func_3(int8_t  p_4)
{ 
    int32_t l_92 = 5L;
    int32_t l_95 = 0xC79135E9L;
    int32_t l_97 = 0xF23FE851L;
    int32_t l_100 = (-7L);
    int32_t l_101 = 0x58D3A23BL;
    int32_t l_102 = 9L;
    int32_t l_103 = 0xD02F7E15L;
    int32_t l_104 = 0L;
    int32_t l_105[4];
    struct S0 l_135 = {1UL,9UL,9L};
    int i;
    for (i = 0; i < 4; i++)
        l_105[i] = 0x1E9DA67FL;
    for (p_4 = (-1); (p_4 <= 21); p_4 = safe_add_func_int32_t_s_s(p_4, 1))
    { 
        uint16_t l_93 = 0x7714L;
        l_93 = (((safe_div_func_uint16_t_u_u((((1L && ((-1L) < (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0x97L, 3)), (g_91 , 0x21C9L))))) | l_92) == g_91.f2.f3), g_66.f0.f1)) , l_92) , g_91.f0);
    }
    if (g_53)
    { 
        int16_t l_94 = 9L;
        int32_t l_96 = 0x4359D1E7L;
        int32_t l_98 = (-7L);
        int32_t l_99[4][1][2] = {{{2L,2L}},{{2L,2L}},{{2L,2L}},{{2L,2L}}};
        uint32_t l_106 = 0x2220EF40L;
        int i, j, k;
        --l_106;
        for (l_100 = 0; l_100 < 5; l_100 += 1)
        {
            for (l_101 = 0; l_101 < 5; l_101 += 1)
            {
                for (l_104 = 0; l_104 < 2; l_104 += 1)
                {
                    g_54[l_100][l_101][l_104] = 1L;
                }
            }
        }
    }
    else
    { 
        struct S1 l_114[3] = {{{0x74765F4EL,2UL,4L},-8L,65535UL,0x88L},{{0x74765F4EL,2UL,4L},-8L,65535UL,0x88L},{{0x74765F4EL,2UL,4L},-8L,65535UL,0x88L}};
        int32_t l_126 = 0xED3BE867L;
        int32_t l_132 = (-9L);
        int i;
        if (((+(safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((p_4 <= ((g_54[4][4][0] , l_114[2]) , 0UL)) | 0x219C124DL), g_47[1][1].f1)), p_4))) > p_4))
        { 
            for (g_30 = 0; (g_30 == 31); g_30 = safe_add_func_int16_t_s_s(g_30, 3))
            { 
                return l_114[2].f0;
            }
        }
        else
        { 
            uint8_t l_131 = 2UL;
            int32_t l_133 = 0x51AC1E00L;
            uint32_t l_134[4];
            int i;
            for (i = 0; i < 4; i++)
                l_134[i] = 0xC9164872L;
            l_95 = (((l_134[1] |= ((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((l_133 = (l_132 = (((safe_div_func_uint32_t_u_u((((+((((safe_mul_func_uint8_t_u_u(g_47[1][1].f2, ((-9L) == ((((((l_126 = 65535UL) ^ (((((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((((p_4 && 0UL) || l_114[2].f0.f0) < p_4) <= g_47[1][1].f2), 4)), p_4)) > (-7L)) && 255UL) , 0x73355EA1934B4E14LL) != 0UL)) , l_114[2].f2) ^ 0x2BDCL) <= 4294967295UL) & p_4)))) & 255UL) > p_4) , g_91.f2.f2)) || l_126) && p_4), p_4)) >= l_131) || 6UL))), l_114[2].f0.f1)), 0L)) & p_4)) <= 0xB070683AL) > g_91.f1);
        }
    }
    return l_135;
}



static uint64_t  func_5(uint8_t  p_6, struct S2  p_7)
{ 
    uint8_t l_12[1][2];
    int32_t l_55[2][5][1] = {{{9L},{7L},{0x90AD7A22L},{7L},{9L}},{{9L},{7L},{0x90AD7A22L},{7L},{9L}}};
    uint8_t l_82 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_12[i][j] = 255UL;
    }
    if (l_12[0][0])
    { 
        uint16_t l_56 = 0UL;
        g_30 = (safe_lshift_func_int8_t_s_s((func_15(((!(safe_add_func_uint16_t_u_u(g_10, (((g_10 != (((safe_add_func_uint16_t_u_u((((((safe_sub_func_uint64_t_u_u((l_12[0][1] ^ p_7.f2.f2), l_12[0][0])) | 65528UL) > 0L) | g_10) , g_10), 0x9052L)) >= p_7.f1) < l_12[0][0])) > g_10) < g_10)))) , g_10), p_7.f2.f0.f2, g_10) != 0xFD5269945C66B319LL), g_10));
        if ((safe_rshift_func_int8_t_s_s((((safe_div_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s((p_7.f2.f1 >= (g_30 & (safe_rshift_func_int8_t_s_u(4L, 1)))), (!((safe_add_func_uint32_t_u_u((g_42 ^= (0xE3L < p_7.f2.f3)), 0L)) == p_7.f2.f0.f0)))) > 1UL) >= 65529UL), p_7.f2.f0.f1)) , p_7.f2.f0.f2) != 0UL), 5)))
        { 
            union U3 l_46 = {0xABB5L};
            g_52 = (safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u(l_12[0][0], (((l_46 , (g_47[1][1] , ((((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s((g_47[1][1].f2 , p_7.f2.f1), 7)) < p_7.f1) || 0x9AAD11CF5132FC9DLL), 11)) & 65533UL) <= (-1L)) && 1UL))) <= 0x0F218D36L) <= 0xE67EL)))));
        }
        else
        { 
            g_53 = 0L;
        }
        l_56++;
    }
    else
    { 
        int8_t l_61 = 0x1CL;
        int32_t l_63 = 0x9D6528A1L;
        l_63 = ((safe_mod_func_uint32_t_u_u((g_47[1][1].f1 == ((l_61 | g_62) , ((g_26 < l_12[0][0]) & 1UL))), p_7.f0)) == (-10L));
    }
    for (p_7.f1 = (-7); (p_7.f1 > 14); ++p_7.f1)
    { 
        int64_t l_81 = 0L;
        g_54[4][4][0] = (g_66 , (safe_div_func_uint64_t_u_u((!(safe_mul_func_uint8_t_u_u((~(((((safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(0x00E1E3E4B84AAFB9LL, 0x05481B40075A6259LL)), (l_55[1][4][0] &= (((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u((g_54[4][2][0] < 0x02L), p_7.f2.f3)) ^ g_66.f2), 0UL)) && g_54[2][2][0]) > p_7.f2.f0.f1)))) , l_12[0][1]) , g_54[1][3][1]) , p_7.f2.f0.f1) < l_81)), l_82))), 18446744073709551615UL)));
    }
    return p_7.f2.f0.f0;
}



static int64_t  func_15(int32_t  p_16, int8_t  p_17, uint16_t  p_18)
{ 
    uint16_t l_29[3];
    int i;
    for (i = 0; i < 3; i++)
        l_29[i] = 7UL;
    --g_26;
    return l_29[2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_47[i][j].f0, "g_47[i][j].f0", print_hash_value);
            transparent_crc(g_47[i][j].f1, "g_47[i][j].f1", print_hash_value);
            transparent_crc(g_47[i][j].f2, "g_47[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_54[i][j][k], "g_54[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_66.f0.f0, "g_66.f0.f0", print_hash_value);
    transparent_crc(g_66.f0.f1, "g_66.f0.f1", print_hash_value);
    transparent_crc(g_66.f0.f2, "g_66.f0.f2", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f3, "g_66.f3", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2.f0.f0, "g_91.f2.f0.f0", print_hash_value);
    transparent_crc(g_91.f2.f0.f1, "g_91.f2.f0.f1", print_hash_value);
    transparent_crc(g_91.f2.f0.f2, "g_91.f2.f0.f2", print_hash_value);
    transparent_crc(g_91.f2.f1, "g_91.f2.f1", print_hash_value);
    transparent_crc(g_91.f2.f2, "g_91.f2.f2", print_hash_value);
    transparent_crc(g_91.f2.f3, "g_91.f2.f3", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
