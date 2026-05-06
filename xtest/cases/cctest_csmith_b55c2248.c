// SPDX-License-Identifier: MIT
// cctest_csmith_b55c2248.c --- cctest case csmith_b55c2248 (csmith seed 3042714184)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x771a94fd */

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

// Options:   -s 3042714184 -o /tmp/csmith_gen_48udpjud/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_10 = 2L;
static uint8_t g_32 = 0xBDL;
static int32_t g_37 = 0x7B38E516L;
static int8_t g_50 = 0xF8L;
static int64_t g_53 = (-4L);
static uint64_t g_85 = 8UL;
static uint64_t g_103 = 18446744073709551615UL;
static int16_t g_132 = 0x877AL;
static uint8_t g_141[4] = {0UL,0UL,0UL,0UL};
static int16_t g_145 = (-6L);
static uint16_t g_155[1] = {0UL};
static uint64_t g_214[2][4] = {{0x04ADF1167A4C18CALL,0x04ADF1167A4C18CALL,0x04ADF1167A4C18CALL,0x04ADF1167A4C18CALL},{0x04ADF1167A4C18CALL,0x04ADF1167A4C18CALL,0x04ADF1167A4C18CALL,0x04ADF1167A4C18CALL}};
static uint32_t g_227 = 4294967292UL;
static int16_t g_252 = 0xE3F3L;
static int32_t g_261 = 0xE8D20A93L;



static int32_t  func_1(void);
static int64_t  func_4(uint32_t  p_5, uint8_t  p_6, uint32_t  p_7);
static int8_t  func_11(uint32_t  p_12, int32_t  p_13, uint8_t  p_14, uint64_t  p_15);




