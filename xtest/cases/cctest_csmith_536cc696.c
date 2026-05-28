// SPDX-License-Identifier: MIT
// cctest_csmith_536cc696.c --- cctest case csmith_536cc696 (csmith seed 1399637654)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa26b23bb */
/* @exp_ticks 0x81bc */

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

// Options:   -s 1399637654 -o /tmp/csmith_gen_bg4let9g/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   int8_t  f2;
   int8_t  f3;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   const int64_t  f1;
};

union U2 {
   int64_t  f0;
   const struct S0  f1;
   int64_t  f2;
   uint16_t  f3;
   struct S0  f4;
};

union U3 {
   int32_t  f0;
   int16_t  f1;
};


static union U1 g_8[1] = {{0x3D783989L}};
static int32_t g_29 = 0L;
static int8_t g_57 = (-7L);
static struct S0 g_76 = {0x55375BB7L,0L,-10L,0x31L};
static uint8_t g_88[5] = {8UL,8UL,8UL,8UL,8UL};
static uint16_t g_101 = 65529UL;
static struct S0 g_107 = {4294967292UL,1L,-7L,0xCFL};
static int32_t g_115 = (-6L);
static int8_t g_116 = 0x16L;
static uint8_t g_117[3] = {0xE6L,0xE6L,0xE6L};
static uint32_t g_121 = 0x06BE8E64L;
static int16_t **g_130[2] = {(void*)0,(void*)0};
static struct S0 g_166 = {1UL,0x336D37E9L,6L,0x43L};
static int32_t *g_177 = (void*)0;
static int64_t g_184 = 0L;
static uint32_t g_190 = 18446744073709551609UL;
static int32_t g_200 = 0x70AC92BCL;
static int32_t g_201 = (-1L);
static uint32_t g_202 = 5UL;
static int32_t g_223 = 0x0D2993C0L;
static uint16_t g_224 = 1UL;
static int16_t ***g_231 = &g_130[0];
static int16_t ****g_230 = &g_231;
static uint64_t g_235 = 0x1FBC6ABA3EDC0E59LL;
static uint64_t g_257 = 0xAB741B8BEBA22810LL;
static const int32_t g_280 = 0xE28897AFL;
static uint64_t g_288[7][7][4] = {{{0x9132108994223055LL,18446744073709551611UL,0x58EC46ECEB4F8A2ELL,0xEC25883E4B16275ALL},{0x58EC46ECEB4F8A2ELL,0xEC25883E4B16275ALL,0x7637BC22DC4E463ALL,0xEC25883E4B16275ALL},{1UL,18446744073709551611UL,0x1DF23D3C10A686A8LL,18446744073709551615UL},{0UL,18446744073709551606UL,0xB29E4BBC024C7D9BLL,18446744073709551609UL},{0x1DF23D3C10A686A8LL,18446744073709551615UL,1UL,1UL},{0x1DF23D3C10A686A8LL,0x6EE4CD44637AF094LL,0xB29E4BBC024C7D9BLL,1UL},{0UL,1UL,0x1DF23D3C10A686A8LL,18446744073709551606UL}},{{1UL,0x13302F4F0B716481LL,0x7637BC22DC4E463ALL,0x6EE4CD44637AF094LL},{0x58EC46ECEB4F8A2ELL,0x13302F4F0B716481LL,0x58EC46ECEB4F8A2ELL,18446744073709551611UL},{0x7457197BD910637CLL,18446744073709551615UL,0x7637BC22DC4E463ALL,18446744073709551606UL},{0x3968A6B7EA1FA74CLL,0xEC25883E4B16275ALL,0x6C24658D1362EE10LL,18446744073709551615UL},{0x1DF23D3C10A686A8LL,18446744073709551609UL,0x6C24658D1362EE10LL,0x6EE4CD44637AF094LL},{0x3968A6B7EA1FA74CLL,18446744073709551611UL,0x7637BC22DC4E463ALL,1UL},{0x7457197BD910637CLL,1UL,1UL,0x13302F4F0B716481LL}},{{1UL,0x13302F4F0B716481LL,0UL,0x13302F4F0B716481LL},{0x6C24658D1362EE10LL,1UL,0xB29E4BBC024C7D9BLL,1UL},{0x58EC46ECEB4F8A2ELL,18446744073709551611UL,0x9132108994223055LL,0x6EE4CD44637AF094LL},{0xB29E4BBC024C7D9BLL,18446744073709551609UL,1UL,18446744073709551615UL},{0xB29E4BBC024C7D9BLL,0xEC25883E4B16275ALL,0x9132108994223055LL,18446744073709551606UL},{0x58EC46ECEB4F8A2ELL,18446744073709551615UL,0xB29E4BBC024C7D9BLL,18446744073709551611UL},{0x6C24658D1362EE10LL,1UL,0UL,0xEC25883E4B16275ALL}},{{1UL,1UL,1UL,18446744073709551611UL},{0x7457197BD910637CLL,18446744073709551615UL,0x7637BC22DC4E463ALL,18446744073709551606UL},{0x3968A6B7EA1FA74CLL,0xEC25883E4B16275ALL,0x6C24658D1362EE10LL,18446744073709551615UL},{0x1DF23D3C10A686A8LL,18446744073709551609UL,0x6C24658D1362EE10LL,0x6EE4CD44637AF094LL},{0x3968A6B7EA1FA74CLL,18446744073709551611UL,0x7637BC22DC4E463ALL,1UL},{0x7457197BD910637CLL,1UL,1UL,0x13302F4F0B716481LL},{1UL,0x13302F4F0B716481LL,0UL,0x13302F4F0B716481LL}},{{0x6C24658D1362EE10LL,1UL,0xB29E4BBC024C7D9BLL,1UL},{0x58EC46ECEB4F8A2ELL,18446744073709551611UL,0x9132108994223055LL,0x6EE4CD44637AF094LL},{0xB29E4BBC024C7D9BLL,18446744073709551609UL,1UL,18446744073709551615UL},{0xB29E4BBC024C7D9BLL,0xEC25883E4B16275ALL,0x9132108994223055LL,18446744073709551606UL},{0x58EC46ECEB4F8A2ELL,18446744073709551615UL,0xB29E4BBC024C7D9BLL,18446744073709551611UL},{0x6C24658D1362EE10LL,1UL,0UL,0xEC25883E4B16275ALL},{1UL,1UL,1UL,18446744073709551611UL}},{{0x7457197BD910637CLL,18446744073709551615UL,0x7637BC22DC4E463ALL,18446744073709551606UL},{0x3968A6B7EA1FA74CLL,0xEC25883E4B16275ALL,0x6C24658D1362EE10LL,18446744073709551615UL},{0x1DF23D3C10A686A8LL,18446744073709551609UL,0x6C24658D1362EE10LL,0x6EE4CD44637AF094LL},{0x3968A6B7EA1FA74CLL,18446744073709551611UL,0x7637BC22DC4E463ALL,1UL},{0x7457197BD910637CLL,1UL,1UL,0x13302F4F0B716481LL},{1UL,0x13302F4F0B716481LL,0UL,0x13302F4F0B716481LL},{0x6C24658D1362EE10LL,1UL,0xB29E4BBC024C7D9BLL,1UL}},{{0x58EC46ECEB4F8A2ELL,18446744073709551611UL,0x9132108994223055LL,0x6EE4CD44637AF094LL},{0xB29E4BBC024C7D9BLL,18446744073709551609UL,1UL,18446744073709551615UL},{0xB29E4BBC024C7D9BLL,0xEC25883E4B16275ALL,0x9132108994223055LL,18446744073709551606UL},{0x58EC46ECEB4F8A2ELL,18446744073709551615UL,0xB29E4BBC024C7D9BLL,18446744073709551611UL},{0x6C24658D1362EE10LL,1UL,0UL,0xEC25883E4B16275ALL},{1UL,1UL,1UL,18446744073709551611UL},{0x7457197BD910637CLL,18446744073709551615UL,0x7637BC22DC4E463ALL,18446744073709551606UL}}};
static union U1 g_328 = {4294967286UL};
static int32_t g_330 = 0xD5AF559FL;
static const union U2 g_338 = {-1L};
static int16_t *****g_369 = &g_230;
static int16_t *g_374 = (void*)0;
static int16_t ** const g_373 = &g_374;
static int16_t ** const *g_372[7] = {&g_373,&g_373,&g_373,&g_373,&g_373,&g_373,&g_373};
static int16_t ** const **g_371 = &g_372[3];
static int16_t ** const ***g_370 = &g_371;
static int64_t g_423 = 1L;
static uint32_t g_424 = 1UL;
static int64_t g_430 = 1L;
static uint8_t g_431 = 0x75L;
static int32_t g_446 = 1L;
static uint8_t g_447 = 6UL;
static int8_t g_466[1] = {0L};
static uint32_t g_467 = 0x1FB9A1B0L;
static uint16_t g_477 = 0x4067L;
static union U3 g_493 = {0xAB9AEF6DL};
static union U3 *g_492 = &g_493;
static union U2 g_497 = {0L};
static union U2 *g_496 = &g_497;
static union U2 g_502 = {0x905DFB46C042A84BLL};
static union U2 *g_501 = &g_502;
static uint32_t g_510 = 0x2A0862CBL;
static union U1 g_518 = {0x53B65346L};
static union U1 *g_517 = &g_518;
static union U1 g_538[1][7] = {{{0x66912CB5L},{0x66912CB5L},{0x66912CB5L},{0x66912CB5L},{0x66912CB5L},{0x66912CB5L},{0x66912CB5L}}};
static union U1 *g_537 = &g_538[0][1];



