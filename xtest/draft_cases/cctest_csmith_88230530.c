// SPDX-License-Identifier: MIT
// cctest_csmith_88230530.c --- cctest case csmith_88230530 (csmith seed 2283996464)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x691e3b6e */

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

// Options:   -s 2283996464 -o /tmp/csmith_gen_m15evggv/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_2[2] = {0L,0L};
static uint16_t g_11 = 1UL;
static uint32_t g_52 = 0xD734895CL;
static int16_t g_79 = (-1L);
static uint32_t g_82 = 4294967295UL;
static int64_t g_96[2] = {5L,5L};
static uint64_t g_121[4] = {18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL};
static uint32_t g_165 = 1UL;



static uint8_t  func_1(void);
static int32_t  func_14(uint16_t  p_15, int32_t  p_16, int64_t  p_17, uint16_t  p_18);
static uint8_t  func_24(uint8_t  p_25);
static uint16_t  func_26(uint8_t  p_27, uint8_t  p_28, int32_t  p_29, uint32_t  p_30, const uint32_t  p_31);




static uint8_t  func_1(void)
{ 
    const int8_t l_13 = 0L;
    int32_t l_93 = 0xF578636BL;
    int32_t l_94 = 0x79E4B39CL;
    uint32_t l_95 = 0x262A889EL;
    uint32_t l_103 = 0x5BB29A1BL;
    int32_t l_190 = 0L;
    int32_t l_191 = (-1L);
lbl_104:
    for (g_2[0] = 24; (g_2[0] != 17); g_2[0]--)
    { 
        uint8_t l_10 = 0x53L;
        int32_t l_12[5][1];
        uint64_t l_37 = 18446744073709551607UL;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_12[i][j] = (-5L);
        }
        if ((safe_add_func_uint64_t_u_u((~(l_12[0][0] &= (safe_add_func_uint32_t_u_u(((g_2[1] == 0xA9565E08L) ^ (g_11 = (l_10 >= 0xF7L))), l_10)))), 0L)))
        { 
            uint32_t l_38 = 0xF4CC511EL;
            if (l_13)
                break;
            g_82 |= func_14((safe_mod_func_int64_t_s_s((!(safe_add_func_int32_t_s_s(g_11, (l_13 || func_24((l_12[0][0] < func_26(((l_37 = (+(safe_unary_minus_func_uint64_t_u((safe_div_func_uint32_t_u_u((+(-1L)), g_2[0])))))) & g_2[0]), g_2[0], g_2[0], l_38, g_11))))))), l_13)), l_12[2][0], l_10, g_11);
            if (l_10)
                break;
        }
        else
        { 
            int64_t l_92 = 0xB7F440AFAA93538BLL;
            g_96[1] ^= (safe_sub_func_uint32_t_u_u((l_95 = (((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int8_t_s_u(g_79, 6)))), (-1L))) & (((safe_div_func_int16_t_s_s(g_2[0], (l_93 |= ((l_12[0][0] |= (0xEA4F543A9B16E5D1LL < 0xBBB80EAEAAC79E06LL)) | l_92)))) > (-10L)) > l_94)) < l_92)), g_52));
        }
    }
    if (((0x9250L & (safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(l_103, 15)) ^ ((l_13 , (l_95 > l_13)) >= l_94)), l_94)) >= l_103), 11))) == (-1L)))
    { 
        int16_t l_120[4] = {0xA4E1L,0xA4E1L,0xA4E1L,0xA4E1L};
        int64_t l_123 = 0x35DC67607BBC662CLL;
        int32_t l_134 = (-5L);
        uint32_t l_161 = 0UL;
        int i;
        if (l_103)
            goto lbl_104;
lbl_200:
        for (l_93 = 0; (l_93 == 15); l_93 = safe_add_func_int16_t_s_s(l_93, 1))
        { 
            uint8_t l_122[5] = {9UL,9UL,9UL,9UL,9UL};
            int64_t l_124 = 0L;
            int i;
            g_2[0] = (safe_div_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((g_79 = ((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((~((((safe_lshift_func_int8_t_s_s(0x57L, 6)) || (g_52 , 1L)) == ((safe_add_func_uint64_t_u_u((g_121[3] &= (((((-1L) >= g_11) < l_120[1]) >= g_2[1]) != l_120[3])), 0x910B13A75C332813LL)) <= g_82)) <= g_52)), 8)), g_52)) <= 1L)), g_2[1])) , l_122[0]) || l_123), l_124));
            g_2[1] = l_13;
            for (l_103 = (-15); (l_103 != 43); ++l_103)
            { 
                uint16_t l_133 = 1UL;
                l_134 = (g_79 == ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0x061D97AAL, (g_52 | ((safe_mod_func_uint32_t_u_u((l_133 , 0x3D77AE26L), g_96[0])) & 0xAA74C462F11252BCLL)))), l_133)) || 0x9E22A4178B3ED55ELL));
            }
        }
        if ((g_2[0] = ((((safe_mul_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_123, (safe_mod_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(0x9C58L, 12)) >= 0UL), 1)) || l_134), 1L)), (-8L))) <= l_120[1]), 9)) >= l_93) , g_121[3]), l_95)))), 1UL)) && g_52) , g_2[0]), 0x7B5EL)) <= l_134) , g_121[3]) < g_96[1])))
        { 
            uint32_t l_162[4];
            int i;
            for (i = 0; i < 4; i++)
                l_162[i] = 2UL;
            l_134 &= (safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(5UL, 4)) || ((safe_lshift_func_uint16_t_u_s((((0xB2BE9FDCL || (safe_mul_func_int8_t_s_s(((0xB6355D27DBBC6626LL <= 0UL) > 0x548CL), (-8L)))) > l_161) | l_120[2]), l_94)) < g_96[0])), l_162[1]));
            l_134 = 0x5583E1B1L;
            l_93 = l_162[1];
        }
        else
        { 
            uint32_t l_178 = 1UL;
            int32_t l_199 = (-1L);
            g_2[0] = ((g_165 |= ((safe_lshift_func_int16_t_s_u(0x7752L, 0)) ^ l_13)) > (safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(1L, (safe_rshift_func_int8_t_s_u(((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(1UL, g_96[1])), l_178)) , l_134) & l_178) , g_2[0]), g_96[1])))), g_2[0])) < 0xDC6FEDBD156105C8LL), 0x2003L)));
            if (((((l_134 = g_2[0]) && (safe_rshift_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((6L & (safe_mod_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((l_191 = (l_190 = (((l_93 = (0x6A1EL <= (((+l_120[1]) & g_79) , 0x01DBL))) != l_178) > l_95))), l_134)), 0xB0D4ED63EAABCA9CLL))), l_103)), l_123)) || g_96[1]) >= 1L), g_96[1]))) , l_134) == g_2[0]))
            { 
                int64_t l_198 = 0xFCB4505FA698E65BLL;
                l_199 &= ((g_11 >= (l_178 && (((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_165 , (safe_mod_func_uint32_t_u_u((((l_178 > g_96[1]) < l_191) | l_161), g_82))), 1)), 6)) || l_198) , g_121[0]))) ^ g_82);
                if (g_52)
                    goto lbl_200;
            }
            else
            { 
                uint32_t l_207 = 4UL;
                l_134 = (((safe_sub_func_uint32_t_u_u(4294967294UL, ((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((g_121[1] | 0x8CA29FBB944C1B7ALL), (g_165 < l_207))), 0xDD3BA113A2588FA3LL)) , 0x08CE9429L))) < g_2[0]) < 1L);
                g_2[0] &= (-1L);
            }
            for (l_103 = (-20); (l_103 < 14); l_103 = safe_add_func_uint8_t_u_u(l_103, 6))
            { 
                g_2[1] = l_199;
            }
        }
    }
    else
    { 
        uint16_t l_210[2];
        int i;
        for (i = 0; i < 2; i++)
            l_210[i] = 7UL;
        l_210[1]++;
        g_2[0] = l_210[1];
    }
    return l_190;
}