static int32_t  func_1(void)
{ 
    int64_t l_16 = 0xD21F1EB32A831D26LL;
    int32_t l_36[3];
    int8_t l_133 = 0x37L;
    int8_t l_143 = 0x52L;
    int32_t l_156 = 0xF12706A3L;
    uint64_t l_166[1][4] = {{1UL,1UL,1UL,1UL}};
    int32_t l_179[1][2];
    uint32_t l_221 = 0xF0B5030AL;
    uint32_t l_286 = 0UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_36[i] = 0x11721670L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_179[i][j] = 0x250D9091L;
    }
    if ((safe_add_func_int64_t_s_s((func_4((g_37 |= ((safe_mul_func_int16_t_s_s(g_10, (l_36[1] = (func_11(((l_16 , (((((l_16 < 0xC25B054DBBE56890LL) , g_10) >= g_10) && g_10) , l_16)) , l_16), g_10, l_16, l_16) , g_10)))) || l_36[1])), g_10, g_10) , l_36[0]), g_103)))
    { 
        uint8_t l_112[2][4] = {{1UL,0x83L,1UL,0x83L},{1UL,0x83L,1UL,0x83L}};
        int32_t l_122 = 0x3052D3D2L;
        int64_t l_146 = 3L;
        int i, j;
        if ((((safe_sub_func_int64_t_s_s(((g_10 | (safe_mod_func_uint16_t_u_u(((g_37 | ((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((l_112[0][3] , l_36[1]) ^ g_50), g_103)), 0UL)) || l_36[1])) & (-1L)), l_112[0][2]))) , l_16), 0x4DFDC5D499989FA4LL)) , l_112[0][0]) != 0x55DFC961BCE71E83LL))
        { 
            uint32_t l_115 = 4294967290UL;
            int32_t l_116 = (-5L);
            for (g_10 = 12; (g_10 < (-2)); g_10 = safe_sub_func_uint8_t_u_u(g_10, 6))
            { 
                l_116 = l_115;
                if (g_37)
                    break;
                if (g_10)
                    continue;
            }
            l_116 = (((((((g_50 || l_112[0][3]) ^ 0x75L) && l_16) , g_37) >= g_37) & 0x6266L) , 0x53666129L);
        }
        else
        { 
            uint8_t l_121 = 0x0EL;
            uint8_t l_147 = 2UL;
            l_122 = (+((g_32 = (safe_mod_func_int16_t_s_s(((((safe_unary_minus_func_int64_t_s(l_121)) < ((0x80F4L | 65535UL) >= g_37)) >= g_10) || (-6L)), g_85))) , 0x5AA8E544L));
            if ((safe_mod_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(((((((~(((g_132 = (1L || (g_53 <= (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_112[0][0], l_121)), l_112[0][0]))))) <= l_133) , l_112[1][3])) || l_121) == l_121) <= g_50) && 0xA4B2L) == 1UL), l_121)) ^ g_37), g_10)))
            { 
                return l_121;
            }
            else
            { 
                int64_t l_142[3][3] = {{0xA63A172F119E3977LL,0xA63A172F119E3977LL,3L},{0xA63A172F119E3977LL,0xA63A172F119E3977LL,3L},{0xA63A172F119E3977LL,0xA63A172F119E3977LL,3L}};
                int i, j;
                l_36[1] &= (safe_add_func_uint64_t_u_u(((((safe_lshift_func_int8_t_s_u((~(g_53 , (((safe_mul_func_uint16_t_u_u((g_141[0] |= (g_132 < 18446744073709551615UL)), l_142[0][0])) != l_142[1][0]) | l_122))), 3)) <= g_53) < g_132) >= l_142[0][0]), g_132));
                if (g_37)
                    goto lbl_144;
lbl_144:
                l_143 = l_36[1];
                g_37 |= 0L;
            }
            --l_147;
        }
    }
    else
    { 
        uint32_t l_154 = 0xEE683975L;
        int64_t l_180 = (-8L);
        int32_t l_189 = 0x220E445EL;
        int16_t l_208 = 0x3335L;
        uint16_t l_260 = 65526UL;
        l_156 = (g_10 >= (g_10 & ((safe_div_func_int8_t_s_s(((g_155[0] = (((safe_add_func_int16_t_s_s((l_154 = 0xCB15L), 0L)) | g_141[1]) ^ 0xBEDA80D1L)) && g_53), 0xECL)) != (-1L))));
        if (((safe_rshift_func_int8_t_s_u(((g_103 != (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((((+((l_36[2] &= (-9L)) || (safe_add_func_int64_t_s_s((l_154 >= 1UL), l_36[1])))) ^ 0x1D187037L) ^ l_166[0][3]), 1)), 3))) || l_143), l_154)) == g_103))
        { 
            int32_t l_176 = (-7L);
            uint32_t l_178[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_178[i][j] = 0x8A6B184CL;
            }
            for (g_53 = 2; (g_53 >= 0); g_53 -= 1)
            { 
                int i;
                l_36[g_53] = ((l_176 = (safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(g_141[(g_53 + 1)])), 0xE9L)), (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(g_141[(g_53 + 1)], l_36[g_53])), l_36[g_53]))))) && l_36[g_53]);
                l_179[0][1] = (((!g_155[0]) >= g_37) & (((-1L) == l_178[0][0]) < l_36[g_53]));
                return l_180;
            }
        }
        else
        { 
            int32_t l_198 = 0x48A50E59L;
            uint64_t l_206 = 0x5287A9B704C175E3LL;
            int32_t l_207 = (-1L);
lbl_192:
            l_189 = (l_166[0][2] ^ ((safe_rshift_func_uint16_t_u_s(0x626EL, 5)) , (l_179[0][1] ^= (safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_10, g_155[0])), g_155[0])), g_141[0])))));
            for (l_156 = (-20); (l_156 == (-5)); ++l_156)
            { 
                int8_t l_193 = 0x44L;
                if (g_50)
                    goto lbl_192;
                l_189 ^= l_193;
            }
            g_37 = (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((l_198 = 0UL) == (safe_sub_func_int64_t_s_s(((((l_208 = (safe_lshift_func_uint8_t_u_u(((l_207 = ((~(((safe_lshift_func_uint8_t_u_u((((-8L) == (0x99B11781L >= l_154)) < l_206), 5)) & l_206) , 0xFF53B879365D8EA3LL)) ^ l_133)) == 0x7268L), l_180))) , l_208) == g_145) | l_166[0][3]), 0xAB9BFD8F9DC3F5DALL))), g_37)), (-7L))) >= l_166[0][3]) > l_166[0][3]);
        }
        if ((safe_add_func_int8_t_s_s((((l_189 = g_155[0]) >= 6L) , 0x2CL), l_166[0][3])))
        { 
            uint32_t l_226 = 0xACB65B9FL;
            int32_t l_253[4][4] = {{(-1L),(-1L),0x1DD9B939L,0x25B8A729L},{(-1L),(-3L),(-1L),0x1DD9B939L},{(-1L),0x1DD9B939L,0x1DD9B939L,(-1L)},{0x1DD9B939L,(-1L),(-3L),(-1L)}};
            int i, j;
            if (((safe_unary_minus_func_int8_t_s(((l_179[0][0] , g_214[0][3]) < (0x0DL == g_103)))) , g_141[0]))
            { 
                l_36[2] ^= (safe_sub_func_int64_t_s_s((g_132 >= ((g_145 , (0xF33289A5L == 0x11DE0336L)) >= (-7L))), 0xBE1DBCCE7B0101A3LL));
                g_37 |= (l_154 <= (safe_rshift_func_int8_t_s_s(((l_221--) , ((((safe_lshift_func_uint16_t_u_u((((g_50 = g_214[0][3]) > 0xBEL) == g_141[2]), 12)) , g_214[0][3]) > g_85) & l_154)), l_226)));
            }
            else
            { 
                --g_227;
                l_36[1] = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_s(l_154, (l_208 <= ((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((((-9L) == 5UL) || 1UL), g_155[0])) < l_189) ^ 0UL), 6)) || 0x1ABEA055L)))) ^ g_53) ^ l_226), 7)) > 3L), 11)) != g_53), l_36[1]));
            }
            g_10 = ((safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((g_214[0][0] & g_32), (((safe_div_func_int32_t_s_s(g_85, 1UL)) | g_85) & l_16))), g_155[0])), l_226)) , g_103);
            g_10 ^= ((l_156 &= (+(+(g_252 = (-1L))))) == ((--g_141[0]) > (g_261 |= (((safe_mul_func_int8_t_s_s((g_50 &= ((g_53 && (safe_div_func_uint32_t_u_u(0x4BEC2C41L, 0xF4B611BEL))) , l_260)), l_16)) , g_37) != l_189))));
        }
        else
        { 
            uint8_t l_267 = 0UL;
            for (l_221 = 0; (l_221 <= 19); l_221 = safe_add_func_uint32_t_u_u(l_221, 3))
            { 
                int16_t l_264[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_264[i][j] = 1L;
                }
                return l_264[0][0];
            }
            for (g_10 = 0; (g_10 <= (-5)); g_10 = safe_sub_func_int64_t_s_s(g_10, 1))
            { 
                l_179[0][0] |= g_214[1][2];
                ++l_267;
            }
        }
    }
    l_179[0][1] = (safe_sub_func_int8_t_s_s(l_179[0][1], (safe_sub_func_uint64_t_u_u(l_166[0][3], (safe_div_func_int16_t_s_s(0x4B06L, l_156))))));
    l_179[0][1] = ((safe_lshift_func_int16_t_s_u((((safe_mod_func_uint8_t_u_u((((g_32--) , ((g_155[0] = g_85) ^ ((0x2BE114A6L ^ ((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(l_36[0], g_252)) & g_37) ^ l_179[0][1]), 0xD14D15A4L)) && l_286)) | g_214[0][3]))) ^ 0x7317L), (-10L))) & l_179[0][1]) , (-6L)), 0)) , 1L);
    return g_214[0][1];
}