static const uint32_t  func_1(void);
static uint8_t  func_4(union U1  p_5, union U3  p_6, uint8_t  p_7);
static union U3  func_9(uint16_t  p_10, int16_t  p_11, int32_t  p_12, uint32_t  p_13, uint64_t  p_14);
static const uint32_t  func_18(int32_t  p_19, union U1  p_20, int32_t  p_21);
static uint8_t  func_24(int32_t  p_25);
static uint16_t  func_37(uint32_t  p_38, int32_t * p_39, int32_t  p_40, const int32_t * const  p_41);
static const int32_t * func_42(uint32_t  p_43, uint32_t  p_44, struct S0  p_45, const union U2  p_46, struct S0  p_47);
static uint16_t  func_50(int32_t * p_51);




static const uint32_t  func_1(void)
{ 
    uint64_t l_17 = 0xD2D1A4E665969A22LL;
    int32_t *l_28 = &g_29;
    union U1 l_30 = {4294967295UL};
    int32_t l_339 = 0L;
    int16_t **l_489 = &g_374;
    union U2 l_503 = {0x677CD34A7F225805LL};
    const uint32_t l_566 = 0x2C186B46L;
    if ((safe_mul_func_int8_t_s_s(((0x0FL > (func_4(g_8[0], func_9(g_8[0].f0, ((safe_lshift_func_uint16_t_u_u(l_17, 11)) == func_18(((*l_28) = ((safe_add_func_uint8_t_u_u((0x93CC254292978D8ELL != l_17), func_24(l_17))) , 0x7D19FA55L)), l_30, g_8[0].f0)), l_339, g_338.f2, g_57), g_115) & g_423)) , 0L), g_431)))
    { 
        int32_t l_487[3][3];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_487[i][j] = 1L;
        }
        for (l_17 = 0; (l_17 >= 56); l_17++)
        { 
            int32_t * const l_488[6] = {&g_330,&g_330,&g_330,&g_330,&g_330,&g_330};
            struct S0 l_508 = {4294967287UL,0x7B2D10E0L,-1L,-10L};
            int i;
            for (g_424 = 0; (g_424 == 29); g_424 = safe_add_func_int8_t_s_s(g_424, 8))
            { 
                uint16_t *l_490[4][6][5] = {{{&g_101,(void*)0,(void*)0,&g_101,&g_477},{(void*)0,&g_477,(void*)0,&g_101,(void*)0},{&g_101,&g_101,&g_224,(void*)0,&g_477},{&g_101,&g_101,&g_101,&g_101,&g_101},{&g_477,(void*)0,&g_224,&g_101,&g_101},{(void*)0,&g_101,(void*)0,&g_477,(void*)0}},{{&g_477,&g_101,(void*)0,(void*)0,&g_101},{&g_101,&g_477,&g_101,&g_477,&g_101},{&g_101,(void*)0,(void*)0,&g_101,&g_477},{(void*)0,&g_477,(void*)0,&g_101,(void*)0},{&g_101,&g_101,&g_224,(void*)0,&g_477},{&g_101,&g_101,&g_101,&g_101,&g_101}},{{&g_477,(void*)0,&g_224,&g_101,&g_101},{(void*)0,&g_101,(void*)0,&g_477,(void*)0},{&g_477,&g_101,(void*)0,(void*)0,&g_101},{&g_101,&g_477,&g_101,&g_477,&g_101},{&g_101,(void*)0,(void*)0,&g_101,&g_477},{(void*)0,&g_477,(void*)0,&g_101,(void*)0}},{{&g_101,&g_101,&g_224,(void*)0,&g_477},{&g_101,&g_101,&g_101,&g_101,&g_101},{&g_477,(void*)0,&g_224,&g_101,&g_101},{(void*)0,&g_101,(void*)0,&g_477,(void*)0},{&g_477,&g_101,(void*)0,(void*)0,&g_101},{&g_101,&g_477,&g_101,&g_477,&g_101}}};
                int32_t l_491[5][5][4] = {{{0x1D605E28L,0xB88C7505L,4L,(-4L)},{0x032BE8C5L,0x9DDEF2D6L,0xE9F89523L,0x0B6A1A72L},{0x46B1A80DL,(-1L),0x46B1A80DL,0xB88C7505L},{0x0B6A1A72L,0x60C5FCF6L,(-1L),(-1L)},{0L,0xBD6F8723L,0L,0x60C5FCF6L}},{{0xBD1C2137L,(-1L),0L,4L},{0L,(-1L),(-1L),0xA56B93D1L},{0x0B6A1A72L,1L,0x46B1A80DL,0L},{0x46B1A80DL,0L,0xE9F89523L,4L},{0x032BE8C5L,4L,4L,0x032BE8C5L}},{{0x1D605E28L,(-9L),0x0B6A1A72L,0L},{2L,0xE9F89523L,0x032BE8C5L,1L},{0xBD6F8723L,0x1D4531A8L,0L,1L},{1L,0xE9F89523L,0x7BEAC7C5L,0L},{4L,(-9L),1L,0x032BE8C5L}},{{0xB88C7505L,4L,(-4L),4L},{(-1L),0L,0x9DDEF2D6L,0L},{0xF37A099BL,1L,0x1D4531A8L,0xA56B93D1L},{(-1L),(-1L),0xA56B93D1L,4L},{4L,(-1L),1L,2L}},{{(-1L),0x9DDEF2D6L,1L,4L},{4L,2L,0xB88C7505L,0L},{(-1L),(-4L),(-9L),0L},{0x0B6A1A72L,(-9L),0x1D605E28L,0x1D605E28L},{0L,0L,(-1L),0xBD6F8723L}}};
                int i, j, k;
                (*g_177) ^= l_487[1][2];
                g_492 = ((l_491[4][3][3] = ((g_338 , l_488[3]) == ((g_29 , ((void*)0 != l_489)) , l_488[2]))) , g_492);
                if ((*g_177))
                { 
                    union U2 **l_498 = &g_496;
                    union U2 **l_499 = (void*)0;
                    union U2 **l_500 = (void*)0;
                    int8_t *l_504 = &g_57;
                    int32_t *l_505 = &g_497.f4.f1;
                    int32_t *l_506[7][7] = {{&g_166.f1,&g_166.f1,&g_166.f1,&g_446,&g_446,&g_166.f1,&g_166.f1},{&g_493.f0,&g_446,&g_76.f1,&g_76.f1,&g_493.f0,&g_493.f0,&g_493.f0},{&g_166.f1,&g_446,&g_446,&g_166.f1,&g_166.f1,&g_166.f1,&g_446},{&g_76.f1,&g_107.f1,&g_493.f0,&g_76.f1,&g_493.f0,&g_107.f1,&g_76.f1},{&g_493.f0,&g_446,(void*)0,&g_446,&g_493.f0,&g_493.f0,&g_446},{&g_223,&g_446,&g_223,&g_493.f0,&g_493.f0,&g_493.f0,&g_493.f0},{&g_446,&g_166.f1,(void*)0,(void*)0,&g_166.f1,&g_446,&g_166.f1}};
                    int32_t l_507 = 0xCAA5F550L;
                    struct S0 *l_509 = &l_508;
                    int i, j;
                    l_339 &= ((((safe_div_func_int8_t_s_s((((*l_498) = g_496) == (g_501 = &g_497)), g_288[2][3][3])) & 0xAF69L) , g_29) != ((((l_503 , (g_223 ^= (l_504 == (void*)0))) , 0x3D61BDEADE6E5E34LL) || l_487[1][2]) && l_507));
                    (*l_509) = l_508;
                }
                else
                { 
                    ++g_510;
                    (*g_177) = 0x57F61D5CL;
                }
            }
            for (g_502.f4.f3 = 0; (g_502.f4.f3 < 1); ++g_502.f4.f3)
            { 
                union U1 *l_516 = &g_328;
                union U1 **l_515[5][2] = {{(void*)0,&l_516},{(void*)0,(void*)0},{&l_516,(void*)0},{(void*)0,&l_516},{(void*)0,(void*)0}};
                int32_t **l_519 = (void*)0;
                int32_t **l_520 = (void*)0;
                int32_t **l_521[4][3] = {{(void*)0,&l_28,(void*)0},{&g_177,&l_28,&g_177},{(void*)0,&l_28,(void*)0},{&g_177,&l_28,&g_177}};
                int i, j;
                if ((*l_28))
                    break;
                g_517 = &g_328;
                g_177 = &l_487[1][2];
            }
            return (*l_28);
        }
        l_28 = &l_487[0][2];
    }
    else
    { 
        uint32_t l_522 = 4294967293UL;
        int16_t ****l_528 = &g_231;
        struct S0 l_535 = {0x66771D12L,-10L,1L,-8L};
        struct S0 l_565 = {0x8C4D1A89L,0xFEB7A199L,-3L,-1L};
        if (l_522)
        { 
            uint64_t *l_529 = &g_288[1][2][1];
            int64_t *l_530 = &g_502.f0;
            g_177 = (((*l_530) = ((((safe_unary_minus_func_int16_t_s((*l_28))) , l_522) ^ (safe_mod_func_uint32_t_u_u((&g_177 == &g_177), (g_466[0] && ((++g_224) < (((*l_529) = ((void*)0 != l_528)) | 0x397F182655AF0201LL)))))) != 0xFBL)) , &g_29);
        }
        else
        { 
            struct S0 l_533 = {4294967291UL,-9L,0x7DL,4L};
            union U1 l_546 = {4294967290UL};
            for (g_502.f2 = 8; (g_502.f2 >= (-30)); g_502.f2 = safe_sub_func_int32_t_s_s(g_502.f2, 8))
            { 
                struct S0 *l_534[5][1] = {{(void*)0},{&g_497.f4},{(void*)0},{&g_497.f4},{(void*)0}};
                union U1 **l_536[2][3][5] = {{{&g_517,(void*)0,(void*)0,&g_517,(void*)0},{&g_517,&g_517,&g_517,&g_517,&g_517},{(void*)0,&g_517,(void*)0,(void*)0,&g_517}},{{&g_517,(void*)0,(void*)0,&g_517,(void*)0},{&g_517,&g_517,&g_517,&g_517,&g_517},{(void*)0,&g_517,(void*)0,(void*)0,&g_517}}};
                int i, j, k;
                l_535 = ((*g_501) , l_533);
                (*l_28) ^= (-5L);
                g_537 = &g_8[0];
                return (*l_28);
            }
            for (g_121 = 0; (g_121 != 15); g_121 = safe_add_func_int64_t_s_s(g_121, 5))
            { 
                int64_t l_557 = (-1L);
                uint16_t *l_562[7][7][5] = {{{&l_503.f3,&g_224,&g_224,&g_477,(void*)0},{(void*)0,&g_101,&g_497.f3,(void*)0,&l_503.f3},{&g_477,&g_497.f3,&g_497.f3,&g_477,&g_101},{&g_477,(void*)0,&g_101,&g_224,&g_101},{&g_101,(void*)0,&g_477,&g_101,&g_477},{&g_497.f3,&g_497.f3,&g_477,&g_101,&g_502.f3},{&g_497.f3,(void*)0,&g_502.f3,&g_477,&l_503.f3}},{{&g_497.f3,(void*)0,(void*)0,&g_101,(void*)0},{&g_502.f3,&g_101,(void*)0,&g_477,(void*)0},{&g_502.f3,&g_497.f3,&g_502.f3,&l_503.f3,&g_502.f3},{(void*)0,&g_101,&g_477,&g_497.f3,(void*)0},{&l_503.f3,&g_224,&g_477,(void*)0,&g_502.f3},{&g_101,&g_477,&g_101,&g_497.f3,&g_502.f3},{&g_101,(void*)0,&g_477,&g_497.f3,&g_502.f3}},{{&g_477,&l_503.f3,(void*)0,&l_503.f3,&g_477},{&g_224,&l_503.f3,&g_224,(void*)0,&g_502.f3},{(void*)0,(void*)0,&g_497.f3,&l_503.f3,&g_497.f3},{&g_497.f3,&g_497.f3,&g_502.f3,&l_503.f3,&g_502.f3},{&g_502.f3,&l_503.f3,&g_101,&g_477,&g_477},{&g_502.f3,&g_224,&g_101,&g_101,&g_502.f3},{(void*)0,&g_497.f3,&l_503.f3,&l_503.f3,&g_502.f3}},{{&l_503.f3,&l_503.f3,&g_101,&g_497.f3,&g_101},{&g_502.f3,&g_502.f3,(void*)0,&g_224,&g_477},{(void*)0,&g_477,(void*)0,&g_502.f3,&l_503.f3},{(void*)0,&g_497.f3,&g_224,&g_497.f3,&g_101},{&g_502.f3,&g_101,&g_497.f3,&g_101,&l_503.f3},{&g_224,&g_101,&g_502.f3,&g_502.f3,&g_477},{&g_224,&g_497.f3,&g_101,&g_497.f3,(void*)0}},{{&g_497.f3,&g_477,&g_502.f3,&g_502.f3,&g_101},{&g_224,&g_502.f3,&g_101,(void*)0,&g_224},{&l_503.f3,&l_503.f3,&l_503.f3,&g_497.f3,&l_503.f3},{&g_101,&g_497.f3,&g_502.f3,(void*)0,&g_497.f3},{(void*)0,&g_224,&g_224,(void*)0,&l_503.f3},{&g_224,&l_503.f3,(void*)0,&g_101,&g_502.f3},{&g_101,&g_497.f3,&g_477,&g_224,&g_101}},{{&g_224,(void*)0,&l_503.f3,&g_101,&g_497.f3},{&g_224,&l_503.f3,&g_502.f3,(void*)0,&g_101},{&g_497.f3,&l_503.f3,(void*)0,(void*)0,&l_503.f3},{&g_497.f3,(void*)0,&g_224,&g_497.f3,&g_477},{&g_101,(void*)0,&g_497.f3,(void*)0,&l_503.f3},{&g_477,&g_224,&l_503.f3,&g_502.f3,(void*)0},{&g_477,&g_101,&g_497.f3,&g_497.f3,&g_101}},{{&g_502.f3,&g_497.f3,(void*)0,&g_502.f3,&g_497.f3},{(void*)0,&g_497.f3,&g_497.f3,&g_101,&g_224},{(void*)0,&l_503.f3,&g_101,&g_497.f3,(void*)0},{&g_502.f3,(void*)0,&g_502.f3,&g_502.f3,&g_477},{&g_477,&g_477,&g_502.f3,&g_224,&g_502.f3},{&g_477,&l_503.f3,&g_101,&g_497.f3,&g_101},{&g_101,&g_477,&l_503.f3,&l_503.f3,&g_224}}};
                int i, j, k;
                (*g_177) = (safe_add_func_int64_t_s_s((!((safe_mul_func_uint8_t_u_u((*l_28), (l_546 , (safe_mod_func_uint32_t_u_u(0UL, g_423))))) != ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((g_107 , (((safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((l_557 , (safe_sub_func_uint32_t_u_u(4294967295UL, 0x028BA34BL))), g_107.f3)), g_447)) , l_557) ^ 65532UL)), 7)) || 1L), 0UL)) < g_201))), l_533.f0));
                (*l_28) = ((safe_mul_func_int16_t_s_s(l_533.f1, 0x74B1L)) & (--g_502.f3));
            }
            l_565 = g_166;
        }
        (*l_28) = l_522;
    }
    return l_566;
}