static int32_t  func_14(uint16_t  p_15, int32_t  p_16, int64_t  p_17, uint16_t  p_18)
{ 
    uint32_t l_54 = 0xA828C040L;
    int32_t l_57[5][5] = {{0x4C3DC4D7L,(-1L),(-1L),0x4C3DC4D7L,(-1L)},{0x4C3DC4D7L,0x4C3DC4D7L,0x91700558L,0x4C3DC4D7L,0x4C3DC4D7L},{(-1L),0x4C3DC4D7L,(-1L),(-1L),0x4C3DC4D7L},{0x4C3DC4D7L,(-1L),(-1L),0x4C3DC4D7L,(-1L)},{0x4C3DC4D7L,0x4C3DC4D7L,0x91700558L,0x4C3DC4D7L,0x4C3DC4D7L}};
    int i, j;
lbl_58:
    ++l_54;
    for (p_15 = 0; (p_15 <= 4); p_15 += 1)
    { 
        if (l_54)
            goto lbl_58;
        if (p_16)
            break;
        for (p_18 = 0; (p_18 <= 4); p_18 += 1)
        { 
            int i, j;
            return l_57[p_15][p_18];
        }
    }
    for (g_52 = 12; (g_52 > 56); g_52 = safe_add_func_uint16_t_u_u(g_52, 6))
    { 
        uint32_t l_78 = 0UL;
        if (g_2[1])
        { 
            const uint64_t l_76 = 0UL;
            for (p_15 = 0; (p_15 <= 52); p_15 = safe_add_func_uint32_t_u_u(p_15, 9))
            { 
                uint8_t l_77 = 0xA2L;
                g_79 = ((safe_div_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u((+((((safe_add_func_int32_t_s_s((-7L), ((safe_lshift_func_uint16_t_u_u(((1UL && (4294967294UL & (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(p_16, p_18)) < p_18), l_76)))) == p_17), g_52)) || g_2[0]))) , l_77) & p_18) & p_17)), p_18)) < 1UL) != l_78) != l_57[3][0]), g_52)) < g_52);
                if (p_15)
                    goto lbl_58;
                return l_76;
            }
        }
        else
        { 
            uint16_t l_80 = 1UL;
            int32_t l_81 = 3L;
            l_81 ^= (l_80 = p_18);
        }
    }
    return g_2[0];
}



static uint8_t  func_24(uint8_t  p_25)
{ 
    uint8_t l_53[2];
    int i;
    for (i = 0; i < 2; i++)
        l_53[i] = 0xD9L;
    for (g_52 = 0; (g_52 <= 1); g_52 += 1)
    { 
        int i;
        if (l_53[g_52])
            break;
    }
    return l_53[0];
}



static uint16_t  func_26(uint8_t  p_27, uint8_t  p_28, int32_t  p_29, uint32_t  p_30, const uint32_t  p_31)
{ 
    int16_t l_47 = 0L;
    int32_t l_50 = 0xD3709E8EL;
    int32_t l_51 = 0x1AFEC1E1L;
    g_52 = (g_2[1] < ((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((((l_51 = (l_50 = (safe_mul_func_int16_t_s_s(((l_47 ^ (safe_lshift_func_int8_t_s_u(9L, p_27))) < g_2[0]), p_31)))) == l_47) <= g_2[1]), g_11)), 5)) != g_2[1]));
    return l_50;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_121[i], "g_121[i]", print_hash_value);

    }
    transparent_crc(g_165, "g_165", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