static int64_t  func_4(uint32_t  p_5, uint8_t  p_6, uint32_t  p_7)
{ 
    int64_t l_45 = (-1L);
    int64_t l_47 = 4L;
    int32_t l_82 = 1L;
    if ((safe_lshift_func_int16_t_s_u((+(safe_mul_func_int8_t_s_s((((l_45 == (+0xF6C5533FL)) ^ ((g_10 | l_47) <= g_10)) & p_7), g_10))), 5)))
    { 
        uint32_t l_54 = 6UL;
        int32_t l_55 = (-1L);
        g_10 = p_5;
        l_55 = ((l_54 = ((((safe_mul_func_int16_t_s_s((g_53 = ((p_6 = ((g_50 = g_37) & g_37)) < (safe_lshift_func_uint16_t_u_u(0x76A4L, 7)))), 0x039CL)) != 4UL) && g_37) || l_47)) == 0x87L);
    }
    else
    { 
        int16_t l_64 = 0L;
        int32_t l_83 = 0x32C35242L;
        for (l_47 = 0; (l_47 > (-20)); --l_47)
        { 
            int32_t l_60 = 0x1E3C1DC0L;
            for (p_5 = 0; (p_5 > 56); p_5 = safe_add_func_int16_t_s_s(p_5, 7))
            { 
                uint64_t l_61[4][3];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_61[i][j] = 18446744073709551610UL;
                }
                --l_61[0][0];
                if (g_53)
                    break;
                l_64 = g_50;
            }
        }
        for (g_37 = 7; (g_37 == 5); g_37--)
        { 
            uint64_t l_84[3];
            int i;
            for (i = 0; i < 3; i++)
                l_84[i] = 18446744073709551612UL;
            g_85 |= ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((((safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((((safe_mul_func_int8_t_s_s((g_50 = ((((l_83 &= (g_37 > ((+(((l_82 ^= ((g_10 && ((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((g_53 = 9L) != g_10), g_50)), p_6)) != 65535UL)) && g_37)) == p_5) && l_45)) <= g_50))) >= g_10) <= p_6) & p_5)), 0x52L)) < g_32) , g_37) != g_37), p_6)), 0x0B10L)) >= l_84[1]) && 0xC29F8D9EL) , l_64) , g_32), p_5)), p_6)) , l_84[2]);
            g_10 = 0x27642088L;
            if (l_64)
                break;
        }
    }
    g_10 = 0L;
    for (g_85 = 0; (g_85 <= 19); g_85++)
    { 
        uint32_t l_101 = 0x4168CBA4L;
        int32_t l_102 = 0x50B9A650L;
        for (l_47 = (-4); (l_47 > (-6)); l_47--)
        { 
            int64_t l_92 = 0L;
            l_102 ^= (safe_add_func_uint16_t_u_u((l_92 || (safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(l_92, ((p_6 = p_5) & l_101))) | 0x26L) || l_101), 5)) | l_47) > 0x54CFL) > l_82), g_85)) ^ g_53), 1))), p_5));
        }
    }
    return g_37;
}



static int8_t  func_11(uint32_t  p_12, int32_t  p_13, uint8_t  p_14, uint64_t  p_15)
{ 
    int32_t l_25 = 0xE5741311L;
    int32_t l_29 = 7L;
    int32_t l_30 = 1L;
    int32_t l_31 = 0x24B2E809L;
    uint32_t l_35[1];
    int i;
    for (i = 0; i < 1; i++)
        l_35[i] = 0UL;
    l_35[0] = ((l_29 = (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(l_25, l_25)) < (+(l_30 = (safe_rshift_func_uint16_t_u_u((g_32++), 4))))), p_13)), 0x80335900B0881DDALL)) , g_32), 0))) < p_15);
    return g_10;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_145, "g_145", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_155[i], "g_155[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_214[i][j], "g_214[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