static uint8_t  func_4(union U1  p_5, union U3  p_6, uint8_t  p_7)
{ 
    int32_t *l_344 = &g_201;
    int32_t **l_345 = &l_344;
    int32_t **l_346 = &g_177;
    uint16_t l_400 = 0x4582L;
    struct S0 l_404 = {4294967287UL,1L,0xC5L,4L};
    const uint32_t *l_415 = (void*)0;
    int32_t l_429 = 0xB63C31E3L;
    int32_t *l_445[3][3][4] = {{{&g_200,&g_200,&l_429,&g_200},{&g_200,&g_201,&g_201,&g_200},{&g_201,&g_200,&l_429,&l_429}},{{&g_201,&g_201,&g_200,&g_201},{&g_201,&l_429,&l_429,&g_201},{&l_429,&g_201,&l_429,&l_429}},{{&g_201,&g_201,&g_200,&g_201},{&g_201,&l_429,&l_429,&g_201},{&l_429,&g_201,&l_429,&l_429}}};
    int16_t **l_454 = &g_374;
    uint16_t *l_460 = &g_101;
    uint16_t **l_459 = &l_460;
    int i, j, k;
    (*l_346) = ((*l_345) = l_344);
    for (g_166.f1 = 0; (g_166.f1 <= 3); g_166.f1 += 1)
    { 
        uint16_t *l_349 = &g_101;
        int32_t *l_352 = &g_200;
        uint8_t *l_363 = &g_117[0];
        uint8_t **l_364 = (void*)0;
        uint8_t **l_365 = &l_363;
        const int16_t ****l_383 = (void*)0;
        union U1 l_406 = {0x5FF84C86L};
        int32_t l_411 = 0x1BC2CC64L;
        int32_t l_421 = 6L;
        int32_t l_422 = 0xC7AFDE39L;
        union U2 l_442[5] = {{0xBC9BA66C2B61E4DALL},{0xBC9BA66C2B61E4DALL},{0xBC9BA66C2B61E4DALL},{0xBC9BA66C2B61E4DALL},{0xBC9BA66C2B61E4DALL}};
        int i;
        (*l_345) = &g_200;
        if ((safe_rshift_func_uint16_t_u_u((--(*l_349)), 0)))
        { 
            if (p_6.f1)
                break;
        }
        else
        { 
            (*l_345) = l_352;
        }
        g_115 &= (p_7 > (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((g_76.f1 > 0xF5L) | (safe_div_func_int8_t_s_s((((((safe_sub_func_int8_t_s_s(5L, ((-1L) ^ ((safe_sub_func_int32_t_s_s((&p_7 != ((*l_365) = l_363)), p_5.f0)) & 0L)))) & (**l_346)) , 0L) & p_6.f1) ^ (*l_344)), (*l_352)))), 2)), (*l_352))));
        for (g_121 = 0; (g_121 <= 2); g_121 += 1)
        { 
            int16_t *****l_368[5] = {&g_230,&g_230,&g_230,&g_230,&g_230};
            int32_t l_382[2][3] = {{0x0DF19C7CL,0x0DF19C7CL,0x0DF19C7CL},{0x2DD90E1CL,0x2DD90E1CL,0x2DD90E1CL}};
            uint16_t *l_390 = (void*)0;
            int i, j;
        }
    }
    g_447++;
    (**l_345) &= 0x91254DD2L;
    if (((+(safe_unary_minus_func_int64_t_s((safe_sub_func_int16_t_s_s(((void*)0 == l_454), ((p_6.f1 && (p_6.f1 = (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((g_338.f0 || g_328.f0), (((void*)0 == l_459) >= 1L))) , 0xB2D3290A701CC029LL), g_447)))) || p_6.f1)))))) && g_257))
    { 
        uint32_t l_461 = 4294967295UL;
        int16_t l_464 = 1L;
        int32_t l_465[6][7][3] = {{{0xF1C94549L,1L,0x812D7E78L},{0L,0x3EF99F8AL,1L},{0xFD224073L,0xA3C33D08L,0x8B308753L},{(-6L),0xDF17746FL,0x9F6AD7B2L},{0xFEFDCD91L,0xA3C33D08L,0xBA051EA0L},{1L,0x3EF99F8AL,(-1L)},{1L,1L,0xA3C33D08L}},{{0x9F6AD7B2L,0L,0x578D01ADL},{0x1FFD947BL,0x65694252L,0xEDEC5EBDL},{0x578D01ADL,0L,1L},{0L,0x1FFD947BL,0xEDEC5EBDL},{(-1L),0x77A45DEBL,0x578D01ADL},{0xA3C33D08L,1L,0xA3C33D08L},{4L,(-1L),(-1L)}},{{2L,(-5L),0xBA051EA0L},{(-1L),1L,0x9F6AD7B2L},{(-1L),0xBA051EA0L,0x8B308753L},{(-1L),0L,1L},{2L,0x812D7E78L,0x812D7E78L},{4L,0x9F6AD7B2L,0L},{0xA3C33D08L,(-1L),(-1L)}},{{(-1L),0L,(-5L)},{0L,0x87A01B45L,1L},{0x578D01ADL,0L,0L},{0x1FFD947BL,(-1L),2L},{0x9F6AD7B2L,0x9F6AD7B2L,0L},{1L,0x812D7E78L,0xFEFDCD91L},{1L,0L,(-1L)}},{{0xFEFDCD91L,0xBA051EA0L,0x1FFD947BL},{(-6L),1L,(-1L)},{0xFD224073L,(-5L),0xFEFDCD91L},{0L,(-1L),0L},{0xF1C94549L,1L,2L},{(-1L),0x77A45DEBL,0L},{1L,0x1FFD947BL,1L}},{{0x3EF99F8AL,0L,(-5L)},{1L,0x65694252L,(-1L)},{(-1L),0L,0L},{0xF1C94549L,1L,0x812D7E78L},{0L,0x3EF99F8AL,1L},{0xFD224073L,0xA3C33D08L,0x8B308753L},{(-6L),0xDF17746FL,0x9F6AD7B2L}}};
        struct S0 l_470 = {0UL,0xD1FB1966L,0x07L,0xCFL};
        struct S0 *l_471 = (void*)0;
        struct S0 *l_472[1][1][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_472[i][j][k] = &g_107;
            }
        }
        l_461--;
        --g_467;
        g_166 = l_470;
    }
    else
    { 
        struct S0 *l_473[2][1];
        int32_t l_476 = 0xCFCFA3A8L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_473[i][j] = &l_404;
        }
        l_404 = g_76;
        if (g_76.f3)
            goto lbl_482;
lbl_482:
        for (g_223 = (-28); (g_223 != 26); g_223 = safe_add_func_int64_t_s_s(g_223, 6))
        { 
            uint32_t l_480 = 0x92BC3175L;
            g_477--;
            l_480 |= (*g_177);
            (**l_346) ^= (+g_466[0]);
        }
        l_404 = g_76;
    }
    return p_5.f0;
}



static union U3  func_9(uint16_t  p_10, int16_t  p_11, int32_t  p_12, uint32_t  p_13, uint64_t  p_14)
{ 
    uint8_t l_340 = 3UL;
    union U3 l_343 = {0L};
    --l_340;
    return l_343;
}



static const uint32_t  func_18(int32_t  p_19, union U1  p_20, int32_t  p_21)
{ 
    int32_t *l_52 = &g_29;
    int32_t l_162 = 0L;
    int32_t l_163 = 0xC6ED5E12L;
    struct S0 l_164 = {4294967295UL,9L,1L,-1L};
    const union U2 l_165 = {0x8E4F8FBF41BD5012LL};
    const int32_t *l_279 = &g_280;
    const int32_t **l_278 = &l_279;
    const int32_t **l_281 = (void*)0;
    const int32_t *l_283 = &g_280;
    const int32_t **l_282 = &l_283;
    int32_t *l_329[2];
    uint32_t l_331 = 18446744073709551615UL;
    const uint8_t *l_332[6] = {&g_88[2],&g_88[2],&g_88[2],&g_88[2],&g_88[2],&g_88[2]};
    uint32_t *l_333 = (void*)0;
    uint32_t *l_334 = &l_164.f0;
    const union U2 *l_336 = &l_165;
    const union U2 **l_335 = &l_336;
    struct S0 l_337 = {0UL,0L,0x05L,-1L};
    int i;
    for (i = 0; i < 2; i++)
        l_329[i] = &g_330;
    g_330 |= ((safe_sub_func_uint8_t_u_u(0x3CL, ((safe_mul_func_int16_t_s_s(8L, (safe_rshift_func_uint16_t_u_u(func_37((((*l_282) = ((*l_278) = func_42((l_163 &= (safe_add_func_uint16_t_u_u(func_50(l_52), (((safe_sub_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(0x77L, g_116)) > ((((-1L) & 0x7FL) > g_76.f0) >= p_20.f0)), l_162)) | g_57) | 1UL)))), l_162, l_164, l_165, g_166))) != (void*)0), &l_162, g_116, &g_280), 9)))) , g_200))) < g_280);
    (*l_278) = (*l_282);
    return (**l_282);
}



static uint8_t  func_24(int32_t  p_25)
{ 
    for (p_25 = 0; (p_25 > 16); p_25 = safe_add_func_uint32_t_u_u(p_25, 1))
    { 
        return p_25;
    }
    return p_25;
}



static uint16_t  func_37(uint32_t  p_38, int32_t * p_39, int32_t  p_40, const int32_t * const  p_41)
{ 
    int32_t l_299[5][3] = {{0x74BF9248L,(-1L),9L},{0xA065113EL,(-1L),0x3E3AF337L},{0x74BF9248L,0x74BF9248L,0x3E3AF337L},{(-1L),0xA065113EL,9L},{(-1L),0x74BF9248L,(-1L)}};
    uint16_t l_312[5] = {65531UL,65531UL,65531UL,65531UL,65531UL};
    int i, j;
    for (g_107.f0 = 5; (g_107.f0 == 4); g_107.f0 = safe_sub_func_uint32_t_u_u(g_107.f0, 1))
    { 
        uint32_t *l_289 = &g_166.f0;
        int32_t l_294[3][3][2] = {{{0x9AC6F9D8L,0x9AC6F9D8L},{4L,0x9AC6F9D8L},{0x9AC6F9D8L,4L}},{{0x9AC6F9D8L,0x9AC6F9D8L},{4L,0x9AC6F9D8L},{0x9AC6F9D8L,4L}},{{0x9AC6F9D8L,0x9AC6F9D8L},{4L,0x9AC6F9D8L},{0x9AC6F9D8L,4L}}};
        uint8_t l_300 = 255UL;
        int8_t *l_301 = &g_76.f2;
        struct S0 l_307 = {4294967295UL,-1L,0x1AL,0x1FL};
        union U1 l_311 = {1UL};
        union U1 *l_327 = &g_328;
        int i, j, k;
        if ((safe_add_func_int8_t_s_s(((((*l_289) = (0x6C617639L != g_288[2][3][3])) || ((*l_289) = (safe_mul_func_int8_t_s_s(((*l_301) &= (safe_div_func_int64_t_s_s((g_166 , l_294[1][0][0]), (g_184 = (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((((l_299[3][2] & g_117[0]) < p_40) != l_299[1][0]) | p_40) | 65535UL), l_300)), p_38)))))), l_299[3][2])))) && 4294967287UL), g_200)))
        { 
            const int32_t *l_303 = &g_29;
            const int32_t **l_302 = &l_303;
            struct S0 *l_308 = &g_76;
            (*l_302) = &g_280;
            l_294[1][0][0] = ((~g_107.f2) | (safe_rshift_func_uint8_t_u_s(g_76.f1, 6)));
            (*l_308) = l_307;
            l_294[1][0][0] |= (safe_mul_func_uint8_t_u_u((l_311 , ((g_107.f1 <= g_184) & p_38)), l_312[4]));
        }
        else
        { 
            for (l_307.f3 = 0; (l_307.f3 <= (-8)); l_307.f3--)
            { 
                int32_t l_325 = (-1L);
                uint16_t *l_326 = &g_224;
                l_327 = ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(0xAA41L, 3)) == (((*l_326) = ((l_300 ^ (0xCA41L & ((safe_rshift_func_int8_t_s_u(p_38, 1)) != (safe_mul_func_int16_t_s_s(0x710EL, ((safe_rshift_func_uint8_t_u_u(g_57, l_325)) , p_38)))))) ^ 0L)) | g_257)), 4)) , (void*)0);
            }
            (*p_39) = (-1L);
            return g_288[1][0][0];
        }
    }
    return p_40;
}



static const int32_t * func_42(uint32_t  p_43, uint32_t  p_44, struct S0  p_45, const union U2  p_46, struct S0  p_47)
{ 
    const int32_t *l_178 = &g_115;
    int32_t l_179 = (-1L);
    int32_t l_180 = (-9L);
    int32_t l_189 = (-1L);
    int32_t l_193 = 0xE24F2121L;
    int32_t l_194 = (-1L);
    int32_t l_195 = 0L;
    int32_t l_197 = 0x315883FBL;
    int64_t l_198[6];
    int32_t l_199[6][2] = {{0x75515534L,1L},{0x75515534L,1L},{0x75515534L,1L},{0x75515534L,1L},{0x75515534L,1L},{0x75515534L,1L}};
    uint16_t *l_211 = &g_101;
    uint64_t l_212 = 1UL;
    int32_t l_255 = 0xBC11601AL;
    int32_t l_256 = (-1L);
    int i, j;
    for (i = 0; i < 6; i++)
        l_198[i] = (-9L);
    for (p_47.f2 = 3; (p_47.f2 != (-17)); p_47.f2--)
    { 
        int32_t *l_171 = (void*)0;
        int32_t *l_172 = &g_29;
        (*l_172) = ((4L <= (0xD279C397L ^ g_121)) <= (safe_mul_func_int16_t_s_s(((void*)0 == &p_45), g_76.f2)));
        for (g_107.f3 = (-5); (g_107.f3 >= (-14)); --g_107.f3)
        { 
            const int32_t *l_176 = &g_29;
            const int32_t **l_175[7][6] = {{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,(void*)0,&l_176,&l_176,(void*)0},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,(void*)0,(void*)0,&l_176,&l_176},{&l_176,&l_176,(void*)0,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,(void*)0},{&l_176,&l_176,(void*)0,(void*)0,&l_176,&l_176}};
            int i, j;
            g_177 = (void*)0;
            return l_178;
        }
    }
    if (g_107.f2)
    { 
        int32_t *l_181 = &g_29;
        int32_t *l_182 = &g_29;
        int32_t *l_183 = (void*)0;
        int32_t *l_185 = &g_29;
        int32_t *l_186 = &l_180;
        int32_t *l_187 = (void*)0;
        int32_t *l_188[3];
        int32_t l_196 = 1L;
        int32_t ** const l_208 = &l_188[1];
        int32_t ** const *l_207 = &l_208;
        int i;
        for (i = 0; i < 3; i++)
            l_188[i] = &l_179;
        ++g_190;
        ++g_202;
        (*l_182) = (safe_sub_func_uint32_t_u_u(p_45.f2, (g_201 &= p_46.f2)));
        if (((((void*)0 != l_207) | (safe_rshift_func_int16_t_s_u((l_211 == l_211), ((l_212 &= ((void*)0 == &l_178)) == (safe_div_func_int16_t_s_s(0x5930L, g_76.f2)))))) || 0x36E2BBFEL))
        { 
            uint32_t l_215 = 18446744073709551615UL;
            const int32_t *l_219 = &l_189;
            int32_t l_221 = 0x1A4600C2L;
            int32_t l_222[6][7][3] = {{{(-1L),4L,0L},{0x653626FDL,0x47C9686BL,0x82263856L},{3L,0x63A17878L,(-8L)},{0x9440013EL,(-9L),8L},{(-3L),0xD9185341L,0xD9185341L},{0x1EF3CA3EL,0L,0x1841307EL},{(-1L),(-1L),(-3L)}},{{0x325BED0AL,(-1L),4L},{(-3L),0L,0x63A17878L},{1L,(-1L),1L},{(-1L),(-1L),(-1L)},{0x5B9073D2L,0L,0x82263856L},{0L,0xD9185341L,0xA497B899L},{(-9L),(-9L),0x1EF3CA3EL}},{{5L,0x63A17878L,0xA45322D5L},{0x1EF3CA3EL,0x47C9686BL,(-1L)},{(-1L),4L,(-3L)},{0xF4C53DE2L,0x1EF3CA3EL,(-1L)},{1L,0L,0xA45322D5L},{5L,1L,0x1EF3CA3EL},{(-1L),0xE8190F3AL,0xA497B899L}},{{0x82263856L,0L,0x82263856L},{6L,0L,(-1L)},{0L,(-9L),1L},{(-10L),(-1L),0x63A17878L},{0x1EF3CA3EL,0xB8073F35L,4L},{(-10L),0xD1A18D4AL,(-3L)},{0L,(-8L),0x1841307EL}},{{6L,0L,0xD9185341L},{0x82263856L,8L,8L},{(-1L),0xBA50A0FAL,(-8L)},{5L,0xEB74D902L,0x82263856L},{1L,0xA45322D5L,0L},{0xF4C53DE2L,(-9L),(-8L)},{(-1L),0xA45322D5L,0L}},{{0x1EF3CA3EL,0xEB74D902L,0xD25B55C4L},{5L,0xBA50A0FAL,(-3L)},{(-9L),8L,0x2A97C014L},{0L,(-1L),(-1L)},{0xD25B55C4L,5L,0x653626FDL},{(-1L),1L,(-1L)},{0x1841307EL,0xF4C53DE2L,4L}}};
            int i, j, k;
            ++l_215;
            if (l_212)
                goto lbl_220;
lbl_220:
            for (g_190 = 0; (g_190 <= 5); g_190 += 1)
            { 
                const int32_t *l_218[6][2] = {{&l_199[3][0],&l_199[1][1]},{&l_199[3][0],&l_199[1][1]},{&l_199[3][0],&l_199[1][1]},{&l_199[3][0],&l_199[1][1]},{&l_199[3][0],&l_199[1][1]},{&l_199[3][0],&l_199[1][1]}};
                int i, j;
                return &g_200;
            }
            g_224++;
        }
        else
        { 
            int16_t ***l_228 = (void*)0;
            int16_t ****l_227[1];
            int16_t *****l_229 = (void*)0;
            int32_t l_232 = 0x61F2928FL;
            int32_t l_233 = 1L;
            int32_t l_234 = 0x666CFFB0L;
            int i;
            for (i = 0; i < 1; i++)
                l_227[i] = &l_228;
            g_230 = l_227[0];
            g_235++;
            (*l_186) = 0L;
        }
    }
    else
    { 
        int16_t * const **l_244 = (void*)0;
        int16_t * const ***l_243 = &l_244;
        int16_t * const ****l_242 = &l_243;
        uint16_t l_245 = 0UL;
        int32_t l_246[3];
        int32_t *l_247 = &g_29;
        uint8_t l_261 = 0x04L;
        union U1 l_267 = {0x60F6C440L};
        int i;
        for (i = 0; i < 3; i++)
            l_246[i] = 0xA945547AL;
        if (((*l_247) = (((safe_lshift_func_int8_t_s_s(p_44, 2)) & (l_195 = ((p_46 , (((p_46.f3 != ((*l_211)++)) < (((p_45.f3 ^ (((l_242 == &l_243) > (l_246[2] = (l_245 || g_76.f1))) | 0xB941L)) | p_45.f0) && 0xC5L)) , g_116)) != g_223))) , l_246[2])))
        { 
            for (g_190 = 0; (g_190 >= 13); ++g_190)
            { 
                for (g_201 = (-7); (g_201 >= 11); g_201 = safe_add_func_int8_t_s_s(g_201, 1))
                { 
                    return &g_29;
                }
            }
        }
        else
        { 
            int16_t l_252 = 0xFF29L;
            int32_t *l_253 = &l_246[2];
            int32_t *l_254[4][7][4] = {{{&l_179,&l_189,&l_179,&g_200},{&l_179,&g_200,&g_200,&l_179},{&l_246[2],&g_200,&l_246[2],&g_200},{&g_200,&l_189,&l_246[2],&l_246[2]},{&l_246[2],&l_246[2],&g_200,&l_246[2]},{&l_179,&l_189,&l_179,&g_200},{&l_179,&g_200,&g_200,&l_179}},{{&l_246[2],&g_200,&l_246[2],&g_200},{&g_200,&l_189,&l_246[2],&l_246[2]},{&l_246[2],&l_246[2],&g_200,&l_246[2]},{&l_179,&l_189,&l_179,&g_200},{&l_179,&g_200,&g_200,&l_179},{&l_246[2],&g_200,&l_246[2],&g_200},{&g_200,&l_189,&l_246[2],&l_246[2]}},{{&l_246[2],&l_246[2],&g_200,&l_246[2]},{&l_179,&l_189,&l_179,&g_200},{&l_179,&g_200,&g_200,&l_179},{&l_246[2],&g_200,&l_246[2],&g_200},{&g_200,&l_189,&l_246[2],&l_246[2]},{&l_246[2],&l_246[2],&g_200,&l_246[2]},{&l_179,&l_189,&l_179,&g_200}},{{&l_179,&g_200,&g_200,&l_179},{&l_246[2],&g_200,&l_246[2],&g_200},{&g_200,&l_189,&l_246[2],&l_246[2]},{&l_246[2],&l_246[2],&g_200,&l_246[2]},{&l_179,&l_189,&l_179,&g_200},{&l_179,&g_200,&g_200,&l_179},{&l_246[2],&g_200,&l_246[2],&g_200}}};
            const union U2 *l_265 = (void*)0;
            const union U2 **l_264 = &l_265;
            int i, j, k;
            --g_257;
            for (g_184 = 0; (g_184 <= 1); g_184 += 1)
            { 
                const int32_t *l_260 = &l_194;
                return &g_200;
            }
            l_261--;
            (*l_264) = &p_46;
            for (p_45.f2 = 5; (p_45.f2 >= 0); p_45.f2 -= 1)
            { 
                struct S0 *l_266 = &g_166;
                (*l_266) = ((2L || ((*l_247) ^= 0x06843F4BL)) , g_76);
                for (g_107.f2 = 0; (g_107.f2 <= 5); g_107.f2 += 1)
                { 
                    uint32_t *l_276 = &g_76.f0;
                    uint32_t *l_277 = &g_121;
                    int i;
                    (*l_253) = (((*l_277) ^= (l_267 , ((safe_mul_func_int8_t_s_s((g_107.f3 ^= l_198[p_45.f2]), g_117[2])) & ((*l_247) &= (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(1L, 1)) & ((*l_276) = 0UL)), p_43)))))) != ((((**g_230) == (void*)0) ^ (*l_178)) || p_45.f0));
                }
            }
        }
    }
    return &g_115;
}



static uint16_t  func_50(int32_t * p_51)
{ 
    int32_t *l_54 = &g_29;
    int32_t **l_53 = &l_54;
    int32_t *l_55 = &g_29;
    int32_t *l_56 = &g_29;
    int32_t l_58 = 0x49CE5708L;
    int32_t *l_59 = &l_58;
    int32_t *l_60 = &g_29;
    int32_t *l_61 = &l_58;
    int32_t l_62 = 0x387C7A50L;
    int32_t *l_63 = &g_29;
    int32_t *l_64 = &g_29;
    int32_t *l_65 = (void*)0;
    int32_t l_66 = 0xFF9752EEL;
    int32_t *l_67 = &l_66;
    int32_t *l_68 = &l_62;
    int32_t *l_69 = &g_29;
    int32_t *l_70[4];
    uint32_t l_71 = 18446744073709551615UL;
    union U3 l_86 = {0x7E707ECBL};
    uint8_t *l_87 = &g_88[2];
    int8_t *l_89 = (void*)0;
    int32_t ***l_90 = (void*)0;
    int32_t ***l_91 = &l_53;
    int64_t l_114 = (-1L);
    struct S0 l_125 = {4294967291UL,-1L,-5L,1L};
    int16_t *l_128[3];
    int16_t **l_127 = &l_128[2];
    uint32_t l_142[4][3][6] = {{{18446744073709551613UL,0UL,0x307D3DBFL,1UL,0x8EC7F2D8L,18446744073709551613UL},{0x846CE4CEL,18446744073709551615UL,18446744073709551615UL,18446744073709551613UL,1UL,1UL},{18446744073709551608UL,18446744073709551611UL,18446744073709551611UL,18446744073709551608UL,0UL,0xFA2621F7L}},{{18446744073709551615UL,1UL,18446744073709551608UL,1UL,1UL,4UL},{0x8FC2E2BEL,1UL,18446744073709551615UL,0x307D3DBFL,1UL,0x91DCC145L},{18446744073709551613UL,1UL,18446744073709551611UL,18446744073709551615UL,0UL,18446744073709551613UL}},{{1UL,18446744073709551611UL,0x6465E51FL,18446744073709551611UL,1UL,18446744073709551609UL},{0xFA2621F7L,18446744073709551615UL,1UL,18446744073709551608UL,0x8EC7F2D8L,0xB47AF966L},{4UL,0UL,18446744073709551608UL,18446744073709551615UL,18446744073709551613UL,0xB47AF966L}},{{0x91DCC145L,1UL,0xB47AF966L,0UL,0xFA2621F7L,1UL},{4UL,1UL,0xB3408E22L,0xB3408E22L,1UL,4UL},{1UL,0xFA2621F7L,0UL,0xB47AF966L,18446744073709551613UL,18446744073709551615UL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_70[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_128[i] = &l_86.f1;
    (*l_53) = p_51;
    l_71--;
    (*l_68) ^= ((**l_53) = (safe_mod_func_uint16_t_u_u((((((g_76 , g_76.f2) , (void*)0) != &l_70[3]) >= ((safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(g_29, ((safe_div_func_int16_t_s_s(((**l_53) >= ((*l_87) = (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint8_t_u_u(((l_86 , (*l_61)) > 4L), 1L)))))), (*l_59))) >= g_76.f0))), (*l_54))) == g_76.f2)) < (*l_61)), (*l_67))));
lbl_145:
    (*l_56) = ((*l_61) ^= (((*l_91) = ((g_76.f3 = g_76.f1) , &l_64)) != &p_51));
    for (g_76.f2 = 3; (g_76.f2 >= 1); g_76.f2 -= 1)
    { 
        uint16_t *l_100 = &g_101;
        struct S0 *l_106 = &g_107;
        uint32_t l_113[2][2] = {{0xE7A76403L,0xE7A76403L},{0xE7A76403L,0xE7A76403L}};
        int16_t **l_132 = &l_128[2];
        const int8_t l_147 = 0x25L;
        int i, j;
        (*l_67) = ((safe_rshift_func_int8_t_s_u(g_88[(g_76.f2 + 1)], g_88[g_76.f2])) , (safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((*l_54), (safe_add_func_uint16_t_u_u(g_88[4], (--(*l_100)))))), (safe_mod_func_int16_t_s_s(g_76.f2, 1UL)))));
        (*l_106) = g_76;
        for (g_76.f3 = 4; (g_76.f3 >= 0); g_76.f3 -= 1)
        { 
            for (g_29 = 3; (g_29 >= 0); g_29 -= 1)
            { 
                int16_t *l_112 = &l_86.f1;
                int i;
                l_70[g_76.f2] = l_70[g_29];
                (*l_68) = ((((*l_112) = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_88[(g_29 + 1)] &= ((void*)0 != &g_101)), g_76.f1)), (g_76.f2 == ((*l_61) != ((-1L) == g_29)))))) ^ g_107.f2) && g_88[2]);
                l_113[0][0] = (p_51 == ((*l_53) = (void*)0));
            }
        }
        --g_117[0];
        for (g_107.f2 = 0; (g_107.f2 <= 4); g_107.f2 += 1)
        { 
            int8_t l_120 = (-1L);
            uint32_t *l_156 = &l_142[0][1][4];
            int32_t l_157 = 0L;
            g_121--;
            for (l_86.f0 = 3; (l_86.f0 >= 0); l_86.f0 -= 1)
            { 
                struct S0 l_124[4] = {{0x9484ABCDL,0xAF5201FEL,0xE7L,0xDFL},{0x9484ABCDL,0xAF5201FEL,0xE7L,0xDFL},{0x9484ABCDL,0xAF5201FEL,0xE7L,0xDFL},{0x9484ABCDL,0xAF5201FEL,0xE7L,0xDFL}};
                int16_t **l_126 = (void*)0;
                int16_t ***l_129[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_129[i] = (void*)0;
                l_125 = l_124[1];
                g_130[0] = (l_127 = l_126);
                if (((*l_61) = ((*l_55) = (~(g_130[0] != l_132)))))
                { 
                    uint8_t *l_143 = &g_117[0];
                    uint8_t l_144[4][2] = {{248UL,248UL},{0UL,248UL},{248UL,0UL},{248UL,248UL}};
                    int i, j;
                    (*l_55) = (*p_51);
                    (*l_60) ^= ((0x1ECAL == ((l_106 != &l_125) > (safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(0xA681L, 0L)) || (((safe_mul_func_uint8_t_u_u(((*l_143) ^= (g_88[l_86.f0] = (l_124[1].f3 | (((!l_120) <= 18446744073709551612UL) <= l_142[0][1][4])))), g_76.f0)) != 0UL) & 0UL)), 10)))) >= l_144[0][0]);
                    return g_101;
                }
                else
                { 
                    int32_t *l_146 = (void*)0;
                    if (g_107.f2)
                        goto lbl_145;
                    (**l_91) = l_146;
                    (**l_91) = (void*)0;
                }
            }
            l_157 ^= (((l_147 < (&l_127 != (((((((*l_156) = ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((void*)0 == l_100) , ((((g_107.f1 == (safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((*l_61), ((*l_100) = ((((*p_51) == l_120) && l_120) == 0x699C01AEL)))), 5))) && (*l_61)) || l_120) , 6UL)), g_88[3])), g_88[2])) & 0xF06EEF2C45E82407LL)) , (*l_55)) > g_107.f3) == g_115) != l_120) , &g_130[0]))) < 0xFF7BL) , g_117[0]);
        }
    }
    return (*l_55);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_8[i].f0, "g_8[i].f0", print_hash_value);

    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2, "g_76.f2", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_88[i], "g_88[i]", print_hash_value);

    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_107.f2, "g_107.f2", print_hash_value);
    transparent_crc(g_107.f3, "g_107.f3", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_117[i], "g_117[i]", print_hash_value);

    }
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_166.f0, "g_166.f0", print_hash_value);
    transparent_crc(g_166.f1, "g_166.f1", print_hash_value);
    transparent_crc(g_166.f2, "g_166.f2", print_hash_value);
    transparent_crc(g_166.f3, "g_166.f3", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_288[i][j][k], "g_288[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_328.f0, "g_328.f0", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_338.f0, "g_338.f0", print_hash_value);
    transparent_crc(g_338.f2, "g_338.f2", print_hash_value);
    transparent_crc(g_338.f3, "g_338.f3", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_466[i], "g_466[i]", print_hash_value);

    }
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_493.f0, "g_493.f0", print_hash_value);
    transparent_crc(g_493.f1, "g_493.f1", print_hash_value);
    transparent_crc(g_497.f0, "g_497.f0", print_hash_value);
    transparent_crc(g_497.f2, "g_497.f2", print_hash_value);
    transparent_crc(g_497.f3, "g_497.f3", print_hash_value);
    transparent_crc(g_502.f3, "g_502.f3", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_518.f0, "g_518.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_538[i][j].f0, "g_538[i][j].f0", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
